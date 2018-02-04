/* made by EzioChiu.
 */

@protocol SXDragable

@required

- (void)didEndDragging;
- (void)didStartDragging;
- (NSString *)dragIdentifier;
- (<UIItemProviderWriting> *)dragObject;
- (UIView *)dragPreviewView;

@end
