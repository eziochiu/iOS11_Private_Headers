/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSplashScreenItem : NSObject {
    NSString * _fullDescription;
    UIImage * _icon;
    NSString * _title;
}

@property (nonatomic, retain) NSString *fullDescription;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) NSString *title;

+ (id)splashScreenItemWithDictionary:(id)arg1;
+ (id)splashScreenItemWithTitle:(id)arg1 icon:(id)arg2 fullDescription:(id)arg3;

- (void).cxx_destruct;
- (id)fullDescription;
- (id)icon;
- (void)setFullDescription:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end