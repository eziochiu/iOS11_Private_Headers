/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKPlayActivityLookupRequestOperation : WLKNetworkRequestOperation {
    NSDictionary * _metadataByIdentifier;
    NSArray * _playActivityIdentifiers;
}

@property (nonatomic, readonly, copy) NSDictionary *metadataByIdentifier;
@property (nonatomic, readonly, copy) NSArray *playActivityIdentifiers;

+ (id)identifierForPlayActivityID:(id)arg1 channelID:(id)arg2 duration:(id)arg3;

- (void).cxx_destruct;
- (void)didFinish;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifiers:(id)arg1;
- (id)metadataByIdentifier;
- (id)playActivityIdentifiers;
- (id)responseProcessor;

@end
