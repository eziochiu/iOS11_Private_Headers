/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFUserNotificationSettingsManager : NSObject {
    NAFuture * _notificationSettingsFuture;
    NSHashTable * _observers;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (nonatomic, retain) NAFuture *notificationSettingsFuture;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) UNUserNotificationCenter *userNotificationCenter;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
- (void)addObserver:(id)arg1;
- (id)init;
- (id)notificationSettings;
- (id)notificationSettingsFuture;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setNotificationSettingsFuture:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setUserNotificationCenter:(id)arg1;
- (id)userNotificationCenter;

@end
