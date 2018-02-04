/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
 */

@interface DESRecordStore : NSObject {
    NSString * _bundleId;
}

@property (getter=isPermitted, nonatomic, readonly) bool permitted;
@property (nonatomic, readonly) bool shouldMakeRecord;

+ (void)_getServiceProxyWithErrorHandler:(id /* block */)arg1 block:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)deleteAllSavedRecordsWithCompletion:(id /* block */)arg1;
- (void)deleteSavedRecordWithIdentfier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSavedRecordInfoWithCompletion:(id /* block */)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (bool)isPermitted;
- (void)saveRecordWithData:(id)arg1 recordInfo:(id)arg2 completion:(id /* block */)arg3;
- (bool)shouldMakeRecord;
- (bool)shouldMakeRecordWithFrequency:(unsigned long long)arg1;

@end