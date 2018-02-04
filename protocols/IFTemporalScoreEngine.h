/* made by EzioChiu.
 */

@protocol IFTemporalScoreEngine <NSObject>

@required

- (double)temporalScoreForIndicationOnDate:(NSDate *)arg1 referenceDate:(NSDate *)arg2;

@end
