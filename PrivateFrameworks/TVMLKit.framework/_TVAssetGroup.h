/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVAssetGroup : NSObject {
    NSString * _cachePath;
    NSMutableDictionary * _cacheRecords;
    unsigned long long  _currentCacheSize;
    long long  _groupType;
    unsigned long long  _maxCacheSize;
    unsigned long long  _pruneCount;
}

@property (nonatomic, retain) NSString *cachePath;
@property (nonatomic, retain) NSMutableDictionary *cacheRecords;
@property (nonatomic) unsigned long long currentCacheSize;
@property (nonatomic) long long groupType;
@property (nonatomic) unsigned long long maxCacheSize;
@property (nonatomic) unsigned long long pruneCount;

- (void).cxx_destruct;
- (id)_humanReadableStringForGroupType:(long long)arg1;
- (void)_removeAssetInfoForKey:(id)arg1;
- (id)assetInfoForKey:(id)arg1 queue:(id)arg2;
- (id)cachePath;
- (id)cacheRecords;
- (unsigned long long)currentCacheSize;
- (id)description;
- (long long)groupType;
- (id)infoForAllAssetsWithQueue:(id)arg1;
- (id)initWithGroupType:(long long)arg1 baseCachePath:(id)arg2 folderName:(id)arg3 maxCacheSize:(unsigned long long)arg4 purgeOnLoad:(bool)arg5;
- (unsigned long long)maxCacheSize;
- (unsigned long long)pruneCount;
- (void)removeAllAssetsWithQueue:(id)arg1;
- (void)removeAssetInfoForKey:(id)arg1 queue:(id)arg2;
- (void)setAssetInfo:(id)arg1 forKey:(id)arg2 queue:(id)arg3;
- (void)setCachePath:(id)arg1;
- (void)setCacheRecords:(id)arg1;
- (void)setCurrentCacheSize:(unsigned long long)arg1;
- (void)setGroupType:(long long)arg1;
- (void)setMaxCacheSize:(unsigned long long)arg1;
- (void)setPruneCount:(unsigned long long)arg1;
- (void)updateAssetsFromFiles;

@end
