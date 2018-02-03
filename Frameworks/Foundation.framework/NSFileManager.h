/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileManager : NSObject

@property (readonly, copy) NSString *currentDirectoryPath;
@property <NSFileManagerDelegate> *delegate;
@property (readonly, copy) NSURL *homeDirectoryForCurrentUser;
@property (readonly, copy) NSURL *temporaryDirectory;
@property (readonly, copy) <NSObject><NSCopying><NSCoding> *ubiquityIdentityToken;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)defaultManager;

- (id)URLForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 appropriateForURL:(id)arg3 create:(bool)arg4 error:(id*)arg5;
- (id)URLForPublishingUbiquitousItemAtURL:(id)arg1 expirationDate:(id*)arg2 error:(id*)arg3;
- (id)URLForUbiquityContainerIdentifier:(id)arg1;
- (id)URLsForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2;
- (id)_URLForReplacingItemAtURL:(id)arg1 error:(id*)arg2;
- (id)_URLForTrashingItemAtURL:(id)arg1 create:(bool)arg2 error:(id*)arg3;
- (id)_attributesOfItemAtPath:(id)arg1 filterResourceFork:(bool)arg2 error:(id*)arg3;
- (id)_attributesOfItemAtURL:(id)arg1 filterResourceFork:(bool)arg2 error:(id*)arg3;
- (id)_displayPathForPath:(id)arg1;
- (id)_info;
- (void)_performRemoveFileAtPath:(id)arg1;
- (void)_postUbiquityAccountChangeNotification:(id)arg1;
- (bool)_processCanAccessUbiquityIdentityToken;
- (bool)_processHasUbiquityContainerEntitlement;
- (bool)_processUsesCloudServices;
- (void)_registerForUbiquityAccountChangeNotifications;
- (void)_web_backgroundRemoveFileAtPath:(id)arg1;
- (void)_web_backgroundRemoveLeftoverFiles:(id)arg1;
- (id)_web_carbonPathForPath_nowarn:(id)arg1;
- (bool)_web_changeFileAttributes_nowarn:(id)arg1 atPath:(id)arg2;
- (bool)_web_changeFinderAttributes:(id)arg1 forFileAtPath:(id)arg2;
- (bool)_web_createDirectoryAtPathWithIntermediateDirectories:(id)arg1 attributes:(id)arg2;
- (bool)_web_createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (bool)_web_createFileAtPathWithIntermediateDirectories:(id)arg1 contents:(id)arg2 attributes:(id)arg3 directoryAttributes:(id)arg4;
- (bool)_web_createIntermediateDirectoriesForPath_nowarn:(id)arg1 attributes:(id)arg2;
- (bool)_web_fileExistsAtPath_nowarn:(id)arg1 isDirectory:(bool*)arg2 traverseLink:(bool)arg3;
- (void)_web_noteFileChangedAtPath_nowarn:(id)arg1;
- (id)_web_pathWithUniqueFilenameForPath:(id)arg1;
- (bool)_web_removeFileOnlyAtPath:(id)arg1;
- (id)_web_startupVolumeName_nowarn;
- (id)_web_visibleItemsInDirectoryAtPath:(id)arg1;
- (id)attributesOfFileSystemForPath:(id)arg1 error:(id*)arg2;
- (id)attributesOfItemAtPath:(id)arg1 error:(id*)arg2;
- (bool)changeCurrentDirectoryPath:(id)arg1;
- (bool)changeFileAttributes:(id)arg1 atPath:(id)arg2;
- (id)componentsToDisplayForPath:(id)arg1;
- (id)containerURLForSecurityApplicationGroupIdentifier:(id)arg1;
- (id)contentsAtPath:(id)arg1;
- (bool)contentsEqualAtPath:(id)arg1 andPath:(id)arg2;
- (id)contentsOfDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)createDirectoryAtPath:(id)arg1 attributes:(id)arg2;
- (bool)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(bool)arg2 attributes:(id)arg3 error:(id*)arg4;
- (bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(bool)arg2 attributes:(id)arg3 error:(id*)arg4;
- (bool)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (bool)createSymbolicLinkAtPath:(id)arg1 pathContent:(id)arg2;
- (bool)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id*)arg3;
- (bool)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id*)arg3;
- (id)currentDirectoryPath;
- (void)dealloc;
- (id)delegate;
- (id)destinationOfSymbolicLinkAtPath:(id)arg1 error:(id*)arg2;
- (bool)directoryCanBeCreatedAtPath:(id)arg1;
- (id)directoryContentsAtPath:(id)arg1;
- (id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(bool)arg4;
- (id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(bool)arg4 error:(id*)arg5;
- (id)displayNameAtPath:(id)arg1;
- (id)enumeratorAtPath:(id)arg1;
- (id)enumeratorAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(id /* block */)arg4;
- (bool)evictUbiquitousItemAtURL:(id)arg1 error:(id*)arg2;
- (id)extendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3;
- (id)extendedAttributesAtPath:(id)arg1 error:(id*)arg2;
- (id)fileAttributesAtPath:(id)arg1 traverseLink:(bool)arg2;
- (bool)fileExistsAtPath:(id)arg1;
- (bool)fileExistsAtPath:(id)arg1 isDirectory:(bool*)arg2;
- (id)fileSystemAttributesAtPath:(id)arg1;
- (const char *)fileSystemRepresentationWithPath:(id)arg1;
- (bool)filesystemItemCopyOperation:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
- (bool)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
- (bool)filesystemItemLinkOperation:(id)arg1 shouldLinkItemAtPath:(id)arg2 toPath:(id)arg3;
- (bool)filesystemItemLinkOperation:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtPath:(id)arg3 toPath:(id)arg4;
- (bool)filesystemItemMoveOperation:(id)arg1 shouldMoveItemAtPath:(id)arg2 toPath:(id)arg3;
- (bool)filesystemItemMoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtPath:(id)arg3 toPath:(id)arg4;
- (bool)filesystemItemRemoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (bool)filesystemItemRemoveOperation:(id)arg1 shouldRemoveItemAtPath:(id)arg2;
- (void)getFileProviderMessageInterfacesForItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getFileProviderServicesForItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2 withPath:(id)arg3;
- (bool)getRelationship:(long long*)arg1 ofDirectory:(unsigned long long)arg2 inDomain:(unsigned long long)arg3 toItemAtURL:(id)arg4 error:(id*)arg5;
- (bool)getRelationship:(long long*)arg1 ofDirectoryAtURL:(id)arg2 toItemAtURL:(id)arg3 error:(id*)arg4;
- (bool)isDeletableFileAtPath:(id)arg1;
- (bool)isExecutableFileAtPath:(id)arg1;
- (bool)isReadableFileAtPath:(id)arg1;
- (bool)isUbiquitousItemAtURL:(id)arg1;
- (bool)isWritableFileAtPath:(id)arg1;
- (bool)linkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (bool)linkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)arg1 options:(unsigned long long)arg2;
- (bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (id)pathContentOfSymbolicLinkAtPath:(id)arg1;
- (bool)removeExtendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3;
- (bool)removeFileAtPath:(id)arg1 handler:(id)arg2;
- (bool)removeItemAtPath:(id)arg1 error:(id*)arg2;
- (bool)removeItemAtURL:(id)arg1 error:(id*)arg2;
- (bool)replaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned long long)arg4 resultingItemURL:(id*)arg5 error:(id*)arg6;
- (bool)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (bool)setExtendedAttribute:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 error:(id*)arg4;
- (bool)setUbiquitous:(bool)arg1 itemAtURL:(id)arg2 destinationURL:(id)arg3 error:(id*)arg4;
- (bool)startDownloadingUbiquitousItemAtURL:(id)arg1 error:(id*)arg2;
- (id)stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
- (id)subpathsAtPath:(id)arg1;
- (id)subpathsOfDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (id)temporaryDirectory;
- (bool)trashItemAtURL:(id)arg1 resultingItemURL:(id*)arg2 error:(id*)arg3;
- (id)ubiquityIdentityToken;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

- (bool)fp_trashItemAtURL:(id)arg1 resultingItemURL:(id*)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities

- (bool)_cutIsPathOnMissingVolume:(id)arg1;
- (id)cutCreateUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (id)cutRandomTemporaryPathWithFileName:(id)arg1;
- (id)cutUniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)_webkit_createTemporaryDirectoryWithTemplatePrefix:(id)arg1;
- (id)_webkit_pathWithUniqueFilenameForPath:(id)arg1;

@end
