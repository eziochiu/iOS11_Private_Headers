/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationPriorityList : NSObject <NCNotificationList> {
    NSMutableOrderedSet * _requests;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableOrderedSet *requests;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clearRequestsWithPersistence:(unsigned long long)arg1;
- (id)_identifierForNotificationRequest:(id)arg1;
- (unsigned long long)_indexOfRequestMatchingNotificationRequest:(id)arg1;
- (unsigned long long)_insertionIndexForNotificationRequest:(id)arg1;
- (id)allNotificationRequests;
- (id)clearAllRequests;
- (id)clearNonPersistentRequests;
- (id)clearRequestsPassingTest:(id /* block */)arg1;
- (bool)containsNotificationRequestMatchingRequest:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)indexOfNotificationRequestMatchingRequest:(id)arg1;
- (id)init;
- (unsigned long long)insertNotificationRequest:(id)arg1;
- (unsigned long long)insertionIndexForNotificationRequest:(id)arg1;
- (unsigned long long)modifyNotificationRequest:(id)arg1;
- (unsigned long long)removeNotificationRequest:(id)arg1;
- (id)requestAtIndex:(unsigned long long)arg1;
- (id)requests;
- (void)setRequests:(id)arg1;

@end
