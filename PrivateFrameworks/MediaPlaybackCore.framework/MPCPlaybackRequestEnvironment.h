/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlaybackRequestEnvironment : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _clientIdentifier;
    NSString * _clientVersion;
    MPCPlaybackDelegationProperties * _delegationProperties;
    NSString * _householdIdentifier;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, copy) NSString *clientVersion;
@property (nonatomic, readonly, copy) MPCPlaybackDelegationProperties *delegationProperties;
@property (nonatomic, readonly, copy) NSString *householdIdentifier;
@property (nonatomic, readonly, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *requestingBundleVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithPlaybackRequestEnvironmentClass:(Class)arg1;
- (id)_createStoreRequestContext;
- (id)clientIdentifier;
- (id)clientVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegationProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)householdIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;

@end
