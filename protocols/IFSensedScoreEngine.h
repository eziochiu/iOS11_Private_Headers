/* made by EzioChiu.
 */

@protocol IFSensedScoreEngine <NSObject>

@required

- (double)sensedScoreForTopic:(IFTopic *)arg1 directScore:(double)arg2;

@end
