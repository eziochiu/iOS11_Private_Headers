/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchProfilesRequest : CATTaskRequest {
    unsigned long long  _filterFlags;
}

@property (nonatomic) unsigned long long filterFlags;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)filterFlags;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setFilterFlags:(unsigned long long)arg1;

@end
