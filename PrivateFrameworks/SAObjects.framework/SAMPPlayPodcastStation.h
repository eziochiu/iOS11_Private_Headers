/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPlayPodcastStation : SADomainCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, retain) SAMPPodcastStation *station;

+ (id)playPodcastStation;
+ (id)playPodcastStationWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setStation:(id)arg1;
- (id)station;

@end
