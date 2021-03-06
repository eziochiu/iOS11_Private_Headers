/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaDetailTintInformation : NSObject <NSCopying> {
    UIColor * _actionableColor;
    UIColor * _backgroundColor;
    bool  _backgroundColorLight;
    UIColor * _primaryTextColor;
    UIColor * _separatorColor;
}

@property (nonatomic, readonly) UIColor *actionableColor;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (getter=isBackgroundColorLight, nonatomic, readonly) bool backgroundColorLight;
@property (nonatomic, readonly) UIColor *primaryTextColor;
@property (nonatomic, readonly) UIColor *separatorColor;

- (void).cxx_destruct;
- (id)actionableColor;
- (id)backgroundColor;
- (void)configureJSEventDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithArtworkColorAnalysis:(id)arg1;
- (bool)isBackgroundColorLight;
- (id)primaryTextColor;
- (id)separatorColor;

@end
