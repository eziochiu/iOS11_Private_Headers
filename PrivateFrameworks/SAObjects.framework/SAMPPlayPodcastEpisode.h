/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPlayPodcastEpisode : SADomainCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, retain) SAMPPodcast *podcastEpisode;

+ (id)playPodcastEpisode;
+ (id)playPodcastEpisodeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)mutatingCommand;
- (id)podcastEpisode;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setPodcastEpisode:(id)arg1;

@end
