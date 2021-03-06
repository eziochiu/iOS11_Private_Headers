/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrivateChannelMembershipController : FCPrivateDataController <FCAppActivityObserving> {
    NSMutableSet * _membershipReferences;
    NSDictionary * _membershipsByChannelID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *membershipReferences;
@property (nonatomic, retain) NSDictionary *membershipsByChannelID;
@property (readonly) Class superclass;

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;

- (void).cxx_destruct;
- (void)activityObservingApplicationDidBecomeActive;
- (void)addItem:(id)arg1 toStore:(bool)arg2;
- (void)addObserver:(id)arg1;
- (void)changedMembershipsFrom:(id)arg1 toMemberships:(id)arg2;
- (void)checkArticleID:(id)arg1 inFeedDescriptors:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)checkNextArticleID:(id)arg1 inFeedDescriptors:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)dealloc;
- (id)feedDescriptorForDraftFeedForChannelID:(id)arg1;
- (void)fetchMembershipsWithIDs:(id)arg1 queue:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (bool)hasMemberships;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (void)isAllowedToSeeArticleID:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)isAllowedToSeeDraftsForChannelID:(id)arg1;
- (bool)isMemberOfChannelID:(id)arg1;
- (void)loadLocalCachesFromStore;
- (id)membershipReferences;
- (id)membershipsByChannelID;
- (id)referenceToMembershipForMembershipID:(id)arg1;
- (void)refreshPublicMemberships;
- (void)removeItemWithItemID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setMembershipReferences:(id)arg1;
- (void)setMembershipsByChannelID:(id)arg1;

@end
