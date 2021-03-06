/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchDeviceUnlockTokenResultObject : CATTaskResultObject {
    NSData * _unlockTokenData;
}

@property (nonatomic, readonly, copy) NSData *unlockTokenData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnlockTokenData:(id)arg1;
- (id)unlockTokenData;

@end
