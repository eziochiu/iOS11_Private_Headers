/* made by EzioChiu.
 */

@protocol WGWidgetListViewControllerDelegatePrivate <WGWidgetListViewControllerDelegate>

@optional

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentOccludingInsetForWidgetListViewController:(WGWidgetListViewController *)arg1;
- (UIView *)widgetListViewController:(WGWidgetListViewController *)arg1 newCustomBackgroundViewForItemInList:(id)arg2;

@end
