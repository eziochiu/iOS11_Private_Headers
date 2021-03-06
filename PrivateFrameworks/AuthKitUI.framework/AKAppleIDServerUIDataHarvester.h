/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@interface AKAppleIDServerUIDataHarvester : NSObject {
    NSMutableDictionary * _harvestedData;
}

@property (nonatomic, readonly, copy) NSDictionary *harvestedData;

- (void).cxx_destruct;
- (void)_harvestIDMSRecoveryHeadersInfo:(id)arg1;
- (void)_harvestIDMSRecoveryInfoFromObjectModel:(id)arg1;
- (id)_valueForTextFieldWithID:(id)arg1 inObjectModel:(id)arg2;
- (void)harvestDataFromServerHTTPResponse:(id)arg1;
- (void)harvestDataFromServerUIObjectModel:(id)arg1;
- (void)harvestIDMSRecoveryInfoFromClientInfo:(id)arg1;
- (void)harvestIDMSRecoveryInfoFromHeaders:(id)arg1;
- (id)harvestedData;
- (id)init;

@end
