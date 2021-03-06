/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHADirtyChangeBuffer : NSObject {
    NSMutableDictionary * _workInfosByWorkerType;
}

@property (nonatomic, retain) NSMutableDictionary *workInfosByWorkerType;

- (void).cxx_destruct;
- (id)init;
- (void)recordChangeForAssetIdentifier:(id)arg1 workerType:(int)arg2 workerFlags:(int)arg3;
- (void)setWorkInfosByWorkerType:(id)arg1;
- (id)snapshot;
- (id)workInfosByWorkerType;

@end
