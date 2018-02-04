/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTNewsHeadlineResultOperation : NTHeadlineResultOperation {
    NSDate * _filterDate;
    bool  _lastOperationFailedToFinish;
    NSArray * _networkEvents;
    NSDictionary * _resultAssetHandlesByAssetID;
    NTPBHeadlineResultOperationFetchInfo * _resultFetchInfo;
    NTHeadlineResults * _resultHeadlineResults;
    NSObject * _resultHoldToken;
}

@property (nonatomic, copy) NSDate *filterDate;
@property (nonatomic) bool lastOperationFailedToFinish;
@property (nonatomic, copy) NSArray *networkEvents;
@property (nonatomic, copy) NSDictionary *resultAssetHandlesByAssetID;
@property (nonatomic, copy) NTPBHeadlineResultOperationFetchInfo *resultFetchInfo;
@property (nonatomic, copy) NTHeadlineResults *resultHeadlineResults;
@property (nonatomic, retain) NSObject *resultHoldToken;

- (void).cxx_destruct;
- (void)_assembleQueueDescriptorsWithConfig:(id)arg1 allowOnlyWatchEligibleSections:(bool)arg2 respectsWidgetVisibleSectionsLimit:(bool)arg3 personalizationTreatment:(id)arg4 aggregateStore:(id)arg5 appConfiguration:(id)arg6 todayData:(id)arg7 completion:(id /* block */)arg8;
- (void)_fetchHeadlineResultsWithFetchHelper:(id)arg1 maximumCachedAgeForForYou:(unsigned long long)arg2 maximumCachedAgeForTrendingByParsec:(unsigned long long)arg3 aggregator:(id)arg4 feedPersonalizer:(id)arg5 todayData:(id)arg6 completion:(id /* block */)arg7;
- (void)_finalizeHeadlineResultsWithSectionDescriptors:(id)arg1 catchUpOperationResultsBySectionDescriptor:(id)arg2 articleIDsOfLeadingCells:(id)arg3 completion:(id /* block */)arg4;
- (id)_sectionCTRsWithTodayConfig:(id)arg1 personalizationTreatment:(id)arg2 aggregateStore:(id)arg3;
- (id)filterDate;
- (id)init;
- (bool)lastOperationFailedToFinish;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)resultAssetHandlesByAssetID;
- (id)resultFetchInfo;
- (id)resultHeadlineResults;
- (id)resultHoldToken;
- (void)setFilterDate:(id)arg1;
- (void)setLastOperationFailedToFinish:(bool)arg1;
- (void)setNetworkEvents:(id)arg1;
- (void)setResultAssetHandlesByAssetID:(id)arg1;
- (void)setResultFetchInfo:(id)arg1;
- (void)setResultHeadlineResults:(id)arg1;
- (void)setResultHoldToken:(id)arg1;
- (bool)validateOperation;

@end
