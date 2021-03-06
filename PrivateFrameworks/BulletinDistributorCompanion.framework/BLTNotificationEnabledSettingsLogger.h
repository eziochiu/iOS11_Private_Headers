/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTNotificationEnabledSettingsLogger : NSObject {
    double  _lastLogTime;
    BLTSectionInfoList * _sectionInfoList;
}

@property (nonatomic, retain) BLTSectionInfoList *sectionInfoList;

+ (id)sharedNotificationEnabledSettingsLogger:(id)arg1;

- (void).cxx_destruct;
- (void)_log;
- (void)_performActivity:(id)arg1;
- (void)_registerActivity;
- (id)init;
- (id)sectionInfoList;
- (void)setSectionInfoList:(id)arg1;

@end
