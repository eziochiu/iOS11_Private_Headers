/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAirPlayAccessory : HMDMediaAccessory <HMFLogging> {
    NSString * _administrationPassword;
    NSString * _password;
}

@property (copy) NSString *administrationPassword;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *password;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)administrationPassword;
- (void)encodeWithCoder:(id)arg1;
- (void)handleUpdatedAdvertisement:(id)arg1;
- (void)handleUpdatedName:(id)arg1;
- (void)handleUpdatedPassword:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)password;
- (void)setAdministrationPassword:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;

@end
