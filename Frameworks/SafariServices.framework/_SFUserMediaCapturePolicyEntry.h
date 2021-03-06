/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFUserMediaCapturePolicyEntry : NSObject {
    long long  _camPermission;
    long long  _cameraChallengeCount;
    NSMutableDictionary * _ephemeralSalts;
    double  _expirationDate;
    double  _grantDate;
    bool  _hasCommittedNavigation;
    long long  _micPermission;
    long long  _microphoneChallengeCount;
    NSString * _origin;
    NSString * _persistentSalt;
    NSString * _topLevelOrigin;
}

@property (nonatomic) long long cameraPermission;
@property (nonatomic, retain) NSMutableDictionary *ephemeralSalts;
@property (nonatomic) double expirationDate;
@property (nonatomic) double grantDate;
@property (nonatomic) long long microphonePermission;
@property (nonatomic, retain) NSString *origin;
@property (nonatomic, retain) NSString *persistentSalt;
@property (nonatomic, retain) NSString *topLevelOrigin;

+ (void)setTimeout:(double)arg1;
+ (double)timeout;

- (void).cxx_destruct;
- (bool)_isValidUserMediaPermission:(long long)arg1;
- (long long)cameraPermission;
- (id)dictionaryRepresentation;
- (void)didCommitNavigation;
- (id)ephemeralSalts;
- (double)expirationDate;
- (double)grantDate;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithMicrophonePermission:(long long)arg1 cameraPermission:(long long)arg2 forOrigin:(id)arg3 topLevelOrigin:(id)arg4;
- (bool)isValid;
- (long long)microphonePermission;
- (id)origin;
- (id)persistentSalt;
- (void)setCameraPermission:(long long)arg1;
- (void)setEphemeralSalts:(id)arg1;
- (void)setExpirationDate:(double)arg1;
- (void)setGrantDate:(double)arg1;
- (void)setMicrophonePermission:(long long)arg1;
- (void)setOrigin:(id)arg1;
- (void)setPersistentSalt:(id)arg1;
- (void)setTopLevelOrigin:(id)arg1;
- (id)topLevelOrigin;

@end
