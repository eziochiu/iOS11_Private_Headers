/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyShareTokenURLRequest : CKDURLRequest {
    NSArray * _shareTokenInfos;
    NSMutableDictionary * _shareTokenInfosByRequestID;
    id /* block */  _shareTokenModifiedBlock;
}

@property (nonatomic, retain) NSArray *shareTokenInfos;
@property (nonatomic, retain) NSMutableDictionary *shareTokenInfosByRequestID;
@property (nonatomic, copy) id /* block */ shareTokenModifiedBlock;

- (void).cxx_destruct;
- (id)generateRequestOperations;
- (id)initWithShareTokenInfos:(id)arg1;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setShareTokenInfos:(id)arg1;
- (void)setShareTokenInfosByRequestID:(id)arg1;
- (void)setShareTokenModifiedBlock:(id /* block */)arg1;
- (id)shareTokenInfos;
- (id)shareTokenInfosByRequestID;
- (id /* block */)shareTokenModifiedBlock;

@end