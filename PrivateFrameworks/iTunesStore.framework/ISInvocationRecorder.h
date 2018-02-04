/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISInvocationRecorder : NSObject {
    id  _target;
}

- (id)adjustedTargetForSelector:(SEL)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (void)invokeInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end