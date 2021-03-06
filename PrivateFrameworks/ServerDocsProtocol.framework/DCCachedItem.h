/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCCachedItem : NSObject <DCCachedItem> {
    NSData * _documentIdentifier;
    bool  _hasBeenRemoved;
    DCRelativePath * _path;
    DCService * _service;
}

@property (readonly, retain) NSData *documentIdentifier;
@property (readonly) bool existsOnDisk;
@property (readonly, retain) DCFullPath *fullPath;
@property (readonly) bool isContentsUpToDate;
@property (readonly) bool isRemoteMetadataUpToDate;
@property (readonly) bool isRoot;
@property (readonly) bool isUpToDate;
@property (retain) NSDate *lastDownloadDate;
@property (readonly, retain) NSDate *lastRemoteMetadataUpdate;
@property (readonly, retain) NSData *lastRemoteMetadataVersionIdentifier;
@property (retain) NSDate *lastUploadDate;
@property (readonly, retain) NSDictionary *localMetadata;
@property (readonly, retain) NSDictionary *otherMetadata;
@property (readonly, retain) NSDictionary *parentContentsMetadata;
@property (readonly, retain) DCRelativePath *relativePath;
@property (readonly, retain) NSDictionary *remoteMetadata;
@property (readonly, retain) NSDictionary *remoteMetadataFromDisk;
@property (nonatomic, retain) DCService *service;
@property (readonly, retain) NSData *versionIdentifier;

- (void).cxx_destruct;
- (void)_clearRemoteMetadataOnDiskWithDocumentIdentifier:(id)arg1 versionIdentifier:(id)arg2;
- (void)_clearRemoteMetadataWithDocumentIdentifier:(id)arg1 versionIdentifier:(id)arg2;
- (id)_contents;
- (id)_contentsFullPath;
- (id)_dataKey;
- (id)_fileSystemMetadata;
- (id)_fileSystemMetadataWithoutNeedingLocking;
- (bool)_isUpToDateWithoutNeedingLocking;
- (id)_localGenerationIdentifier;
- (id)_localGenerationIdentifierFullPath;
- (id)_otherMetadataWithoutNeedingLocking;
- (id)_pathsKeyString;
- (id)_readDictionaryFromPath:(id)arg1;
- (bool)_replaceFileAtURL:(id)arg1 withData:(id)arg2 error:(id*)arg3;
- (bool)_replaceFileWithURL:(id)arg1 error:(id*)arg2;
- (void)_saveDictionary:(id)arg1 toPath:(id)arg2 previousVersionPath:(id)arg3;
- (void)_saveLastUpdateGenerationIdentifier;
- (void)_saveRemoteMetadataOnDisk:(id)arg1 documentIdentifier:(id)arg2 previousVersionIdentifier:(id)arg3;
- (void)_saveRootDocumentIdentifierOnDisk:(id)arg1;
- (void)_setLastRemoteMetadataUpdate:(id)arg1;
- (void)_setLastRemoteMetadataVersionIdentifier:(id)arg1;
- (void)_setOtherMetadataWithoutNeedingLocking:(id)arg1;
- (void)_setRemoteMetadataWithoutNeedingLocking:(id)arg1 error:(id*)arg2;
- (void)_setStoredLocalMetadataWithoutNeedingLocking:(id)arg1;
- (id)_storedLocalMetadata;
- (id)_storedLocalMetadataObjectForKey:(id)arg1;
- (id)_storedLocalMetadataWithoutNeedingLocking;
- (void)clearRemoteMetadata;
- (id)database;
- (id)debugDescription;
- (id)description;
- (id)documentIdentifier;
- (bool)existsOnDisk;
- (bool)existsOnServer;
- (id)fullPath;
- (bool)hasBeenDownloaded;
- (bool)hasBeenRemoved;
- (bool)hasBeenUploaded;
- (id)initWithRelativePath:(id)arg1;
- (bool)isContentsUpToDate;
- (bool)isRemoteMetadataUpToDate;
- (bool)isRoot;
- (bool)isUpToDate;
- (id)lastDownloadDate;
- (id)lastRemoteMetadataUpdate;
- (id)lastRemoteMetadataVersionIdentifier;
- (id)lastUploadDate;
- (id)localMetadata;
- (id)managedOtherMetadata;
- (bool)needsDownload;
- (bool)needsInitialDownload;
- (bool)needsInitialSynchronization;
- (bool)needsInitialUpload;
- (bool)needsUpload;
- (id)otherMetadata;
- (id)parent;
- (id)parentContentsMetadata;
- (unsigned long long)relativeAge;
- (id)relativePath;
- (id)remoteMetadata;
- (id)remoteMetadataFromDisk;
- (void)renameRelativePath:(id)arg1;
- (id)service;
- (void)setHasBeenRemoved:(bool)arg1;
- (void)setLastDownloadDate:(id)arg1;
- (void)setLastUploadDate:(id)arg1;
- (void)setService:(id)arg1;
- (bool)updateDocumentIdentifier:(id)arg1;
- (void)updateItemFromResponseContainer:(id)arg1;
- (id)versionIdentifier;

@end
