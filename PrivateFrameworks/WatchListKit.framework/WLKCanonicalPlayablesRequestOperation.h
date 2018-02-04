/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKCanonicalPlayablesRequestOperation : WLKNetworkRequestOperation {
    NSString * _canonicalID;
}

@property (nonatomic, readonly, copy) NSString *canonicalID;

- (void).cxx_destruct;
- (id)canonicalID;
- (id)initWithCanonicalID:(id)arg1 profiles:(id)arg2;
- (id)responseProcessor;

@end
