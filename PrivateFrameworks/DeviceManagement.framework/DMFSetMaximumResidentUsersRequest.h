/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFSetMaximumResidentUsersRequest : CATTaskRequest {
    unsigned long long  _count;
}

@property (nonatomic) unsigned long long count;

+ (bool)supportsSecureCoding;

- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCount:(unsigned long long)arg1;

@end
