/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCCachedFile : DCCachedItem <DCCachedFile>

@property (readonly, retain) NSData *contents;

- (id)_contentsFullPath;
- (id)_localGenerationIdentifier;
- (id)_localGenerationIdentifierFullPath;
- (id)contents;
- (void)preflightUploadFromURL:(id)arg1;
- (void)registerFileForUploadOfURL:(id)arg1 taskIdentifier:(id)arg2;
- (void)restoreFileFromRemoteMetadata:(id)arg1;
- (void)updateFileFromURL:(id)arg1;
- (void)updateUploadedFileFromRemoteMetadata:(id)arg1;
- (void)updateUploadedFileToDropBox;

@end
