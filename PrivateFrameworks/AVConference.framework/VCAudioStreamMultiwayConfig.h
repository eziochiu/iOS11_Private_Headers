/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioStreamMultiwayConfig : NSObject {
    NSString * _participantId;
    NSString * _sessionId;
}

@property (nonatomic, retain) NSString *participantId;
@property (nonatomic, retain) NSString *sessionId;

- (void)dealloc;
- (id)participantId;
- (id)sessionId;
- (void)setParticipantId:(id)arg1;
- (void)setSessionId:(id)arg1;

@end
