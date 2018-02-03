/* made by EzioChiu.
 */

@protocol NSURLSessionStreamDelegate <NSURLSessionTaskDelegate>

@optional

- (void)URLSession:(NSURLSession *)arg1 betterRouteDiscoveredForStreamTask:(NSURLSessionStreamTask *)arg2;
- (void)URLSession:(NSURLSession *)arg1 readClosedForStreamTask:(NSURLSessionStreamTask *)arg2;
- (void)URLSession:(NSURLSession *)arg1 streamTask:(NSURLSessionStreamTask *)arg2 didBecomeInputStream:(NSInputStream *)arg3 outputStream:(NSOutputStream *)arg4;
- (void)URLSession:(NSURLSession *)arg1 writeClosedForStreamTask:(NSURLSessionStreamTask *)arg2;

@end