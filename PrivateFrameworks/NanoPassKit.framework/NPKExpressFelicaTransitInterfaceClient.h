/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKExpressFelicaTransitInterfaceClient : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)displayExpressFelicaTransitTransactionCompleteWithConcreteTransactions:(id)arg1 ephemeralTransaction:(id)arg2 forPass:(id)arg3 paymentApplication:(id)arg4 withAppletState:(id)arg5 completion:(id /* block */)arg6;
- (id)init;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
