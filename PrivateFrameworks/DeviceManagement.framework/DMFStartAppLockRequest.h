/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFStartAppLockRequest : CATTaskRequest {
    NSString * _bundleIdentifier;
}

@property (nonatomic, copy) NSString *bundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;

@end