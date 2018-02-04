/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTParsecHeadlineResultOperation : NTHeadlineResultOperation {
    NSDictionary * _resultAssetHandlesByAssetID;
    NTPBHeadlineResultOperationFetchInfo * _resultFetchInfo;
    NTHeadlineResults * _resultHeadlineResults;
}

@property (nonatomic, copy) NSDictionary *resultAssetHandlesByAssetID;
@property (nonatomic, copy) NTPBHeadlineResultOperationFetchInfo *resultFetchInfo;
@property (nonatomic, copy) NTHeadlineResults *resultHeadlineResults;

- (void).cxx_destruct;
- (void)_fetchHeadlineResultsWithCompletionHandler:(id /* block */)arg1;
- (void)_updateUseParsecEnabledWithCompletionHandler:(id /* block */)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultAssetHandlesByAssetID;
- (id)resultFetchInfo;
- (id)resultHeadlineResults;
- (void)setResultAssetHandlesByAssetID:(id)arg1;
- (void)setResultFetchInfo:(id)arg1;
- (void)setResultHeadlineResults:(id)arg1;
- (bool)validateOperation;

@end
