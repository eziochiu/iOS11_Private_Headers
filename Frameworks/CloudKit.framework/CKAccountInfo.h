/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAccountInfo : NSObject <NSSecureCoding> {
    long long  _accountPartition;
    long long  _accountStatus;
    bool  _supportsDeviceToDeviceEncryption;
}

@property (nonatomic) long long accountPartition;
@property (nonatomic) long long accountStatus;
@property (nonatomic) bool supportsDeviceToDeviceEncryption;

+ (bool)supportsSecureCoding;

- (id)CKPropertiesDescription;
- (long long)accountPartition;
- (long long)accountStatus;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAccountPartition:(long long)arg1;
- (void)setAccountStatus:(long long)arg1;
- (void)setSupportsDeviceToDeviceEncryption:(bool)arg1;
- (bool)supportsDeviceToDeviceEncryption;

@end
