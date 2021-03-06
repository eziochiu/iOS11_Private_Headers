/* made by EzioChiu.
 */

@protocol MSCLComposePostViewDelegate <UIScrollViewDelegate>

@optional

- (void)composePostView:(MSCLComposePostView *)arg1 didRemoveAttachmentView:(MSCLAttachmentPreviewView *)arg2 atIndex:(long long)arg3;
- (void)composePostView:(MSCLComposePostView *)arg1 didSelectAttachment:(MSCLAttachment *)arg2 atIndex:(long long)arg3;
- (MSCLTag *)composePostView:(MSCLComposePostView *)arg1 tagForString:(NSString *)arg2;
- (void)composePostViewTextDidChange:(MSCLComposePostView *)arg1;
- (void)composePostViewTextSelectionDidChange:(MSCLComposePostView *)arg1;

@end
