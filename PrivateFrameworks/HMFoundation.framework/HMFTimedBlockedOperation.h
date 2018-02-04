/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFTimedBlockedOperation : HMFBlockOperation {
    double  _timeout;
}

@property (nonatomic, readonly) double timeout;

- (unsigned long long)dispatchTimeout;
- (id)init;
- (id)initWithTimeout:(double)arg1;
- (double)timeout;

@end
