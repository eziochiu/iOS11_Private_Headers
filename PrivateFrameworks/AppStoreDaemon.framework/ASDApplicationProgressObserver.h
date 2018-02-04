/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDApplicationProgressObserver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSMutableDictionary * _requests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_hasCanMapDatabaseEntitlement;
+ (id)_progressForBundleID:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)_dequeueRequestForBundleID:(id)arg1;
- (void)_fullfilRequestForBundleID:(id)arg1 withProgress:(id)arg2;
- (bool)_requestExistsForBundleID:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)cancelRequestForBundleID:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)requestProgressForBundleID:(id)arg1 completionHandler:(id /* block */)arg2;

@end
