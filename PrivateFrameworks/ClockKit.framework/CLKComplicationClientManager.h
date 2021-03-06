/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationClientManager : NSObject <NSXPCListenerDelegate> {
    NSMutableSet * _anonymousClients;
    BKSApplicationStateMonitor * _applicationStateMonitor;
    NSMutableSet * _clientPIDs;
    id /* block */  _clientRegistrationHandler;
    id /* block */  _clientUnregistrationHandler;
    NSMutableDictionary * _clientsByIdentifier;
    unsigned long long  _nextWaitForClientTokenValue;
    NSMutableDictionary * _waitForClientRegistriesByIdentifier;
}

@property (nonatomic, copy) id /* block */ clientRegistrationHandler;
@property (nonatomic, copy) id /* block */ clientUnregistrationHandler;
@property (nonatomic, retain) NSMutableDictionary *clientsByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedClientManager;

- (void).cxx_destruct;
- (void)_addClient:(id)arg1;
- (void)_handleApplicationStateChange:(id)arg1;
- (void)_removeClient:(id)arg1;
- (id /* block */)clientRegistrationHandler;
- (id /* block */)clientUnregistrationHandler;
- (id)clientsByIdentifier;
- (void)enumerateClientsWithBlock:(id /* block */)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setClientRegistrationHandler:(id /* block */)arg1;
- (void)setClientUnregistrationHandler:(id /* block */)arg1;
- (void)setClientsByIdentifier:(id)arg1;
- (void)stopWaitingForClientWithIdentifier:(id)arg1 forToken:(struct NSNumber { Class x1; }*)arg2;
- (struct NSNumber { Class x1; }*)waitForClientWithIdentifier:(id)arg1 handler:(id /* block */)arg2;

@end
