/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSPortDeathSentinel : NSObject <BSInvalidatable> {
    bool  _activated;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSMachPortSendRight * _sendRight;
    NSObject<OS_dispatch_source> * _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)_callOutQueue;
+ (void)monitorSendRight:(id)arg1 withHandler:(id /* block */)arg2;

- (void)activateWithHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithSendRight:(id)arg1;
- (void)invalidate;
- (bool)isValid;
- (id)queue;
- (void)setQueue:(id)arg1;

@end