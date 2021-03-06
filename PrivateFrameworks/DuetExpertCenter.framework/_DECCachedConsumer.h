/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECCachedConsumer : _DECConsumer {
    const char * _atxCachePath;
    _DECPredictionStoreReader * _store;
}

- (void).cxx_destruct;
- (id)cachedPredictionsWithLimit:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2;
- (id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 storeReader:(id)arg3;
- (id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 storeReader:(id)arg3 atxCachePath:(const char *)arg4;

@end
