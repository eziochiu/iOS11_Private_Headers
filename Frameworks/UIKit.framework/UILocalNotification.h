/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UILocalNotification : NSObject <NSCoding, NSCopying>

@property (nonatomic, copy) NSString *alertAction;
@property (nonatomic, copy) NSString *alertBody;
@property (nonatomic, copy) NSString *alertLaunchImage;
@property (nonatomic, copy) NSString *alertTitle;
@property (nonatomic) bool allowSnooze;
@property (nonatomic) long long applicationIconBadgeNumber;
@property (nonatomic, retain) NSNumber *audioVolume;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *customLockSliderLabel;
@property (nonatomic, copy) NSDate *fireDate;
@property (nonatomic) bool fireNotificationsWhenAppRunning;
@property (nonatomic, copy) NSString *firedNotificationName;
@property (getter=isFromSnooze, nonatomic) bool fromSnooze;
@property (nonatomic) bool hasAction;
@property (nonatomic) bool hideAlertTitle;
@property (nonatomic) bool interruptAudioAndLockDevice;
@property (nonatomic) bool isTransient;
@property (nonatomic, copy) CLRegion *region;
@property (nonatomic) bool regionTriggersOnce;
@property (nonatomic) int remainingRepeatCount;
@property (nonatomic, copy) NSCalendar *repeatCalendar;
@property (nonatomic) unsigned long long repeatInterval;
@property (nonatomic) bool resumeApplicationInBackground;
@property (nonatomic) bool showAlarmStatusBarItem;
@property (nonatomic, copy) NSString *snoozedNotificationName;
@property (nonatomic, copy) NSString *soundName;
@property (nonatomic) int soundType;
@property (nonatomic, copy) NSString *threadIdentifier;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic) int totalRepeatCount;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, copy) NSString *vibrationName;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)clearNonSystemProperties;
- (long long)compareFireDates:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isTriggeredByDate;
- (bool)isTriggeredByRegion;
- (bool)isValid;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (void)validate;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (void)uns_safeSetUserInfo:(id)arg1;

@end
