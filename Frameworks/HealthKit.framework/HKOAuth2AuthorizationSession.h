/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKOAuth2AuthorizationSession : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _authorizationURL;
    NSString * _query;
}

@property (nonatomic, readonly, copy) NSURL *authorizationURL;
@property (nonatomic, readonly, copy) NSString *query;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authorizationURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAuthorizationURL:(id)arg1 query:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)query;

@end
