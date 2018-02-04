/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCBreakingNewsOperation : FCOperation {
    id /* block */  _catchUpCompletionHandler;
    FCCloudContext * _context;
    NSError * _error;
    NSArray * _headlines;
    FCColor * _titleColor;
    NSString * _titleText;
}

@property (copy) id /* block */ catchUpCompletionHandler;
@property (nonatomic, retain) FCCloudContext *context;
@property (retain) NSError *error;
@property (copy) NSArray *headlines;
@property (copy) FCColor *titleColor;
@property (copy) NSString *titleText;

- (void).cxx_destruct;
- (void)_checkShouldShowBreakingNewsWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)catchUpCompletionHandler;
- (id)context;
- (id)error;
- (id)headlines;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setCatchUpCompletionHandler:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHeadlines:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleColor;
- (id)titleText;
- (bool)validateOperation;

@end
