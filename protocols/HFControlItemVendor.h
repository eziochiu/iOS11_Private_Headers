/* made by EzioChiu.
 */

@protocol HFControlItemVendor <NSObject>

@required

- (NSSet *)allControlItems;
- (NSArray *)controlPanelItems;
- (HFIncrementalStateControlItem *)incrementalStateControlItem;
- (HFControlItem<HFPrimaryStateWriter> *)primaryStateControlItem;

@end
