/* made by EzioChiu
   Image: /bootstrap/Library/SBInject/AnemoneCore.dylib
 */

@interface ANEMSettingsManager : NSObject {
    bool  _CGImageHookEnabled;
    NSMutableArray * _eventHandlers;
    bool  _loadOnlyThemedCGImages;
    bool  _optithemeEnabled;
    NSArray * _themeSettings;
}

+ (id)sharedManager;

- (void)addEventHandler:(id)arg1;
- (void)forceReloadNow;
- (id)init;
- (bool)isCGImageHookEnabled;
- (bool)masksOnly;
- (bool)onlyLoadThemedCGImages;
- (void)setCGImageHookEnabled:(bool)arg1;
- (void)setOnlyLoadThemedCGImages:(bool)arg1;
- (id)themeSettings;
- (id)themesDir;

@end
