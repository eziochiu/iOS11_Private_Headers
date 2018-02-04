/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTVolumeChangeNotifier : NSObject {
    NSMutableSet * ringerSilentChangedHandlers;
    NSMutableSet * ringerVolumeChangedHandlers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addRingerSwitchChangedHandler:(id /* block */)arg1;
- (void)addVolumeChangedHandler:(id /* block */)arg1;
- (id)init;
- (void)ringerSilentChanged;
- (void)ringerVolumeChanged:(id)arg1;

@end
