/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKTransitStationCodeResolver : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;

- (void).cxx_destruct;
- (id)callbackQueue;
- (id)initWithCallbackQueue:(id)arg1;
- (void)resolveStationCodesForAppletState:(id)arg1 paymentApplication:(id)arg2 passUniqueIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)setCallbackQueue:(id)arg1;

@end
