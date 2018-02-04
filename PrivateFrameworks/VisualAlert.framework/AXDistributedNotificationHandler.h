/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

@interface AXDistributedNotificationHandler : AXNotificationHandler

+ (void)postDistributedNotificationWithName:(id)arg1;

- (id)_notificationTypeDescription;
- (void)_startObserving;
- (void)_stopObserving;

@end
