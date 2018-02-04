/* made by EzioChiu.
 */

@protocol PLSearchableAssetCollection <NSObject>

@required

- (NSArray *)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
- (unsigned long long)searchIndexCategory;
- (NSString *)searchIndexContents;
- (NSString *)uuid;

@end