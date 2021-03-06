/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBLEPeripheral : HMFObject {
    NSString * _accessoryName;
    NSNumber * _advInterval;
    NSNumber * _category;
    NSNumber * _compatibleVersion;
    NSNumber * _configNumber;
    NSData * _encryptedPayload;
    NSNumber * _hkType;
    double  _lastSeen;
    NSString * _pairingIdentifier;
    NSNumber * _pairingStatusFlag;
    NSUUID * _peripheralUUID;
    NSData * _setupHash;
    NSNumber * _stateNumber;
}

@property (nonatomic, retain) NSString *accessoryName;
@property (nonatomic, retain) NSNumber *advInterval;
@property (nonatomic, retain) NSNumber *category;
@property (nonatomic, retain) NSNumber *compatibleVersion;
@property (nonatomic, retain) NSNumber *configNumber;
@property (nonatomic, copy) NSData *encryptedPayload;
@property (nonatomic, retain) NSNumber *hkType;
@property (nonatomic) double lastSeen;
@property (nonatomic, retain) NSString *pairingIdentifier;
@property (nonatomic, retain) NSNumber *pairingStatusFlag;
@property (nonatomic, retain) NSUUID *peripheralUUID;
@property (nonatomic, readonly) NSData *setupHash;
@property (nonatomic, retain) NSNumber *stateNumber;

- (void).cxx_destruct;
- (id)accessoryName;
- (id)advInterval;
- (id)category;
- (id)compatibleVersion;
- (id)configNumber;
- (id)description;
- (id)encryptedPayload;
- (unsigned long long)hash;
- (id)hkType;
- (id)initWithName:(id)arg1 peripheralUUID:(id)arg2 hkType:(id)arg3 advInterval:(id)arg4 pairingStatusFlag:(id)arg5 pairingIdentifier:(id)arg6 category:(id)arg7 stateNumber:(id)arg8 configNumber:(id)arg9 hapBLECompatibleVersion:(id)arg10 setupHash:(id)arg11 encryptedPayload:(id)arg12;
- (bool)isEqual:(id)arg1;
- (double)lastSeen;
- (id)pairingIdentifier;
- (id)pairingStatusFlag;
- (id)peripheralUUID;
- (void)setAccessoryName:(id)arg1;
- (void)setAdvInterval:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCompatibleVersion:(id)arg1;
- (void)setConfigNumber:(id)arg1;
- (void)setEncryptedPayload:(id)arg1;
- (void)setHkType:(id)arg1;
- (void)setLastSeen:(double)arg1;
- (void)setPairingIdentifier:(id)arg1;
- (void)setPairingStatusFlag:(id)arg1;
- (void)setPeripheralUUID:(id)arg1;
- (void)setStateNumber:(id)arg1;
- (id)setupHash;
- (id)stateNumber;
- (void)updateStateNumber:(id)arg1;
- (bool)updateWithPeripheral:(id)arg1;

@end
