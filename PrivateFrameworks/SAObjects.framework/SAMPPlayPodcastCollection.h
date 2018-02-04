/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPlayPodcastCollection : SADomainCommand

@property (nonatomic, copy) NSString *episodePlaybackOrder;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, retain) SAMPPodcastCollection *podcastCollection;

+ (id)playPodcastCollection;
+ (id)playPodcastCollectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)episodePlaybackOrder;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)mutatingCommand;
- (id)podcastCollection;
- (bool)requiresResponse;
- (void)setEpisodePlaybackOrder:(id)arg1;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setPodcastCollection:(id)arg1;

@end
