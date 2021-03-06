/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICDrawingTextAttachment : ICTextAttachment

- (struct { double x1; double x2; double x3; double x4; })attachmentBoundsMargins;
- (id)attachmentFileWrapper;
- (id)printableTextAttachment;
- (bool)requiresSpaceAfterAttachmentForPrinting;
- (bool)supportsMultipleThumbnailsOnSameLine;
- (bool)supportsThumbnailView;
- (double)viewCornerRadius;

@end
