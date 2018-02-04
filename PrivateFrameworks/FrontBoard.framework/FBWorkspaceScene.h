/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspaceScene : NSObject <BSDescriptionProviding, FBSSceneAgentProxy, FBSSceneHandle, FBSceneClient, FBWorkspaceServerSceneEventHandler> {
    unsigned long long  _agentEventSequenceNumber;
    id /* block */  _agentMessageHandler;
    NSMutableArray * _agentOutstandingEventSequence;
    FBSSerialQueue * _agentQueue;
    NSMutableArray * _agentSessions;
    FBSSceneClientSettings * _clientSettings;
    bool  _handledInitialSettingsDiff;
    <FBSceneHost> * _host;
    <FBSSceneHostAgent> * _hostAgent;
    NSString * _identifier;
    bool  _invalidated;
    bool  _sentCreationEvent;
    FBSSceneSettings * _settings;
    FBSSceneSpecification * _specification;
    FBWorkspace * _workspace;
    NSObject<OS_dispatch_queue> * _workspaceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_workspaceQueue_handledInitialSettingsDiff, setter=_workspaceQueue_setHandledInitialSettingsDiff:, nonatomic) bool handledInitialSettingsDiff;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FBSceneHost> *host;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) FBWorkspace *parentWorkspace;
@property (getter=_workspaceQueue_sceneSettings, setter=_workspaceQueue_setSceneSettings:, nonatomic, copy) FBSSceneSettings *sceneSettings;
@property (getter=_workspaceQueue_hasSentCreationEvent, setter=_workspaceQueue_setSentCreationEvent:, nonatomic) bool sentCreationEvent;
@property (nonatomic, readonly, copy) FBSSceneSettings *settings;
@property (nonatomic, readonly, copy) FBSSceneSpecification *specification;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleDidUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleInvalidationWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (id)_workspaceQueue;
- (void)_workspaceQueue_dispatchClientBlockIfNecessary:(id /* block */)arg1 success:(bool)arg2;
- (bool)_workspaceQueue_handledInitialSettingsDiff;
- (bool)_workspaceQueue_hasSentCreationEvent;
- (void)_workspaceQueue_invalidate;
- (void)_workspaceQueue_invalidateSceneAgentWithEvent:(id)arg1 completion:(id /* block */)arg2;
- (id)_workspaceQueue_process;
- (id)_workspaceQueue_sceneSettings;
- (void)_workspaceQueue_sendDestroyWithTransitionContext:(id)arg1 responseEventHandler:(id /* block */)arg2;
- (void)_workspaceQueue_sendSettingsDiff:(id)arg1 transitionContext:(id)arg2 responseEventHandler:(id /* block */)arg3;
- (void)_workspaceQueue_setHandledInitialSettingsDiff:(bool)arg1;
- (void)_workspaceQueue_setSceneSettings:(id)arg1;
- (void)_workspaceQueue_setSentCreationEvent:(bool)arg1;
- (void)agent:(id)arg1 registerMessageHandler:(id /* block */)arg2;
- (void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (id)callOutQueue;
- (id)clientProcess;
- (void)closeSession:(id)arg1;
- (id)counterpartAgent;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)host;
- (void)host:(id)arg1 configureWithDefinition:(id)arg2 parameters:(id)arg3;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;
- (id)hostProcess;
- (id)identifier;
- (id)initWithParentWorkspace:(id)arg1 identifier:(id)arg2;
- (void)invalidate;
- (id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;
- (id)parameters;
- (id)parentWorkspace;
- (void)sceneAttachLayer:(id)arg1;
- (void)sceneDetachLayer:(id)arg1;
- (void)sceneDidReceiveActions:(id)arg1;
- (void)sceneDidReceiveMessage:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sceneDidUpdateClientSettings:(id)arg1;
- (void)sceneUpdateLayer:(id)arg1;
- (id)sessionForIdentifier:(id)arg1;
- (id)settings;
- (id)specification;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end