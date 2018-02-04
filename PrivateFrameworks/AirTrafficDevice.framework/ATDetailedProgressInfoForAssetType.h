/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATDetailedProgressInfoForAssetType : NSObject {
    NSString * _atAssetType;
    double  _progress;
    unsigned long long  _totalAssetsSynced;
    unsigned long long  _totalAssetsToSync;
    unsigned long long  _totalBytesSynced;
    unsigned long long  _totalBytesToSync;
}

@property (getter=getAssetType, nonatomic, retain) NSString *atAssetType;
@property (getter=getSyncProgress, nonatomic) double progress;
@property (getter=getTotalAssetsSynced, nonatomic) unsigned long long totalAssetsSynced;
@property (getter=getTotalAssetsToSync, nonatomic) unsigned long long totalAssetsToSync;
@property (getter=getTotalBytesSynced, nonatomic) unsigned long long totalBytesSynced;
@property (getter=getTotalBytesToSync, nonatomic) unsigned long long totalBytesToSync;

+ (id)serializedProgressInfoFromATDetailedProgressInfoForAssetType:(id)arg1;

- (void).cxx_destruct;
- (void)_computeProgress;
- (id)description;
- (id)getAssetType;
- (double)getSyncProgress;
- (unsigned long long)getTotalAssetsSynced;
- (unsigned long long)getTotalAssetsToSync;
- (unsigned long long)getTotalBytesSynced;
- (unsigned long long)getTotalBytesToSync;
- (id)initWithAssetType:(id)arg1 assetCountToSync:(unsigned long long)arg2 byteCountToSync:(unsigned long long)arg3;
- (id)initWithAssetType:(id)arg1 assetCountToSync:(unsigned long long)arg2 byteCountToSync:(unsigned long long)arg3 assetCountSynced:(unsigned long long)arg4 byteCountSyned:(unsigned long long)arg5;
- (void)setAtAssetType:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setTotalAssetsSynced:(unsigned long long)arg1;
- (void)setTotalAssetsToSync:(unsigned long long)arg1;
- (void)setTotalBytesSynced:(unsigned long long)arg1;
- (void)setTotalBytesToSync:(unsigned long long)arg1;
- (void)updateAssetCountToDownload:(unsigned long long)arg1;
- (void)updateByteCountToDownload:(unsigned long long)arg1;
- (void)updateFinishedeAssetCountAndSyncProgress:(unsigned long long)arg1;
- (void)updateSyncProgress:(unsigned long long)arg1;
- (void)updateSyncProgressForFailedAssetWithDownloadedByteCount:(unsigned long long)arg1 fileSize:(unsigned long long)arg2;

@end
