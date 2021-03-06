/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIResourceManager : NSObject {
    NSMutableArray * _providers;
    NSMutableDictionary * _recentProvidersForUuid;
    NSMutableDictionary * _texturesByUuid;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_newTextureForUuid:(id)arg1;
- (void)_purgeAllUnconditionally;
- (void)_purgeTextures:(id)arg1;
- (void)dealloc;
- (id)delegateForUuid:(id)arg1;
- (id)init;
- (void)purge:(id)arg1;
- (void)purgeAllUnused;
- (id)textureForUuid:(id)arg1 delegate:(id)arg2;

@end
