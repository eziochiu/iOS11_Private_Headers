/* made by EzioChiu
   Image: /bootstrap/Library/SBInject/AnemoneColors.dylib
 */

@interface ANEMColorOverrideManager : NSObject <AnemoneEventHandler> {
    NSMutableDictionary * _colorSettings;
}

+ (id)sharedInstance;

- (id)colorSettings;
- (id)init;
- (void)loadSettings;
- (void)reloadTheme;

@end
