/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCUserInfo : FCPrivateDataController <FCTagSettingsDelegate> {
    NSDate * _dateLastResetMeteredCount;
    bool  _iCloudAccountChanged;
    FCTagSettings * _tagSettings;
    NSNumber * _totalMeteredCount;
    bool  _useParsecResults;
}

@property (nonatomic, copy) NSDate *dateLastOpened;
@property (nonatomic, copy) NSDate *dateLastResetMeteredCount;
@property (nonatomic, readonly) NSDate *dateLastViewedSaved;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *feldsparID;
@property (nonatomic) bool hasShownProgressivePersonalizationWelcomeBrick;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool iCloudAccountChanged;
@property (nonatomic, readonly) bool mightNeedToUpdateOnboardingVersion;
@property (nonatomic, copy) NSNumber *monthlyMeteredCount;
@property (nonatomic, readonly, copy) NSString *notificationsUserID;
@property (nonatomic, copy) NSNumber *onboardingVersionNumber;
@property (nonatomic, readonly) unsigned long long progressivePersonalization;
@property (nonatomic, readonly) bool shouldShowDefaultForYou;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCTagSettings *tagSettings;
@property (nonatomic, copy) NSNumber *totalMeteredCount;
@property (nonatomic, readonly) bool useParsecResults;
@property (nonatomic) bool userHasCompletedFavoritesSetup;
@property (nonatomic, copy) NSDate *userStartDate;

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)desiredKeys;
+ (id)iCloudDataKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;
+ (id)userInfoCKRecordFromStore:(id)arg1;

- (void).cxx_destruct;
- (void)_persistNotificationsUserID:(id)arg1;
- (void)_removeiCloudDataValues;
- (void)accessTokenDidChangeForTagID:(id)arg1;
- (void)accessTokenRemovedForTagID:(id)arg1 userInitiated:(bool)arg2;
- (void)addModifyTagSettingsCommandToCommandQueue:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)asCKRecord;
- (bool)canHelpRestoreZoneName:(id)arg1;
- (id)dateLastOpened;
- (id)dateLastResetMeteredCount;
- (id)dateLastViewedSaved;
- (id)feldsparID;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (void)handleSyncWithUserInfoRecord:(id)arg1;
- (bool)hasShownProgressivePersonalizationWelcomeBrick;
- (bool)iCloudAccountChanged;
- (void)incrementMonthlyMeteredCountByOneWithArticleID:(id)arg1;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 iCloudAccountChanged:(bool)arg4;
- (void)loadLocalCachesFromStore;
- (void)markSavedAsViewed;
- (void)maybeUpdateOnboardingVersion:(id /* block */)arg1;
- (bool)mightNeedToUpdateOnboardingVersion;
- (id)monthlyMeteredCount;
- (id)notificationsUserID;
- (id)onboardingVersionNumber;
- (void)prepareForUse;
- (unsigned long long)progressivePersonalization;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setDateLastOpened:(id)arg1;
- (void)setDateLastResetMeteredCount:(id)arg1;
- (void)setFeldsparID:(id)arg1;
- (void)setHasShownProgressivePersonalizationWelcomeBrick:(bool)arg1;
- (void)setICloudAccountChanged:(bool)arg1;
- (void)setMonthlyMeteredCount:(id)arg1;
- (void)setOnboardingVersionNumber:(id)arg1;
- (void)setTagSettings:(id)arg1;
- (void)setTotalMeteredCount:(id)arg1;
- (void)setUserHasCompletedFavoritesSetup:(bool)arg1;
- (void)setUserStartDate:(id)arg1;
- (bool)shouldShowDefaultForYou;
- (void)syncLocalNotificationsUserID:(id)arg1 withRemoteNotificationsUserID:(id)arg2;
- (void)syncWithCompletion:(id /* block */)arg1;
- (id)tagSettings;
- (id)totalMeteredCount;
- (bool)useParsecResults;
- (bool)userHasCompletedFavoritesSetup;
- (id)userStartDate;
- (void)validateIsMeteredLimitReachedWithArticleID:(id)arg1 completion:(id /* block */)arg2;

@end
