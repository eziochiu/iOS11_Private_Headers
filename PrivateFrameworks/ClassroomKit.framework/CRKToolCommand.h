/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKToolCommand : NSObject <CATTaskClientDelegate> {
    <CRKToolCommandDelegate> * _delegate;
    NSString * _sessionIdentifier;
    id /* block */  mConnectCompletionBlock;
    CATTaskClient * mInstructorClient;
    CATOperation * mOperation;
    CATOperationQueue * mOperationQueue;
    NSObject<OS_dispatch_source> * mSIGINTSource;
    CATTaskClient * mStudentClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKToolCommandDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (readonly) Class superclass;

+ (id)aliases;
+ (id)description;
+ (bool)handlesProgress;
+ (id)help;
+ (bool)instructorCommand;
+ (void)printHelp;

- (void).cxx_destruct;
- (void)_remoteTaskDidFinish:(id)arg1;
- (void)_remoteTaskDidProgress:(id)arg1;
- (void)cleanupAndExitIfNeeded;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)clientDidConnect:(id)arg1;
- (void)clientDidDisconnect:(id)arg1;
- (void)connectOperationDidFail:(id)arg1;
- (void)connectOperationDidSucceed:(id)arg1;
- (void)connectToTaskClientWithCompletionBlock:(id /* block */)arg1;
- (id)delegate;
- (bool)didCommandSucceed;
- (bool)didOperationSucceed:(id)arg1;
- (void)executeOperation:(id)arg1;
- (id)init;
- (bool)isCommandFinished;
- (id)operationWithClient:(id)arg1 arguments:(id)arg2;
- (void)remoteTaskDidFinish:(id)arg1;
- (void)remoteTaskDidProgress:(id)arg1;
- (id)requestWithArguments:(id)arg1;
- (void)runWithArguments:(id)arg1;
- (void)runWithClient:(id)arg1 arguments:(id)arg2;
- (id)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;

@end
