/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBRemoteAlertController : NSObject <SBRemoteAlertDelegate> {
    bool  _active;
    <SBRemoteAlert> * _alert;
    SBSRemoteAlertDefinition * _definition;
    <SBRemoteAlertControllerDelegate> * _delegate;
    NSMutableArray * _pendedActivations;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _tokenPort;
}

@property (nonatomic, readonly) <SBRemoteAlert> *alert;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isDefinition:(id)arg1 allowedForAuditToken:(id)arg2;
+ (bool)isDefinition:(id)arg1 equalToDefinition:(id)arg2;
+ (Class)remoteAlertClass;

- (void).cxx_destruct;
- (bool)_queue_isValid;
- (void)_queue_setActive:(bool)arg1;
- (void)activateWithContext:(id)arg1;
- (id)alert;
- (void)dealloc;
- (void)didInvalidate;
- (id)init;
- (id)initWithDefinition:(id)arg1 tokenPort:(unsigned int)arg2 context:(id)arg3 queue:(id)arg4 delegate:(id)arg5;
- (void)queue_activateWithContext:(id)arg1;
- (void)queue_invalidate;
- (bool)queue_isActive;
- (bool)queue_matchesDefinition:(id)arg1;
- (unsigned int)queue_tokenPort;
- (void)remoteAlert:(id)arg1 didTerminateWithError:(id)arg2;
- (void)remoteAlertDidActivate:(id)arg1;
- (void)remoteAlertDidDeactivate:(id)arg1;
- (void)remoteAlertDidRequestDismissal:(id)arg1;

@end