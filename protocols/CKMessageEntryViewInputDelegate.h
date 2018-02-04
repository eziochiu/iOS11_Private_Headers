/* made by EzioChiu.
 */

@protocol CKMessageEntryViewInputDelegate <NSObject>

@required

- (bool)messageEntryShouldHideCaret:(CKMessageEntryView *)arg1;
- (void)messageEntryViewBrowserButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidTakeFocus:(CKMessageEntryView *)arg1;
- (void)messageEntryViewHandwritingButtonHit:(CKMessageEntryView *)arg1;
- (long long)messageEntryViewHighLightInputButton:(CKMessageEntryView *)arg1;
- (void)messageEntryViewPhotoButtonHit:(CKMessageEntryView *)arg1;

@optional

- (void)messageEntryView:(CKMessageEntryView *)arg1 didSelectPluginAtIndex:(NSIndexPath *)arg2;
- (void)messageEntryViewDidCollapse:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidExpand:(CKMessageEntryView *)arg1;

@end