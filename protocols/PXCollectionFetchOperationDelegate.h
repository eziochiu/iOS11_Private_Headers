/* made by EzioChiu.
 */

@protocol PXCollectionFetchOperationDelegate <NSObject>

@optional

- (void)collectionFetchOperationDidCancel:(PXCollectionFetchOperation *)arg1;
- (void)collectionFetchOperationDidComplete:(PXCollectionFetchOperation *)arg1;

@end
