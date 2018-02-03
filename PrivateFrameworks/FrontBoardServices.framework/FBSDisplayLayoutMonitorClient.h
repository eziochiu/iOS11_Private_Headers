/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDisplayLayoutMonitorClient : FBSSystemServiceFacilityClient {
    <FBSDisplayLayoutMonitorClientDelegate> * _delegate;
}

- (void)_handleDisplayLayoutUpdate:(id)arg1;
- (void)configureConnectMessage:(id)arg1;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (id)initWithDelegate:(id)arg1 calloutQueue:(id)arg2;
- (void)invalidate;

@end
