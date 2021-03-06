/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailDataSourceCell : NTKCFaceDetailToggleCell {
    NSString * _bundleIdentifier;
    UIImageView * _iconImageView;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, retain) UIImageView *iconImageView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)iconImageView;
- (id)initWithIdentifier:(id)arg1 andLabel:(id)arg2;
- (void)layoutSubviews;
- (void)setIconImageView:(id)arg1;

@end
