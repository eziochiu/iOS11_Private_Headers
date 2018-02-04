/* made by EzioChiu.
 */

@protocol SUAssetMatcher <NSObject>

@required

- (NSString *)assetType;
- (ASAsset *)findMatchFromCandidates:(NSArray *)arg1 error:(id*)arg2;

@end
