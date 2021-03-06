/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
 */

@interface _ACCExternalAccessoryInfo : NSObject {
    NSString * _firmwareRevisionActive;
    NSString * _firmwareRevisionPending;
    NSDictionary * _fullAccessoryInfo;
    NSString * _hardwareRevision;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _name;
    NSString * _primaryUUID;
    NSString * _serial;
}

@property (retain) NSString *firmwareRevisionActive;
@property (retain) NSString *firmwareRevisionPending;
@property (retain) NSDictionary *fullAccessoryInfo;
@property (retain) NSString *hardwareRevision;
@property (retain) NSString *manufacturer;
@property (retain) NSString *model;
@property (retain) NSString *name;
@property (retain) NSString *primaryUUID;
@property (retain) NSString *serial;

- (void).cxx_destruct;
- (id)copyAccessoryInfo;
- (id)description;
- (id)firmwareRevisionActive;
- (id)firmwareRevisionPending;
- (id)fullAccessoryInfo;
- (id)hardwareRevision;
- (unsigned long long)hash;
- (id)initWithAccessoryInfoDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)manufacturer;
- (id)model;
- (id)name;
- (id)primaryUUID;
- (id)serial;
- (void)setFirmwareRevisionActive:(id)arg1;
- (void)setFirmwareRevisionPending:(id)arg1;
- (void)setFullAccessoryInfo:(id)arg1;
- (void)setHardwareRevision:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPrimaryUUID:(id)arg1;
- (void)setSerial:(id)arg1;

@end
