/* made by EzioChiu.
 */

@protocol SearchUIResultViewTestingDelegate <SearchUIResultViewDelegate>

@optional

- (void)resultViewController:(SearchUIResultViewController *)arg1 updatedTableViewController:(UITableViewController *)arg2 withSections:(NSArray *)arg3;

@end