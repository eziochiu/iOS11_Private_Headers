/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPFetchParentOperation : FPActionOperation {
    id /* block */  _fetchCompletionBlock;
    FPItem * _item;
}

@property (nonatomic, copy) id /* block */ fetchCompletionBlock;

- (void).cxx_destruct;
- (id /* block */)fetchCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItem:(id)arg1;
- (void)mainWithExtensionProxy:(id)arg1;
- (void)setFetchCompletionBlock:(id /* block */)arg1;

@end
