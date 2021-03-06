/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFToolbar : UIToolbar {
    _UIBackdropView * _backgroundView;
    _UIBackdropViewSettings * _customBackdropSettings;
    long long  _placement;
    UIView * _separator;
    unsigned long long  _tintStyle;
    bool  _usesDarkTheme;
}

@property (nonatomic, readonly) double URLFieldHorizontalMargin;
@property (nonatomic) bool backdropComputesColorSettings;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic, readonly) long long placement;
@property (nonatomic) unsigned long long tintStyle;
@property (nonatomic, readonly) long long toolbarSize;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (double)URLFieldHorizontalMargin;
- (id)_backdropInputSettings;
- (bool)_tintUsesDarkTheme;
- (bool)backdropComputesColorSettings;
- (id)backdropGroupName;
- (id)initWithPlacement:(long long)arg1;
- (void)layoutSubviews;
- (long long)placement;
- (void)setBackdropComputesColorSettings:(bool)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setTintStyle:(unsigned long long)arg1;
- (unsigned long long)tintStyle;
- (long long)toolbarSize;
- (void)updateBackdropSettings:(id)arg1;
- (void)updateTintColor;

@end
