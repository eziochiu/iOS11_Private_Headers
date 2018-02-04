/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCWebArchiveFetchOperation : FCFetchOperation {
    FCInterestToken * _fetchToken;
    FCInterestToken * _holdToken;
    NSString * _key;
    FCWebArchiveSource * _webArchiveSource;
}

- (void).cxx_destruct;
- (id)initWithWebArchiveSource:(id)arg1 key:(id)arg2;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;

@end
