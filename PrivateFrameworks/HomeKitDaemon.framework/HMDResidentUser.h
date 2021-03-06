/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentUser : HMDUser {
    unsigned long long  _configurationState;
    NSString * _deviceIdentifier;
}

@property (nonatomic) unsigned long long configurationState;
@property (nonatomic, readonly, copy) NSString *deviceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)configurationState;
- (bool)configureWithIDSDevice:(id)arg1;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)encodingRemoteDisplayName;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelObject:(id)arg1;
- (id)initWithUserID:(id)arg1 displayName:(id)arg2 forHomeIdentifier:(id)arg3 uuid:(id)arg4 pairingIdentity:(id)arg5 deviceIdentifier:(id)arg6 configurationState:(unsigned long long)arg7;
- (bool)mergeFromUser:(id)arg1 dataVersion:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (bool)refreshDisplayName;
- (bool)requiresMakoSupport;
- (void)setConfigurationState:(unsigned long long)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;

@end
