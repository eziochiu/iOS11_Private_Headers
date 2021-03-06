/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMRuntimeTest : NSObject {
    id /* block */  _completion;
    IMRuntimeTestRun * _testRun;
}

@property (copy) id /* block */ completion;
@property (retain) IMRuntimeTestRun *testRun;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)dispatchAfter:(double)arg1 block:(id /* block */)arg2;
- (void)finishTest;
- (void)runTest:(id /* block */)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setTestRun:(id)arg1;
- (void)setUp;
- (void)startTest;
- (void)tearDown;
- (id)testName;
- (id)testRun;
- (Class)testRunClass;

@end
