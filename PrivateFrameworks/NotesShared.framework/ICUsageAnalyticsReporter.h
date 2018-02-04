/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICUsageAnalyticsReporter : ICAnalyticsReporterBase

+ (void)clearSharedCollector;
+ (double)percentileOfValue:(double)arg1 givenMaximum:(double)arg2;
+ (id)sharedReporter;

- (void)incrementCountForKey:(id)arg1;
- (void)incrementCountForKey:(id)arg1 withSignature:(id)arg2;
- (void)logChecklistLengthFromTrackedToDoParagraphs:(id)arg1;
- (void)logDocCamFilterUsageForFilterType:(short)arg1;

@end