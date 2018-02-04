/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPlaceholderOperation : NSOperation {
    id  _context;
    id /* block */  _daemonInvokeBlock;
    NSObject<OS_dispatch_group> * _group;
    bool  _isExecuting;
    bool  _isFinished;
    NSString * _operationID;
    NSString * _sectionID;
    NSDate * _startDate;
}

@property (nonatomic, retain) id context;
@property (nonatomic, readonly) id /* block */ daemonInvokeBlock;
@property (nonatomic) bool isExecuting;
@property (nonatomic) bool isFinished;
@property (nonatomic, readonly) NSString *operationID;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (void)_setIsExecuting:(bool)arg1;
- (void)_setIsFinished:(bool)arg1;
- (void)cancel;
- (id)context;
- (id /* block */)daemonInvokeBlock;
- (id)description;
- (id)initWithOperation:(id)arg1 daemonInvocationBlock:(id /* block */)arg2;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (id)operationID;
- (id)sectionID;
- (void)setContext:(id)arg1;
- (void)setIsExecuting:(bool)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setSectionID:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)start;
- (id)startDate;

@end