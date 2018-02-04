/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlaybackDelegationProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _deviceGUID;
    NSString * _deviceName;
    NSString * _requestUserAgent;
    unsigned long long  _storeAccountID;
    long long  _systemReleaseType;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly, copy) NSString *deviceGUID;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (nonatomic, readonly, copy) NSString *requestUserAgent;
@property (nonatomic, readonly) unsigned long long storeAccountID;
@property (nonatomic, readonly) long long systemReleaseType;
@property (nonatomic, readonly, copy) NSTimeZone *timeZone;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone { }*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceGUID;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreAccountID:(unsigned long long)arg1 deviceGUID:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)requestUserAgent;
- (unsigned long long)storeAccountID;
- (long long)systemReleaseType;
- (id)timeZone;

@end