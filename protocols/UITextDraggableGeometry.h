/* made by EzioChiu.
 */

@protocol UITextDraggableGeometry <NSObject>

@required

- (NSArray *)draggableObjectsForTextRange:(UITextRange *)arg1;
- (long long)geometryOptions;
- (UITargetedDragPreview *)previewForDroppingText:(NSAttributedString *)arg1 toPosition:(UITextPosition *)arg2 inContainerView:(UIView *)arg3;
- (void)setGeometryOptions:(long long)arg1;
- (UITextRange *)textRangeForAttachmentInTextRange:(UITextRange *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (NSArray *)textRangesForAttachmentsInTextRange:(UITextRange *)arg1;

@end
