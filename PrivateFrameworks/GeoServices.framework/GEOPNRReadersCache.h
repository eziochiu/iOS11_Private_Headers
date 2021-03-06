/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPNRReadersCache : NSObject {
    GEOPNRAccessTrieReader * _accessTrie;
    NSObject<OS_dispatch_queue> * _cacheQueue;
    GEOPNRCCTrieReader * _ccTrie;
    NSMutableDictionary * _phNoTries;
    NSMutableDictionary * _stringsFiles;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_cleanupOldCacheFiles;
- (id)accessReader;
- (id)ccReader;
- (id)init;
- (id)phoneNumReaderForCC:(id)arg1;
- (id)stringsReaderForCC:(id)arg1;
- (id)uncompressedFilePathForCC:(id)arg1 zippedFileExtension:(id)arg2 fileExtension:(id)arg3;

@end
