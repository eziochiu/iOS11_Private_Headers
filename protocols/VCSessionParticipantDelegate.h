/* made by EzioChiu.
 */

@protocol VCSessionParticipantDelegate <NSObject>

@required

- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didFrequencyLevelsChange:(NSData *)arg2;

@end
