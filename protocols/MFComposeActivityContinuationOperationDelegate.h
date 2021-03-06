/* made by EzioChiu.
 */

@protocol MFComposeActivityContinuationOperationDelegate <NSObject>

@required

- (void)activityContinuationOperation:(MFComposeActivityContinuationOperation *)arg1 didFailWithError:(NSError *)arg2;
- (void)activityContinuationOperation:(MFComposeActivityContinuationOperation *)arg1 didFinishReceivingData:(NSData *)arg2;
- (void)activityContinuationOperation:(MFComposeActivityContinuationOperation *)arg1 didFinishSendingDataWithResult:(unsigned long long)arg2;
- (void)activityContinuationOperationReceivedBytes:(MFComposeActivityContinuationOperation *)arg1;

@end
