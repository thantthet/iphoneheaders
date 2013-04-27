/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#ifndef IPF_UIKIT_STRUCTS_H
#define IPF_UIKIT_STRUCTS_H 1

#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import <WebCore/WKTypes.h>
#import <WebCore/WKUtilities.h>
#import <GraphicsServices/GSEvent.h>
#import <GraphicsServices/GSHeartbeat.h>
#import <QuartzCore/QuartzCore.h>
#import <Availability2.h>
#import <UIKit/UITextInputTraits.h>

typedef struct {
	unsigned char pathIndex;
	unsigned char pathIdentity;
	unsigned char pathProximity;
	float pathPressure;
	float pathMajorRadius;
	CGPoint pathLocation;
	void* pathWindow;
} UIPathInfo;
typedef UIPathInfo XXStruct__FxRIA;

typedef struct {
	int _field1;
	unsigned short _field2;
	unsigned short _field3;
	float _field4;
	float _field5;
	float _field6;
	float _field7;
	float _field8;
	float _field9;
	unsigned char _field10;
	unsigned char _field11;
	XXStruct__FxRIA _field12[0];
} XXStruct_$jUSvD;

typedef struct {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
	float _field5;
} XXStruct_iyXfGC;

typedef struct {
	CGRect left;
	CGRect middle;
	CGRect right;
} XXStruct_UUz0SD;

typedef struct {
	int _field1;
	int _field2;
	int _field3;
	int _field4;
	BOOL _field5;
	BOOL _field6;
} XXStruct_7U_TLD;

typedef struct {
	BOOL _field1;
	BOOL _field2;
	BOOL _field3;
	float _field4;
	float _field5;
	int _field6;
	CGRect _field7;
	CGRect _field8;
} XXStruct_TF$i3B;

typedef struct {
	XXStruct_UUz0SD top;
	XXStruct_UUz0SD middle;
	XXStruct_UUz0SD bottom;
} XXStruct_4cr1oD;

typedef struct {
	BOOL _field1;
	union {
		struct {
			id _field1;
			id _field2;
		} _field1;
		GSEventRef _field2;
	} _field2;
} XXStruct_CKAdxD;

typedef struct UIStatusBarData {
	BOOL itemIsEnabled[19];
	char timeString[32];
	int gsmSignalStrengthRaw;
	int gsmSignalStrengthBars;
	char serviceString[100];
	char serviceImageBlack[100];
	char serviceImageSilver[100];
	char operatorDirectory[1024];
	unsigned serviceContentType;
	int wifiSignalStrengthRaw;
	int wifiSignalStrengthBars;
	unsigned dataNetworkType;
	int batteryCapacity;
	unsigned batteryState;
	int bluetoothBatteryCapacity;
	int thermalColor;
	unsigned slowActivity : 1;
	char activityDisplayId[256];
	unsigned bluetoothConnected : 1;
	unsigned displayRawGSMSignal : 1;
	unsigned displayRawWifiSignal : 1;
} UIStatusBarData;
typedef UIStatusBarData XXStruct_AE4LvD;

@class UIView, UIImage;
typedef union {
	UIImage* image;
	UIView* view;
} XXUnion_a01swB;

typedef struct {
	float _field1;
	float _field2;
	float _field3;
} XXStruct_NwkmQC;

typedef struct USet* USetRef;

typedef enum UIKeyDefinitionDownActionFlag {
        UIKeyFlagActivateKey           = 1,
        UIKeyFlagSendActionOnTouchDown = 2,
        UIKeyFlagPlaySound             = 4,
        UIKeyFlagShiftKey              = 0x10,
        UIKeyFlagInternationalKey      = 0x20,
        UIKeyFlagDeleteKey             = 0x40,
        UIKeyFlagHasLongPressAction    = 0x80,
        UIKeyFlagRomanAccents          = 0x8000,
        UIKeyFlagURLDomainVariants     = 0x10000,
        UIKeyFlagEmailDomainVariants   = 0x20000,
        UIKeyFlagCurrencyVariants      = 0x40000,       // ?
        UIKeyFlagFunctionKeysUnknown   = 0x80000
} UIKeyDefinitionDownActionFlag;

typedef enum UIKeyDefinitionUpActionFlag {
        UIKeyFlagOutputValue           = 2,             // do not set this field if the value is intended to be invisible, e.g. "shift", "delete", etc.
        UIKeyFlagDeactivateKey         = 8,
        UIKeyFlagSwitchPlane           = 0x100,
        UIKeyFlagToggleShift           = 0x400,
        UIKeyFlagStopAutoDelete        = 0x800,
        UIKeyFlagChangeInputMode       = 0x1000,        // effective only for the intl key.
        UIKeyFlagSkipCandidateList     = 0x10000
} UIKeyDefinitionUpActionFlag;

typedef enum UIKeyType {
        UIKeyTypeNormal = 1,
        UIKeyTypeDelete = 3,
        UIKeyTypeSpace  = 4,
        UIKeyTypeReturn = 5,
        UIKeyTypeShift  = 6,
        UIKeyTypeInternational = 7
} UIKeyType;

@class NSString;
typedef struct {
	CGRect bg_area;
	CGRect pop_bg_area;
	CGRect pop_char_area;
	CGRect accent_frame;
	CGRect pop_padding;
	NSString* value;
	NSString* shifted;
	enum UIKeyDefinitionDownActionFlag down_flags;
	enum UIKeyDefinitionUpActionFlag up_flags;
	enum UIKeyType key_type;
	NSString* pop_type;
} XXStruct_MMLx8B;

typedef XXStruct_MMLx8B XXStruct_K4qLnD;
typedef XXStruct_MMLx8B UIKeyDefinition;

typedef struct _WKClassInfo* WKClassInfoRef;

typedef struct TiledSurface* TiledSurfaceRef;

@class WAKWindow;
typedef struct WKWindow {
	WKObject _field1;
	WAKWindow* _field2;
	CGRect _field3;
	WKViewRef _field4;
	WKViewRef _field5;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	CGSize _field6;
	CGSize _field7;
#else
	TiledSurfaceRef _field6;
	unsigned _field7 : 1;
#endif
	unsigned _field8 : 1;
} WKWindow;

typedef struct CADoublePoint {
	double width;
	double height;
} CADoublePoint;
typedef CADoublePoint XXStruct_meWoWB;

#pragma mark UIKBLength, for use in UIKBGeometry only.

enum UIKBLengthUnit {
	UIKBLengthUnitPixel = 1,
	UIKBLengthUnitPercentage = 2,
};

typedef struct {
	float amount;
	int unit;
} UIKBLength;
typedef UIKBLength XXStruct_tp$7nC;

static inline UIKBLength UIKBLengthMakePixel(float x) {
	UIKBLength r;
	r.amount = x;
	r.unit = UIKBLengthUnitPixel;
	return r;
}
static inline UIKBLength UIKBLengthMakePercentage(float x) {
	UIKBLength r;
	r.amount = x;
	r.unit = UIKBLengthUnitPercentage;
	return r;
}
static const UIKBLength UIKBLengthZero = {0, 0};

#pragma mark -

typedef struct {
	id _field1;
	unsigned _field2;
} XXStruct_HeigOC;

#if __IPHONE_OS_VERSION_MAX_ALLOWED > __IPHONE_3_0
typedef struct UINibDecoderObjectEntry {
	unsigned _field1;
	unsigned _field2;
} UINibDecoderObjectEntry;

typedef struct UINibDecoderValue {
	unsigned _field1;
	unsigned _field2;
} UINibDecoderValue;

typedef struct UINibArchiveTableInfo {
	unsigned count;
	unsigned offset;
} UINibArchiveTableInfo;

typedef struct UINibDecoderHeader {
	unsigned char type[10];
	unsigned formatVersion;
	unsigned coderVersion;
	UINibArchiveTableInfo objects;
	UINibArchiveTableInfo keys;
	UINibArchiveTableInfo values;
	UINibArchiveTableInfo classes;
} UINibDecoderHeader;

typedef struct UINibDecoderRecursiveState {
	int objectID;
	int nextGenericKey;
	unsigned nextValueSearchIndex;
	BOOL replaced;
} UINibDecoderRecursiveState;

typedef struct UIKeyToKeyIDCache {
	NSString* previousKey[64];
	void* previousKeyID[64];
	BOOL previousKeyExists[64];
	int hashHits;
	int hashHotMisses;
	int hashColdMisses;
} UIKeyToKeyIDCache;

typedef struct UIKeyAndScopeToValueCache {
	unsigned previousScope;
	unsigned previousKey;
	UINibDecoderValue* previousValue;
} UIKeyAndScopeToValueCache;

typedef struct UIStringIDTableBucket {
	NSString* _field1;
	unsigned _field2;
	struct UIStringIDTableBucket* _field3;
} UIStringIDTableBucket;
#endif

typedef struct {
	id _field1;
	id _field2;
	id _field3;
	id _field4;
} XXStruct_Xx1ZfA;

typedef struct {
	int _field1;
	int _field2;
	id _field3;
	id _field4;
	float _field5;
	int _field6;
	SEL _field7;
	id _field8;
} XXStruct_b4LybD;

typedef struct UIKeyboardAnimationGeometry {
	CGPoint outPosition;
	CGPoint inPosition;
	CGRect bounds;
	CGAffineTransform transform;
} UIKeyboardAnimationGeometry, UIPeripheralAnimationGeometry;

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
typedef struct {
	BOOL animateContentRotation;
	BOOL preserveHeight;
	BOOL avoidFadingBottomOfContent;
	float contentStretchRightEdgeInset;
	BOOL slideFooterOutAndIn;
	int edgeClip;
	float contentBottomInset;
	int startContentOrientation;
	CGRect startContentBounds;
	CGRect endContentBounds;
} XXStruct_Nw9VXC, XXStruct_t5OlHA;

typedef struct {
	UIImage* background;
	UIImage* leftDivider;
	UIImage* rightDivider;
	UIColor* textColor;
	UIColor* shadowColor;
	CGSize shadowOffset;
} XXStruct_KYn_rD, XXStruct_V3NSMA;

typedef struct {
	UIFont* _field1;
	float _field2;
	float _field3;
	XXStruct_KYn_rD _field4;
	XXStruct_KYn_rD _field5;
	XXStruct_KYn_rD _field6;
	XXStruct_KYn_rD _field7;
	BOOL _field8;
} XXStruct_V8l7SB;
typedef XXStruct_V8l7SB XXStruct_wXTbsB;

typedef struct {
	BOOL key[200];
	unsigned short width;
	unsigned short height;
	unsigned offset;
} XXStruct_0aX3CD;

typedef struct {
	unsigned version;
	unsigned minorVersion;
	unsigned magic;
	unsigned numImages;
	unsigned totalCacheSize;
} XXStruct_iXKIAB;

typedef struct SharedElements SharedElements;

// template<typename T>
struct COWQueue {
	unsigned m_size;
	unsigned m_capacity;
	SharedElements* m_elements;
};

typedef struct KBStrokeList {
	struct COWQueue/*<writing_point16_t>*/ _field1;
	struct COWQueue/*<int>*/ _field2;
	int _field3;
} KBStrokeList;

#endif

//---------

@class UIKBKeyboard, UIKBKey, NSArray, NSString, NSBundle;

#if __cplusplus
extern "C" {
#endif

/*! Draw the keyboard background in the specified rectangle.
 @param style iPhone-Standard or iPhone-Alert
 */
	void UIKBDrawKeyboardBackground(CGContextRef context, CGRect region, NSString* style);
/// Currently draws nothing.
	void UIKBDrawKeyboardOverlay(CGContextRef context, CGRect region, NSString* style);
	void UIKBDrawKey(CGContextRef context, UIKBKeyboard* keyboard, UIKBKey* key, int x);

	NSArray* UIKeyboardGetActiveInputModes();
	NSString* UIKeyboardGetCurrentInputMode();
	void UIKeyboardSetCurrentInputMode(NSString* mode);
	NSString* UIKeyboardLocalizedInputModeName(NSString* mode);
	NSString* UIKeyboardLocalizedString(NSString* theString, NSString* language, NSString* passNil);
	NSObject* UIKeyboardLocalizedObject(NSString* key, NSString* language, NSString* passNil, NSString* alsoPassNil);
	NSString* UIKeyboardGetCurrentUILanguage();
	NSArray* UIKeyboardGetSupportedInputModes();
	void UIKeyboardSetActiveInputModes(NSArray* modes);
	NSBundle* UIKeyboardBundleForInputMode(NSString* mode);
    Class UIKeyboardInputManagerClassForInputMode(NSString* mode);
    BOOL UIKeyboardInputModeUsesKBStar(NSString* mode);
    NSString* UIKeyboardGetKBStarKeyboardName(NSString* mode, NSString * orientation, UIKeyboardType type, UIKeyboardAppearance appearance);
    BOOL UIKeyboardLayoutDefaultTypeForInputModeIsASCIICapable(NSString* mode);

	extern NSString* UIKeyboardStringDismiss;
	extern NSString* UIKeyboardStringConfirm;
	extern NSString* UIKeyboardStringNextCandidate;
	extern NSString* UIKeyboardKeyReturn;
	extern NSString* UIKeyboardKeySpace;
    
    extern NSString* UIKBAttributeNameMoreAlternate;
    extern NSString* UIKBAttributeNameMoreRendering;
    extern NSString* UIKBAttributeNameShift;
    extern NSString* UIKBAttributeNameIgnoreShiftState;
    extern NSString* UIKBAttributeNameShiftAlternate;
    extern NSString* UIKBAttributeNameShiftRendering;
    extern NSString* UIKBAttributeNameAdaptiveKeys;
    extern NSString* UIKBAttributeNameAutoshift;
    extern NSString* UIKBAttributeNameShiftIsPlaneChooser;
    extern NSString* UIKBAttributeNameShiftRendering;
	
	typedef struct _UIKBTheme {
		// Foreground Gradient: For the background of the key.
		CGGradientRef backgroundGradient, foregroundGradient, shadowGradient;
		// Symbol color: For the font color of the key.
		CGColorRef backgroundColor, foregroundColor, highlightColor, symbolColor, symbolSecondaryColor;
		// Etch color: For the color of the key's label's shadow.
		CGColorRef etchColor, separatorLightColor, separatorMidColor, separatorDarkColor;
		
		uint32_t _30, _34, _38, _3c, _40, _44;
		
		CFStringRef fontName, fontSecondaryName;
		// Font size: the maximum font size.
		CGFloat fontSize, fontSecondarySize, fontKern, fontSecondaryKern, minFontSize;
		CGFloat keyRoundRectRadius;
		NSUInteger UID;
	}* UIKBThemeRef;
	UIKBThemeRef UIKBThemeCreate(UIKBKeyboard* keyboard, UIKBKey* key, int x);

	UIImage* _UIImageWithName(NSString* filename);
	
	/// Check the version of UIKit the application is linked to
	typedef enum {
		UIKitVersion2_0 = 0,
		UIKitVersion2_1 = 1,	// I'm not sure about these 3.
		UIKitVersion2_2 = 2,
		UIKitVersion3_0 = 3,
		UIKitVersion3_1 = 4,
	} UIKitVersion;
	BOOL _UIApplicationLinkedOnOrAfter(UIKitVersion version);

#if __cplusplus
}
#endif

#endif
