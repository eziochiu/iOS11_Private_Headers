/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicWriteRequest : HMDCharacteristicRequest {
    NSData * _authorizationData;
    NSUUID * _identifier;
    id  _value;
}

@property (nonatomic, readonly) NSData *authorizationData;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) id value;

+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3;
+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4;

- (void).cxx_destruct;
- (id)authorizationData;
- (id)description;
- (id)identifier;
- (id)initWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 identifier:(id)arg4;
- (id)value;

@end
