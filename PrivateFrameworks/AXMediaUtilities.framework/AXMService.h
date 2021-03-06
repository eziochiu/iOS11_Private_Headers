/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMService : NSObject <AXMServiceClientInterface, AXMServiceInterface> {
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_destroyXPCConnection;
- (id)_serviceProxy;
- (void)dealloc;
- (id)init;
- (void)prewarmVisionEngineService;
- (void)setXpcConnection:(id)arg1;
- (void)visionEngine:(id)arg1 evaluateSource:(id)arg2 context:(id)arg3 options:(long long)arg4 result:(id /* block */)arg5;
- (id)xpcConnection;

@end
