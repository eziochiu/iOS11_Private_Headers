/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSGroupStatusNotifier : NSObject <IDSDaemonListenerProtocol> {
    NSString * _accountID;
    CUTWeakReference * _delegate;
    id  _delegateContext;
    NSMutableSet * _groups;
    NSMutableDictionary * _notifierConfig;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _uniqueID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueID;

- (void).cxx_destruct;
- (void)_broadcastNewStatusNotifierToDaemon;
- (void)_callDelegateWithBlock:(id /* block */)arg1;
- (void)dealloc;
- (void)groupStatusNotifier:(id)arg1 didUpdateActiveGroup:(id)arg2;
- (void)groupStatusNotifier:(id)arg1 didUpdateActiveGroups:(id)arg2;
- (void)groupStatusNotifier:(id)arg1 didUpdateEvents:(id)arg2 forGroupID:(id)arg3;
- (id)initWithAccount:(id)arg1 options:(id)arg2 delegateContext:(id)arg3;
- (id)participantsForGroupID:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)uniqueID;

@end
