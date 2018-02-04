/* made by EzioChiu.
 */

@protocol LKDocumentStoreDelegate <NSObject>

@optional

- (void)documentStore:(LKDocumentStore *)arg1 didAddDocument:(NSDictionary *)arg2;
- (void)documentStore:(LKDocumentStore *)arg1 didModifyDocument:(NSDictionary *)arg2;
- (void)documentStore:(LKDocumentStore *)arg1 didRemoveDocument:(NSDictionary *)arg2;

@end