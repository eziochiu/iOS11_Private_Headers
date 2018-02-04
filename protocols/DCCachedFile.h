/* made by EzioChiu.
 */

@protocol DCCachedFile

@required

- (NSData *)contents;
- (void)preflightUploadFromURL:(NSURL *)arg1;
- (void)registerFileForUploadOfURL:(NSURL *)arg1 taskIdentifier:(NSNumber *)arg2;
- (void)restoreFileFromRemoteMetadata:(NSDictionary *)arg1;
- (void)updateFileFromURL:(NSURL *)arg1;
- (void)updateUploadedFileFromRemoteMetadata:(NSDictionary *)arg1;
- (void)updateUploadedFileToDropBox;

@end
