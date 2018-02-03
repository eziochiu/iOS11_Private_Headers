/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSPowerMonitor : NSObject {
    struct IONotificationPort { } * _notificationPort;
    unsigned int  _notifier;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;

@end
