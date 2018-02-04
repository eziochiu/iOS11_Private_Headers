/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDateRangeDataSource : HKGraphSeriesDataSource <HKDateRangeDataUpdateDelegate> {
    NSMutableDictionary * _pathToDataBlock;
    <HKDateRangeDataSourceDelegate> * _sourceDelegate;
}

@property (nonatomic, retain) NSMutableDictionary *pathToDataBlock;
@property (nonatomic, readonly) <HKDateRangeDataSourceDelegate> *sourceDelegate;

- (void).cxx_destruct;
- (id)_fetchAndCacheDataForPath:(struct { long long x1; long long x2; })arg1;
- (void)blocksRequestedFromPath:(struct { long long x1; long long x2; })arg1 toPath:(struct { long long x1; long long x2; })arg2;
- (id)cachedBlockForPath:(struct { long long x1; long long x2; })arg1 context:(id)arg2;
- (void)dateRangeDataUpdated;
- (id)initWithSourceDelegate:(id)arg1;
- (void)invalidateCache;
- (id)pathToDataBlock;
- (void)setPathToDataBlock:(id)arg1;
- (id)sourceDelegate;

@end