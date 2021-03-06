/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsLoadURLEvent : SSMetricsMutableEvent

@property (nonatomic, retain) NSString *DNSServers;
@property (nonatomic, retain) NSString *clientCorrelationKey;
@property (nonatomic, retain) NSString *clientError;
@property (nonatomic) double connectionEndTime;
@property (nonatomic) bool connectionReused;
@property (nonatomic) unsigned long long connectionStartNStatRXBytes;
@property (nonatomic) unsigned long long connectionStartNStatTXBytes;
@property (nonatomic) double connectionStartTime;
@property (nonatomic) unsigned long long connectionStopNStatRXBytes;
@property (nonatomic) unsigned long long connectionStopNStatTXBytes;
@property (nonatomic, retain) NSString *connectionType;
@property (nonatomic) double domainLookupEndTime;
@property (nonatomic) double domainLookupStartTime;
@property (nonatomic, retain) NSString *edgeNodeCacheStatus;
@property (nonatomic) double fetchStartTime;
@property (nonatomic, retain) NSArray *networkQualityReports;
@property (nonatomic, retain) NSString *originalApp;
@property (nonatomic) unsigned long long redirectCount;
@property (nonatomic) double redirectEndTime;
@property (nonatomic) double redirectStartTime;
@property (nonatomic) double requestStartTime;
@property (nonatomic, retain) NSString *requestURL;
@property (nonatomic, retain) NSString *resolvedIPAddress;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (nonatomic) double secureConnectionStartTime;
@property (nonatomic) long long statusCode;
@property (setter=setXPSamplingForced:, nonatomic) bool xpSamplingForced;
@property (setter=setXPSamplingPercentageCachedResponses:, nonatomic) double xpSamplingPercentageCachedResponses;
@property (setter=setXPSamplingPercentageUsers:, nonatomic) double xpSamplingPercentageUsers;
@property (setter=setXPSessionDuration:, nonatomic) double xpSessionDuration;

+ (double)_randomDouble;
+ (void)_setTimingMetricsWindowStartTime:(id)arg1;
+ (id)_timingMetricsWindowStartTime;
+ (bool)shouldCollectTimingData;
+ (bool)shouldCollectTimingDataWithSessionDelegate:(id)arg1;
+ (bool)shouldCollectTimingDataWithSessionDuration:(double)arg1 samplingPercentage:(double)arg2;
+ (bool)shouldLogTimingMetrics;
+ (bool)shouldReportCachedEvent;
+ (bool)shouldReportCachedEventWithSamplingPercentage:(double)arg1;

- (id)DNSServers;
- (id)clientCorrelationKey;
- (id)clientError;
- (double)connectionEndTime;
- (bool)connectionReused;
- (unsigned long long)connectionStartNStatRXBytes;
- (unsigned long long)connectionStartNStatTXBytes;
- (double)connectionStartTime;
- (unsigned long long)connectionStopNStatRXBytes;
- (unsigned long long)connectionStopNStatTXBytes;
- (id)connectionType;
- (id)description;
- (double)domainLookupEndTime;
- (double)domainLookupStartTime;
- (id)edgeNodeCacheStatus;
- (double)fetchStartTime;
- (id)init;
- (id)networkQualityReports;
- (id)originalApp;
- (unsigned long long)redirectCount;
- (double)redirectEndTime;
- (double)redirectStartTime;
- (double)requestStartTime;
- (id)requestURL;
- (id)resolvedIPAddress;
- (double)responseEndTime;
- (double)responseStartTime;
- (double)secureConnectionStartTime;
- (void)setClientCorrelationKey:(id)arg1;
- (void)setClientError:(id)arg1;
- (void)setConnectionEndTime:(double)arg1;
- (void)setConnectionReused:(bool)arg1;
- (void)setConnectionStartNStatRXBytes:(unsigned long long)arg1;
- (void)setConnectionStartNStatTXBytes:(unsigned long long)arg1;
- (void)setConnectionStartTime:(double)arg1;
- (void)setConnectionStopNStatRXBytes:(unsigned long long)arg1;
- (void)setConnectionStopNStatTXBytes:(unsigned long long)arg1;
- (void)setConnectionType:(id)arg1;
- (void)setDNSServers:(id)arg1;
- (void)setDomainLookupEndTime:(double)arg1;
- (void)setDomainLookupStartTime:(double)arg1;
- (void)setEdgeNodeCacheStatus:(id)arg1;
- (void)setFetchStartTime:(double)arg1;
- (void)setNetworkQualityReports:(id)arg1;
- (void)setOriginalApp:(id)arg1;
- (void)setRedirectCount:(unsigned long long)arg1;
- (void)setRedirectEndTime:(double)arg1;
- (void)setRedirectStartTime:(double)arg1;
- (void)setRequestStartTime:(double)arg1;
- (void)setRequestURL:(id)arg1;
- (void)setResolvedIPAddress:(id)arg1;
- (void)setResponseEndTime:(double)arg1;
- (void)setResponseStartTime:(double)arg1;
- (void)setSecureConnectionStartTime:(double)arg1;
- (void)setStatusCode:(long long)arg1;
- (void)setXPSamplingForced:(bool)arg1;
- (void)setXPSamplingPercentageCachedResponses:(double)arg1;
- (void)setXPSamplingPercentageUsers:(double)arg1;
- (void)setXPSessionDuration:(double)arg1;
- (long long)statusCode;
- (bool)xpSamplingForced;
- (double)xpSamplingPercentageCachedResponses;
- (double)xpSamplingPercentageUsers;
- (double)xpSessionDuration;

@end
