/* made by EzioChiu.
 */

@protocol UITextPasteSession <NSObject>

@required

- (<UITextPasteSessionDelegate> *)delegate;
- (bool)isPastingBlocked;
- (NSAttributedString *)pasteResult;
- (void)pasteWithAnimator:(id <UITextPasteAnimating>)arg1;
- (_UIPositionedAttributedString *)positionedPasteResult;
- (UITextRange *)range;
- (void)setDelegate:(id <UITextPasteSessionDelegate>)arg1;

@end
