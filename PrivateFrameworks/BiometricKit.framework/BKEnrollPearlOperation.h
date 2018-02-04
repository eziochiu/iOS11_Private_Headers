/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKEnrollPearlOperation : BKEnrollOperation {
    BKIdentity * _augmentedIdentity;
    bool  _clientToComplete;
}

@property (nonatomic, retain) BKIdentity *augmentedIdentity;
@property (nonatomic) bool clientToComplete;
@property (nonatomic) <BKEnrollPearlOperationDelegate> *delegate;

- (void).cxx_destruct;
- (id)augmentedIdentity;
- (bool)clientToComplete;
- (bool)completeWithError:(id*)arg1;
- (void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
- (id)optionsDictionaryWithError:(id*)arg1;
- (bool)resumeWithError:(id*)arg1;
- (void)setAugmentedIdentity:(id)arg1;
- (void)setClientToComplete:(bool)arg1;
- (bool)startWithError:(id*)arg1;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (bool)suspendWithError:(id*)arg1;

@end