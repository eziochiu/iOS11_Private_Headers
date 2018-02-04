/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCCachedThumbnail : DCCachedFile {
    DCCachedItem * _underlyingItem;
}

@property (readonly, retain) DCCachedItem *underlyingItem;

- (void).cxx_destruct;
- (id)_contentsFullPath;
- (id)_directoryPath;
- (id)_localGenerationIdentifier;
- (id)_localGenerationIdentifierFullPath;
- (id)contents;
- (id)fullPath;
- (id)initWithUnderlyingItem:(id)arg1;
- (id)parentContentsMetadata;
- (id)underlyingItem;

@end
