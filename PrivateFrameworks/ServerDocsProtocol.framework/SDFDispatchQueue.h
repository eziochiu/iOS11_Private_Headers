/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface SDFDispatchQueue : NSObject {
    NSString * _label;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)queueWithLabel:(id)arg1;

- (void).cxx_destruct;
- (void)_forceBlockToRetainQueue;
- (id)description;
- (void)dispatchAsynchronousBlock:(id /* block */)arg1;
- (void)dispatchSynchronousBlock:(id /* block */)arg1;
- (void)dispatchWhen:(unsigned long long)arg1 block:(id /* block */)arg2;
- (id)initWithLabel:(id)arg1;
- (id)queue;

@end
