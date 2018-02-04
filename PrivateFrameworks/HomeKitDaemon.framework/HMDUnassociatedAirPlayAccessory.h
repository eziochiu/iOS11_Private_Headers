/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUnassociatedAirPlayAccessory : HMDUnassociatedMediaAccessory <HMDMediaAccessoryAssociation> {
    NSString * _administrationPassword;
}

@property (copy) NSString *administrationPassword;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) bool supportsAssociation;

+ (Class)modelClass;
+ (id)randomAdministrationPassword:(id*)arg1;

- (void).cxx_destruct;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;
- (id)administrationPassword;
- (void)associateWithCompletionHandler:(id /* block */)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
- (void)setAdministrationPassword:(id)arg1;
- (bool)supportsAssociation;

@end
