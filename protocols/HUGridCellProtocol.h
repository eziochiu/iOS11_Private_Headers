/* made by EzioChiu.
 */

@protocol HUGridCellProtocol <NSObject, HUCellProtocol>

@required

+ (Class)layoutOptionsClass;

- (bool)areCellContentsHidden;
- (HUGridCellLayoutOptions *)layoutOptions;
- (void)setCellContentsHidden:(bool)arg1;
- (void)setLayoutOptions:(HUGridCellLayoutOptions *)arg1;

@optional

- (bool)isRearranging;
- (void)setRearranging:(bool)arg1;

@end