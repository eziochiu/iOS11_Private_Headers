/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRiWorkWebShareMigrateOperation : BROperation {
    NSOperationQueue * _operationQueue;
    id /* block */  _shareMigrationCompletionBlock;
    NSURL * _url;
}

@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (copy) id /* block */ shareMigrationCompletionBlock;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (void)_copyShare;
- (void)_migrateShare;
- (void)_startSharingReadWrite:(bool)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)main;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;
- (void)setShareMigrationCompletionBlock:(id /* block */)arg1;
- (void)setUrl:(id)arg1;
- (id /* block */)shareMigrationCompletionBlock;
- (id)url;

@end