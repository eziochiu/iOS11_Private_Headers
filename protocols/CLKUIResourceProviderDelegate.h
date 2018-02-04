/* made by EzioChiu.
 */

@protocol CLKUIResourceProviderDelegate <NSObject>

@required

- (void)addResourceUuidsToKeep:(NSMutableSet *)arg1;
- (CLKUITextureBacking *)provideTextureBacking:(NSString *)arg1;

@end
