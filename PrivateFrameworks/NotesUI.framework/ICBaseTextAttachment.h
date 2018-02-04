/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICBaseTextAttachment : NSTextAttachment <TTAttachment> {
    ICAttachment * _attachment;
}

@property (nonatomic, retain) ICAttachment *attachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowsTextAttachmentView;
- (id)attachment;
- (id)attachmentAttributesForAttributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (id)attachmentIdentifier;
- (id)attachmentInContext:(id)arg1;
- (id)attachmentUTI;
- (bool)canDragWithoutSelecting;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (void)fixAttachmentForAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forPlainText:(bool)arg3;
- (id)initWithAttachment:(id)arg1;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (bool)isEqualToModelComparable:(id)arg1;
- (id)printableTextContent;
- (void)setAttachment:(id)arg1;
- (bool)usesTextAttachmentView;
- (double)viewCornerRadius;

@end