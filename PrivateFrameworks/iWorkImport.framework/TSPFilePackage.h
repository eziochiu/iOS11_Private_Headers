/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPFilePackage : TSPPackage {
    TSUZipArchive * _componentZipArchive;
}

+ (bool)isValidOrEmptyPackageAtURL:(id)arg1 hasNativeUTI:(bool)arg2;
+ (bool)isValidPackageAtURL:(id)arg1;
+ (bool)isValidPackageAtZipArchive:(id)arg1;
+ (unsigned long long)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)arg1;

- (void).cxx_destruct;
- (id)componentZipArchive;
- (bool)didReloadZipArchive:(id)arg1 error:(id*)arg2;
- (bool)hasDataAtRelativePath:(id)arg1;
- (id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2 packageURL:(id)arg3 lastModificationDate:(out id*)arg4;
- (id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(id /* block */)arg2 error:(id*)arg3;
- (id)newRawDataReadChannelAtRelativePath:(id)arg1;
- (id)packageEntryInfoAtRelativePath:(id)arg1 error:(id*)arg2;
- (long long)packageType;
- (void)prepareForDocumentReplacementWithSuccess:(bool)arg1 forSafeSave:(bool)arg2 originalURL:(id)arg3;

@end
