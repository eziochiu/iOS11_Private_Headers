/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSubscribeToPodcastCollection : SADomainCommand

@property (nonatomic, retain) SAMPPodcastCollection *podcastCollection;

+ (id)subscribeToPodcastCollection;
+ (id)subscribeToPodcastCollectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)podcastCollection;
- (bool)requiresResponse;
- (void)setPodcastCollection:(id)arg1;

@end
