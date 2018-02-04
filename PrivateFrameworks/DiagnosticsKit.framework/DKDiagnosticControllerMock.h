/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKDiagnosticControllerMock : NSObject <DKDiagnosticMock, DKDiagnostic_Internal> {
    bool  _cancelled;
    id /* block */  _completion;
    DKDiagnosticContextMock * _context;
    bool  _finished;
    NSLock * _finishedLock;
    Class  _inputsClass;
    DKMutableDiagnosticResult * _result;
    bool  _setup;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) DKDiagnosticContextMock *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, nonatomic) bool finished;
@property (nonatomic, retain) NSLock *finishedLock;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) Class inputsClass;
@property (nonatomic, retain) DKMutableDiagnosticResult *result;
@property (getter=isSetup, nonatomic) bool setup;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginRequestWithInputsClass:(Class)arg1 predicates:(id)arg2 specifications:(id)arg3 parameters:(id)arg4 completion:(id /* block */)arg5;
- (void)cancel;
- (id /* block */)completion;
- (id)context;
- (id)finishedLock;
- (id)init;
- (Class)inputsClass;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)isSetup;
- (id)result;
- (void)setCancelled:(bool)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setFinishedLock:(id)arg1;
- (void)setInputsClass:(Class)arg1;
- (void)setResult:(id)arg1;
- (void)setSetup:(bool)arg1;
- (void)start;

@end