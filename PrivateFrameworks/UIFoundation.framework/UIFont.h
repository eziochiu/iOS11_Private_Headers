/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface UIFont : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly) double ascender;
@property (nonatomic, readonly) double capHeight;
@property (nonatomic, readonly) double descender;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) UIFontDescriptor *fontDescriptor;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double leading;
@property (nonatomic, readonly) double lineHeight;
@property (nonatomic, readonly) double maximumPointSizeAfterScaling;
@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) double pointSizeForScaling;
@property (nonatomic, readonly) NSString *textStyleForScaling;
@property (nonatomic, readonly) double xHeight;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (void)_evictAllItemsFromFontAndFontDescriptorCaches;
+ (id)_fontWithDescriptor:(id)arg1 size:(double)arg2 textStyleForScaling:(id)arg3 pointSizeForScaling:(double)arg4 maximumPointSizeAfterScaling:(double)arg5 forIB:(bool)arg6;
+ (bool)_isSupportedDynamicFontTextStyle:(id)arg1;
+ (id)_lightSystemFontOfSize:(double)arg1;
+ (id)_opticalBoldSystemFontOfSize:(double)arg1;
+ (id)_opticalSystemFontOfSize:(double)arg1;
+ (double)_pointSize:(double)arg1 scaledLikeTextStyle:(id)arg2 maximumPointSize:(double)arg3 compatibleWithTraitCollection:(id)arg4;
+ (id)_preferredFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2;
+ (id)_preferredFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)_preferredFontForTextStyle:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3;
+ (double)_readableWidth;
+ (id)_sharedFontCache;
+ (id)_sharedZeroPointFont;
+ (id)_supportedDynamicFontStyles;
+ (id)_systemFontsOfSize:(double)arg1 traits:(int)arg2;
+ (id)_thinSystemFontOfSize:(double)arg1;
+ (id)_ultraLightSystemFontOfSize:(double)arg1;
+ (id)boldSystemFontOfSize:(double)arg1;
+ (double)buttonFontSize;
+ (id)classFallbacksForKeyedArchiver;
+ (id)defaultFontForTextStyle:(id)arg1;
+ (id)familyNames;
+ (id)fontNamesForFamilyName:(id)arg1;
+ (id)fontWithDescriptor:(id)arg1 size:(double)arg2;
+ (id)fontWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;
+ (id)fontWithMarkupDescription:(id)arg1;
+ (id)fontWithName:(id)arg1 size:(double)arg2;
+ (id)fontWithName:(id)arg1 size:(double)arg2 traits:(int)arg3;
+ (id)ib_preferredFontForTextStyle:(id)arg1;
+ (void)initialize;
+ (id)italicSystemFontOfSize:(double)arg1;
+ (double)labelFontSize;
+ (id)monospacedDigitSystemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)preferredFontForTextStyle:(id)arg1;
+ (id)preferredFontForTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)preferredFontForUsage:(id)arg1;
+ (id)preferredFontForUsage:(id)arg1 contentSizeCategoryName:(id)arg2;
+ (double)smallSystemFontSize;
+ (bool)supportsSecureCoding;
+ (id)systemFontOfSize:(double)arg1;
+ (id)systemFontOfSize:(double)arg1 traits:(int)arg2;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2 design:(id)arg3;
+ (double)systemFontSize;
+ (id)userFontOfSize:(double)arg1;

- (struct __CTFont { }*)CTFont;
- (id)_alternateSystemFonts;
- (double)_ascenderDeltaForBehavior:(long long)arg1;
- (struct CGFont { }*)_backingCGSFont;
- (double)_baseLineHeightForFont:(bool)arg1;
- (double)_bodyLeading;
- (unsigned int)_defaultGlyphForChar:(unsigned short)arg1;
- (double)_defaultLineHeightForUILayout;
- (id)_familyName;
- (id)_fontAdjustedForContentSizeCategoryCompatibleWithTraitCollection:(id)arg1;
- (id)_fontAdjustedForCurrentContentSizeCategory;
- (id)_fontScaledByScaleFactor:(double)arg1;
- (id)_fontScaledLikeTextStyle:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3 forIB:(bool)arg4;
- (bool)_getLatin1Glyphs:(const unsigned short**)arg1 advanceWidths:(const double**)arg2;
- (bool)_hasColorGlyphs;
- (bool)_isDefaultFace;
- (bool)_isHiraginoFont;
- (id)_kernOverride;
- (double)_leading;
- (double)_scaledValueForValue:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_textMatrixTransformForContext:(struct CGContext { }*)arg1;
- (double)_totalAdvancementForNativeGlyphs:(const unsigned short*)arg1 count:(long long)arg2;
- (struct CGSize { double x1; double x2; })advancementForGlyph:(unsigned short)arg1;
- (double)ascender;
- (id)bestMatchingFontForCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 actualCoveredLength:(unsigned long long*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForFont;
- (double)capHeight;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coveredCharacterSet;
- (double)descender;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)familyNameForCSSFontFamilyValue;
- (id)fontDescriptor;
- (id)fontName;
- (id)fontWithSize:(double)arg1;
- (void)getAdvancements:(struct CGSize { double x1; double x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned long long)arg3;
- (void)getBoundingRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)getCaretPositions:(double*)arg1 forGlyph:(unsigned int)arg2 maximumLength:(unsigned long long)arg3;
- (void)getVerticalOriginTranslations:(struct CGSize { double x1; double x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned long long)arg3;
- (unsigned short)glyphWithName:(id)arg1;
- (unsigned int)hyphenGlyphForLocale:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;
- (id)initWithMarkupDescription:(id)arg1;
- (id)initWithName:(id)arg1 size:(double)arg2;
- (bool)isFixedPitch;
- (bool)isIBFontMetricsScaledFont;
- (bool)isIBTextStyleFont;
- (bool)isSystemFont;
- (bool)isVertical;
- (id)lastResortFont;
- (double)leading;
- (double)lineHeight;
- (id)markupDescription;
- (double)maximumPointSizeAfterScaling;
- (unsigned long long)mostCompatibleStringEncoding;
- (unsigned long long)numberOfGlyphs;
- (double)pointSize;
- (double)pointSizeForScaling;
- (double)readableWidth;
- (unsigned long long)renderingMode;
- (id)screenFontWithRenderingMode:(unsigned long long)arg1;
- (void)setInContext:(struct CGContext { }*)arg1;
- (id)textStyleForScaling;
- (int)traits;
- (double)underlineThickness;
- (id)verticalFont;
- (double)xHeight;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_ui_bulletFontForFont:(id)arg1;

@end
