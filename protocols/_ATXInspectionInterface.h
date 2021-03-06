/* made by EzioChiu.
 */

@protocol _ATXInspectionInterface

@required

- (void)appHistoryAddLaunch:(void *)arg1 launchReason:(void *)arg2 date:(void *)arg3 timeZone:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSDate *, NSTimeZone *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)appHistoryClear:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)appHistoryStartDeltaRecording:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)appHistoryStopDeltaRecording:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)appInstallHistoryClear:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)appInstallHistorySet:(void *)arg1 date:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)appInstallHistoryStartDeltaRecording:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)appInstallHistoryStopDeltaRecording:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)benchmarkAppPrediction:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)benchmarkAppPredictionForConsumerSubType:(void *)arg1 ntimes:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned char, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)feedbackClear:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)feedbackLaunched:(void *)arg1 rejected:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getABGroups:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getParseTreeForConsumerSubType:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned char, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getPredictionModelDetails:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _ATXPredictionModelDetails *, NSError *, void*
- (void)predictAppsAndReturnInputsAndSubscores:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)predictAppsAndReturnInputsAndSubscoresForConsumerSubType:(void *)arg1 intent:(void *)arg2 candidateBundleIds:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: unsigned char, INIntent *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
