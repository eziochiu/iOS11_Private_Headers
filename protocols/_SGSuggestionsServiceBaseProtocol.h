/* made by EzioChiu.
 */

@protocol _SGSuggestionsServiceBaseProtocol <_SGSuggestionsServiceMetricsProtocol>

@required

+ (bool)isHarvestingSupported;

- (bool)isEnabledWithError:(id*)arg1;
- (void)keepDirty:(bool)arg1;
- (bool)queuesRequestsIfBusy;
- (void)setQueuesRequestsIfBusy:(bool)arg1;

@end
