/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSRemoteNotificationClient : NSObject <NSCoding> {
    NSString * _environment;
    NSData * _lastKnownDeviceToken;
    NSString * _pushDisabledReason;
    NSString * _tokenIdentifier;
    bool  _wantsPush;
}

@property (nonatomic, retain) NSString *environment;
@property (nonatomic, retain) NSData *lastKnownDeviceToken;
@property (nonatomic, retain) NSString *pushDisabledReason;
@property (nonatomic, readonly, retain) NSString *tokenIdentifier;
@property (getter=doesWantPush, nonatomic) bool wantsPush;

+ (void)initialize;
+ (id)validEnvironmentFromEnvironment:(id)arg1;

- (void).cxx_destruct;
- (bool)doesWantPush;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastKnownDeviceToken;
- (id)pushDisabledReason;
- (void)setEnvironment:(id)arg1;
- (void)setLastKnownDeviceToken:(id)arg1;
- (void)setPushDisabledReason:(id)arg1;
- (void)setWantsPush:(bool)arg1;
- (id)tokenIdentifier;
- (bool)wantsPushWithCoder:(id)arg1;

@end
