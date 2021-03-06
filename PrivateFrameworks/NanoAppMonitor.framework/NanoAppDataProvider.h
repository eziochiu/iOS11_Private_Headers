/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAppMonitor.framework/NanoAppMonitor
 */

@interface NanoAppDataProvider : NSObject {
    NSMutableSet * _appsOnNano;
    NARApplicationWorkspace * _narWorkspace;
}

@property (nonatomic, retain) NSMutableSet *appsOnNano;
@property (nonatomic, retain) NARApplicationWorkspace *narWorkspace;

- (void).cxx_destruct;
- (void)_appsDidChange:(id /* block */)arg1;
- (id)appsOnNano;
- (void)dealloc;
- (id)init;
- (void)isInstalledOnWatch:(id)arg1 completion:(id /* block */)arg2;
- (id)narWorkspace;
- (void)setAppsOnNano:(id)arg1;
- (void)setNarWorkspace:(id)arg1;
- (void)start:(id /* block */)arg1;
- (id)watchBundleIDForFirstPartyCompanionBundleID:(id)arg1;

@end
