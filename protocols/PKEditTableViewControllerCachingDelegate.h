/* made by EzioChiu.
 */

@protocol PKEditTableViewControllerCachingDelegate <NSObject>

@required

- (PKPass *)passAtIndexPath:(NSIndexPath *)arg1;
- (void)prefetchItemsAtIndexPaths:(NSArray *)arg1;

@end
