/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKStatisticsQuery : HKQuery <HKStatisticsQueryClientInterface> {
    id /* block */  _completionHandler;
    NSDateInterval * _dateInterval;
    unsigned long long  _mergeStrategy;
    unsigned long long  _options;
}

@property (nonatomic, readonly) id /* block */ completionHandler;
@property (getter=_dateInterval, setter=_setDateInterval:, nonatomic, retain) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long mergeStrategy;
@property (nonatomic, readonly) unsigned long long options;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (id)_dateInterval;
- (id)_filter;
- (id)_filterForDateInterval:(id)arg1;
- (void)_setDateInterval:(id)arg1;
- (void)client_deliverStatistics:(id)arg1 forQuery:(id)arg2;
- (id /* block */)completionHandler;
- (id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (unsigned long long)mergeStrategy;
- (unsigned long long)options;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;
- (void)setMergeStrategy:(unsigned long long)arg1;

@end