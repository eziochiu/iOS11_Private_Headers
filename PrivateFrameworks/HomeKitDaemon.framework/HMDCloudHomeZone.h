/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudHomeZone : HMDCloudZone {
    NSMutableDictionary * _perUserShareGroups;
    HMDCloudShareGroup * _shareGroup;
    bool  _sharedHome;
}

@property (nonatomic, readonly) NSMutableDictionary *perUserShareGroups;
@property (nonatomic, retain) HMDCloudShareGroup *shareGroup;
@property (getter=isSharedHome, nonatomic, readonly) bool sharedHome;

+ (void)createHomeZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(id /* block */)arg5;
+ (id)zoneRootRecordName;
+ (id)zoneSharedRootRecordName;
+ (id)zoneSubscriptionName:(id)arg1;

- (void).cxx_destruct;
- (void)addCloudRecord:(id)arg1 ownerID:(id)arg2;
- (id)createCloudZoneChangeTemporaryCache:(bool)arg1;
- (id)description;
- (bool)isRootRecord:(id)arg1;
- (bool)isSharedHome;
- (id)perUserShareGroups;
- (void)setServerChangeToken:(id)arg1;
- (void)setShareGroup:(id)arg1;
- (id)shareGroup;

@end
