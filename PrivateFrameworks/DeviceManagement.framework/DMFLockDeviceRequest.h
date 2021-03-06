/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFLockDeviceRequest : CATTaskRequest {
    NSString * _message;
    NSString * _phoneNumber;
}

@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *phoneNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (id)phoneNumber;
- (void)setMessage:(id)arg1;
- (void)setPhoneNumber:(id)arg1;

@end
