/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUINotificationsImpl_iOS : NSObject <UNUserNotificationCenterDelegate, WLKUINotificationsImpl> {
    WLKUINotificationCenter * center;
}

@property (nonatomic) WLKUINotificationCenter *center;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_JSONDictForResponse:(id)arg1;

- (void).cxx_destruct;
- (id)center;
- (id)init;
- (void)post:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4;
- (void)setCenter:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
