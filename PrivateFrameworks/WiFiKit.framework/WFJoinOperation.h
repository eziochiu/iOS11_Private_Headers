/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFJoinOperation : WFOperation {
    <WFWiFiJoinProxy> * _joinProxy;
    WFNetworkScanRecord * _network;
    WFNetworkProfile * _profile;
}

@property (nonatomic, retain) <WFWiFiJoinProxy> *joinProxy;
@property (nonatomic, retain) WFNetworkScanRecord *network;
@property (nonatomic, retain) WFNetworkProfile *profile;

- (void).cxx_destruct;
- (id)initWithJoinProxy:(id)arg1 network:(id)arg2 profile:(id)arg3;
- (void)joinNetworkRef:(struct __WiFiNetwork { }*)arg1;
- (id)joinProxy;
- (id)network;
- (id)profile;
- (void)setJoinProxy:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)start;

@end