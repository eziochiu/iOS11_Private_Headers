/* made by EzioChiu.
 */

@protocol SSDataCollectible <NSObject>

@required

- (NSString *)dataCollectionBundle;
- (NSMutableDictionary *)dataCollectionRepresentation;

@end
