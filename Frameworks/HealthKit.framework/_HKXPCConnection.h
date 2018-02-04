/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKXPCConnection : NSObject {
    NSString * _debugIdentifier;
    <_HKXPCExportable> * _exportedObject;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    NSXPCConnection * _underlyingConnection;
}

@property (nonatomic, copy) NSString *debugIdentifier;
@property (nonatomic) <_HKXPCExportable> *exportedObject;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debugIdentifier;
- (id)exportedObject;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithServiceName:(id)arg1;
- (id)initWithUnderlyingConnection:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)resume;
- (void)setDebugIdentifier:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end