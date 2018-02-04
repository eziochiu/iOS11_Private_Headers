/* made by EzioChiu.
 */

@protocol NUFeedDataProvider <NUFeedBlueprintProvider>

@required

- (UICollectionViewLayout *)collectionViewLayout;
- (<NUFeedHeadlineCollectionViewCellRenderer> *)headlineRenderer;

@end
