/* made by EzioChiu.
 */

@protocol SXDragManagerDataSource

@required

- (<SXDragable> *)dragManager:(SXDragManager *)arg1 dragableAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (UIView *)viewForDragManager:(SXDragManager *)arg1;

@end
