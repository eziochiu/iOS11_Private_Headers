/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFObjectObserver : HMFObject {
    id /* block */  _deallocationBlock;
    NSUUID * _identifier;
    id  _observedObject;
}

@property (nonatomic, copy) id /* block */ deallocationBlock;
@property (nonatomic, readonly) NSUUID *identifier;
@property (readonly) id observedObject;

- (void).cxx_destruct;
- (void)_startObserving;
- (void)_stopObserving;
- (void)dealloc;
- (id /* block */)deallocationBlock;
- (id)identifier;
- (id)init;
- (id)initWithObservedObject:(id)arg1;
- (id)observedObject;
- (id)observerKey;
- (void)setDeallocationBlock:(id /* block */)arg1;

@end
