/* made by EzioChiu.
 */

@protocol XCTAsyncActivity <NSObject>

@required

- (NSError *)error;
- (void)finishWithError:(NSError *)arg1;
- (bool)timedOut;

@end
