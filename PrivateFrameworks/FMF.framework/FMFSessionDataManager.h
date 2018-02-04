/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFSessionDataManager : NSObject {
    NSSet * _followers;
    NSSet * _following;
    NSSet * _locations;
    NSMutableDictionary * _locationsCache;
}

@property (nonatomic, retain) NSSet *followers;
@property (nonatomic, retain) NSSet *following;
@property (nonatomic, retain) NSSet *locations;
@property (nonatomic, retain) NSMutableDictionary *locationsCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)abDidChange;
- (void)abPreferencesDidChange;
- (id)favoritesOrdered;
- (id)followerForHandle:(id)arg1;
- (id)followers;
- (id)following;
- (id)followingForHandle:(id)arg1;
- (id)locationForHandle:(id)arg1;
- (id)locations;
- (id)locationsCache;
- (id)offerExpirationForHandle:(id)arg1 groupId:(id)arg2;
- (void)setFollowers:(id)arg1;
- (void)setFollowing:(id)arg1;
- (void)setLocations:(id)arg1;
- (void)setLocationsCache:(id)arg1;

@end
