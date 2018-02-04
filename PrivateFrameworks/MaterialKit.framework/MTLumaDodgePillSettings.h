/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTLumaDodgePillSettings : _UISettings {
    MTLumaDodgePillStyleSettings * _blackSettings;
    double  _brightLumaThreshold;
    double  _colorAddWhiteness;
    double  _darkLumaThreshold;
    double  _edgeSpacing;
    MTLumaDodgePillStyleSettings * _graySettings;
    double  _height;
    double  _initialLumaThreshold;
    double  _maxWidth;
    double  _minWidth;
    MTLumaDodgePillStyleSettings * _noneSettings;
    MTLumaDodgePillStyleSettings * _thinSettings;
    MTLumaDodgePillStyleSettings * _whiteSettings;
}

@property (nonatomic, retain) MTLumaDodgePillStyleSettings *blackSettings;
@property (nonatomic) double brightLumaThreshold;
@property (nonatomic) double colorAddWhiteness;
@property (nonatomic) double darkLumaThreshold;
@property (nonatomic) double edgeSpacing;
@property (nonatomic, retain) MTLumaDodgePillStyleSettings *graySettings;
@property (nonatomic) double height;
@property (nonatomic) double initialLumaThreshold;
@property (nonatomic) double maxWidth;
@property (nonatomic) double minWidth;
@property (nonatomic, retain) MTLumaDodgePillStyleSettings *noneSettings;
@property (nonatomic, retain) MTLumaDodgePillStyleSettings *thinSettings;
@property (nonatomic, retain) MTLumaDodgePillStyleSettings *whiteSettings;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)blackSettings;
- (double)brightLumaThreshold;
- (double)colorAddWhiteness;
- (double)darkLumaThreshold;
- (double)edgeSpacing;
- (id)graySettings;
- (double)height;
- (double)initialLumaThreshold;
- (double)maxWidth;
- (double)minWidth;
- (id)noneSettings;
- (void)setBlackSettings:(id)arg1;
- (void)setBrightLumaThreshold:(double)arg1;
- (void)setColorAddWhiteness:(double)arg1;
- (void)setDarkLumaThreshold:(double)arg1;
- (void)setDefaultValues;
- (void)setEdgeSpacing:(double)arg1;
- (void)setGraySettings:(id)arg1;
- (void)setHeight:(double)arg1;
- (void)setInitialLumaThreshold:(double)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setMinWidth:(double)arg1;
- (void)setNoneSettings:(id)arg1;
- (void)setThinSettings:(id)arg1;
- (void)setWhiteSettings:(id)arg1;
- (id)thinSettings;
- (void)updateWithSettingsFromArchive:(id)arg1;
- (id)whiteSettings;

@end