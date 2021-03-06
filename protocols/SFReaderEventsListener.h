/* made by EzioChiu.
 */

@protocol SFReaderEventsListener <NSObject>

@required

- (void)didCollectReaderContentForMail:(NSString *)arg1;
- (void)didCollectReadingListItemInfo:(NSDictionary *)arg1 bookmarkID:(NSNumber *)arg2;
- (void)didDetermineReaderAvailability:(bool)arg1 dueToSameDocumentNavigation:(bool)arg2;
- (void)didPrepareReaderContentForDisplay:(NSString *)arg1;
- (void)didPrepareReaderContentForPrinting:(_WKFrameHandle *)arg1;
- (void)didSetReaderConfiguration:(NSDictionary *)arg1;
- (void)readerTextWasExtracted:(NSString *)arg1;

@end
