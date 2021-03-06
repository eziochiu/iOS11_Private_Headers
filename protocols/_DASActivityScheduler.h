/* made by EzioChiu.
 */

@protocol _DASActivityScheduler <NSObject>

@required

- (void)activityCanceled:(_DASActivity *)arg1;
- (void)activityCompleted:(_DASActivity *)arg1;
- (void)handleEligibleActivities:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)submitActivities:(NSArray *)arg1;
- (void)submitActivity:(_DASActivity *)arg1;
- (void)updateActivity:(_DASActivity *)arg1 withPriority:(unsigned long long)arg2 startAfter:(NSDate *)arg3 startBefore:(NSDate *)arg4 options:(NSDictionary *)arg5;
- (void)updateKBDownloadedOnWifi:(unsigned long long)arg1 downloadedOnCell:(unsigned long long)arg2 uploadedOnWifi:(unsigned long long)arg3 uploadedOnCell:(unsigned long long)arg4 forActivity:(_DASActivity *)arg5;

@optional

- (void)activityStarted:(_DASActivity *)arg1;

@end
