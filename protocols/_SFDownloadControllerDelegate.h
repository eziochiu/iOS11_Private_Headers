/* made by EzioChiu.
 */

@protocol _SFDownloadControllerDelegate <NSObject>

@required

- (NSString *)downloadBackgroundTaskName;
- (void)fileDownloadDidFinish:(_SFDownload *)arg1;

@end
