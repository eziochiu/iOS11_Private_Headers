/* made by EzioChiu
   Image: /bootstrap/Library/SBInject/AnemoneColors.dylib
 */

@interface ANEMBlurManager : NSObject <AnemoneEventHandler> {
    NSMutableDictionary * _blurSettings;
}

+ (id)sharedInstance;

- (id)blurSettings;
- (id)init;
- (void)loadSettings;
- (void)reloadTheme;

@end
