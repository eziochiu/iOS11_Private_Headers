/* made by EzioChiu
   Image: /bootstrap/Library/SBInject/AnemoneColors.dylib
 */

@interface ANEMTintColorManager : NSObject <AnemoneEventHandler> {
    NSMutableDictionary * _tintSettings;
}

+ (id)sharedInstance;

- (id)init;
- (void)loadSettings;
- (void)reloadTheme;
- (id)tintSettings;

@end
