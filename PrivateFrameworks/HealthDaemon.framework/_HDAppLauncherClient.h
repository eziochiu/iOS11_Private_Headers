/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAppLauncherClient : NSObject {
    NSMutableDictionary * _expirationDateByRegistrationIdentifier;
    bool  _launching;
    bool  _retry;
}

@property (nonatomic, retain) NSMutableDictionary *expirationDateByRegistrationIdentifier;
@property (nonatomic) bool launching;
@property (nonatomic) bool retry;

- (void).cxx_destruct;
- (bool)cleanUpExpiredRegistrationsWithDate:(id)arg1;
- (id)expirationDateByRegistrationIdentifier;
- (bool)hasValidRegistrationByDate:(id)arg1;
- (id)init;
- (bool)launching;
- (void)registerIdentifier:(id)arg1 withDate:(id)arg2;
- (bool)retry;
- (void)setExpirationDateByRegistrationIdentifier:(id)arg1;
- (void)setLaunching:(bool)arg1;
- (void)setRetry:(bool)arg1;
- (void)unregisterIdentifier:(id)arg1;

@end
