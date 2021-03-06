/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSAttachmentsService : NSObject <UNSNotificationRepositoryObserver, UNSPendingNotificationRepositoryObserver> {
    UNSAttachmentsRepository * _attachmentsRepository;
    UNSNotificationRepository * _notificationRepository;
    UNSNotificationSchedulingService * _notificationSchedulingService;
    UNSPendingNotificationRepository * _pendingNotificationRepository;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_attachmentURLsRemovedByReplaceUpdate:(id)arg1;
+ (id)_defaultRepositoryDirectory;
+ (id)_notificationIdentifiersForNotificationRecords:(id)arg1;
+ (id)_stagingDirectory;

- (void).cxx_destruct;
- (void)_beginObservingNotificationChanges;
- (void)_notificationIdentifiersForBundleIdentifier:(id)arg1 replyOnQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_queue_applicationDidUninstall:(id)arg1;
- (void)_queue_applicationsDidUninstall:(id)arg1;
- (void)_queue_deleteAttachmentDataForNotificationRecord:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_queue_deleteAttachmentDataForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_queue_ensureIntegrityWithCompletionHandler:(id /* block */)arg1;
- (void)_queue_getAttachmentDataForAttachment:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_queue_resolveAttachmentsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 error:(id*)arg4;
- (id)_queue_resolvedFileURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id*)arg5;
- (id)_queue_resolvedURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id*)arg5;
- (id)_queue_validatedRepositoryURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id*)arg5;
- (void)_repositoryDidPerformUpdates:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_temporaryAttachmentFileURL;
- (void)applicationsDidUninstall:(id)arg1;
- (void)ensureIntegrityWithCompletionHandler:(id /* block */)arg1;
- (void)getAttachmentDataForAttachment:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithNotificationRepository:(id)arg1 notificationSchedulingService:(id)arg2 pendingNotificationRepository:(id)arg3;
- (void)notificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)pendingNotificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)resolveAttachmentsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)resolveAttachmentsSkippingErrorsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 completionHandler:(id /* block */)arg4;

@end
