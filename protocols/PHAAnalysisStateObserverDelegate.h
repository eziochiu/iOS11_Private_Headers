/* made by EzioChiu.
 */

@protocol PHAAnalysisStateObserverDelegate <NSObject>

@required

- (void)analysisStateObserver:(PHAAnalysisStateObserver *)arg1 didChangeAnalysisStateTo:(int)arg2 from:(int)arg3 assetIdentifier:(NSString *)arg4 workerFlags:(int)arg5 workerType:(short)arg6;

@end
