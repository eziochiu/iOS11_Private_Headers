/* made by EzioChiu.
 */

@protocol WGWidgetListFooterViewDelegate <NSObject>

@optional

- (UIView *)widgetListFooterView:(WGWidgetListFooterView *)arg1 customBackgroundViewForItem:(id)arg2;
- (void)widgetListFooterViewAvailableNewWidgetsUpdated:(WGWidgetListFooterView *)arg1;

@end
