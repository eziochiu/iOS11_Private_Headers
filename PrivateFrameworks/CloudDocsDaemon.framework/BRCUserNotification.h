/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUserNotification : NSObject <BRCUserNotifier> {
    struct __CFUserNotification { } * _cfUserNotification;
    NSMutableDictionary * _dialogInfo;
    NSObject<OS_dispatch_source> * _displaySource;
    unsigned long long  _nextDisplayBeginTime;
    id  _progressSubscriber;
    struct __CFRunLoopSource { } * _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_displayDialogWithType:(unsigned long long)arg1 dict:(id)arg2 options:(id)arg3 userReplyBlock:(id /* block */)arg4;
- (void)_displayDialogWithType:(unsigned long long)arg1 dict:(id)arg2 userReplyBlock:(id /* block */)arg3;
- (void)_hideCurrentDialog;
- (id)_localizationKey:(id)arg1 forDocumentKindOfApplication:(id)arg2;
- (id)_localizationKey:(id)arg1 forOSAndDocumentKindOfApplication:(id)arg2;
- (id)_localizationKeyForOS:(id)arg1;
- (id /* block */)_logWrapUserReplyBlock:(id /* block */)arg1;
- (void)_updateDialogWithType:(unsigned long long)arg1 dict:(id)arg2;
- (void)_updateDialogWithType:(unsigned long long)arg1 dict:(id)arg2 userReplyBlock:(id /* block */)arg3;
- (void)close;
- (void)dealloc;
- (id)init;
- (void)moveToFront;
- (void)showErrorDeviceOfflineForShareURL:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorDocumentsAppNotVisibleForShareURL:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorInstallNativeAppForShareMetadata:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorItemUnavailableOrAccessRestrictedForShareURL:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorNativeAppDisabledByProfileForShareMetadata:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorParticipantLimitReachedForShareURL:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorReasonUnknownForShareURL:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorServerNotReachableForShareURL:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorSignInToiCloudForShareMetadata:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorTurnOniCloudDriveForShareMetadata:(id)arg1 reply:(id /* block */)arg2;
- (void)showJoinDialogForShareMetadata:(id)arg1 session:(id)arg2 reply:(id /* block */)arg3;

@end
