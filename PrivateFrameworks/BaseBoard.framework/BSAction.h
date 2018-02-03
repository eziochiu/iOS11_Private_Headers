/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSAction : NSObject <BSDescriptionProviding, BSInvalidatable, BSSettingDescriptionProvider, BSXPCCoding, NSSecureCoding> {
    bool  _expectsResponse;
    bool  _hasTimeout;
    BSSettings * _info;
    bool  _originatingAction;
    NSObject<OS_dispatch_queue> * _queue;
    BSAuditHistory * _queue_auditHistory;
    id /* block */  _queue_handler;
    bool  _queue_hasBeenNeutered;
    bool  _queue_invalidated;
    id /* block */  _queue_invalidationHandler;
    struct { 
        unsigned int port; 
        NSObject<OS_xpc_object> *endpoint; 
    }  _queue_listenerTokens;
    BSPortDeathSentinel * _queue_portDeathSentinel;
    BSMachPortReceiveRight * _queue_receiveRight;
    BSActionResponse * _queue_response;
    BSMachPortTransferableSendRight * _queue_sendRight;
    BSTimer * _queue_timer;
    unsigned long long  _timeout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_expectsResponse, nonatomic, readonly) bool expectsResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) BSSettings *info;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (bool)supportsSecureCoding;

- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 safely:(bool)arg2;
- (bool)_expectsResponse;
- (id)_initWithInfo:(id)arg1 invalidated:(bool)arg2 expectsResponse:(bool)arg3 auditHistory:(id)arg4 xPort:(id)arg5 xEndpoint:(id)arg6 sendRight:(id)arg7;
- (void)_queue_addAuditHistoryWithFormat:(id)arg1;
- (void)_queue_callHandlerWithResponse:(id)arg1;
- (id)_queue_encodedSendRight;
- (id)_queue_handlerDescription;
- (void)_queue_setInvalidatedAndNotify:(bool)arg1 errorCode:(long long)arg2;
- (void)_queue_tryExecuteQueueHandler;
- (bool)canSendResponse;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)info;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithXPCDictionary:(id)arg1;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)sendResponse:(id)arg1;
- (void)sendResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (long long)UIActionType;

@end