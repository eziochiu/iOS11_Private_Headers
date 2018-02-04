/* made by EzioChiu.
 */

@protocol INCacheableObjectManagerDelegate <NSObject>

@required

- (void)handleCacheableObject:(id <INCacheableObject>)arg1 fromCacheableObjectManager:(INCacheableObjectManager *)arg2;

@end
