/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetAnalyzer : NSObject {
    NSMutableDictionary * _analyzerUUIDToRequest;
}

+ (short)_plAnalysisWorkerTypeForWorkerType:(long long)arg1;

- (void).cxx_destruct;
- (void)_handleResultForRequest:(id)arg1 success:(bool)arg2;
- (id)_keyForAssetUUID:(id)arg1 forWorkerType:(long long)arg2;
- (void)analyzeAsset:(id)arg1 forWorkerType:(long long)arg2;
- (bool)canAnalyzeAsset:(id)arg1 forWorkerType:(long long)arg2;
- (id)init;

@end