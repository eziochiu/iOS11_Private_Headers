/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRemoteContentPassActionRequest : PKPaymentWebServiceRequest {
    PKPaymentPassAction * _action;
    PKPaymentPass * _pass;
}

@property (nonatomic, retain) PKPaymentPassAction *action;
@property (nonatomic, retain) PKPaymentPass *pass;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3;
- (id)action;
- (id)pass;
- (void)setAction:(id)arg1;
- (void)setPass:(id)arg1;

@end
