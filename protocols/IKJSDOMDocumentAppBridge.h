/* made by EzioChiu.
 */

@protocol IKJSDOMDocumentAppBridge <NSObject>

@required

- (NSArray *)impressionsMatching:(NSString *)arg1 reset:(bool)arg2;
- (NSArray *)recordedImpressions;
- (NSArray *)recordedImpressions:(bool)arg1;
- (void)runTestWithName:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)scrollToTop;
- (void)setNeedsUpdateForDocument:(IKDOMDocument *)arg1;
- (NSArray *)snapshotImpressions;
- (void)updateForDocument:(IKDOMDocument *)arg1;

@end