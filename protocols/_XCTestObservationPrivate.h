/* made by EzioChiu.
 */

@protocol _XCTestObservationPrivate <NSObject>

@optional

- (void)_testCase:(XCTestCase *)arg1 didFinishActivity:(XCActivityRecord *)arg2;
- (void)_testCase:(XCTestRun *)arg1 didMeasureValues:(NSArray *)arg2 forPerformanceMetricID:(NSString *)arg3 name:(NSString *)arg4 unitsOfMeasurement:(NSString *)arg5 baselineName:(NSString *)arg6 baselineAverage:(NSNumber *)arg7 maxPercentRegression:(NSNumber *)arg8 maxPercentRelativeStandardDeviation:(NSNumber *)arg9 maxRegression:(NSNumber *)arg10 maxStandardDeviation:(NSNumber *)arg11 file:(NSString *)arg12 line:(unsigned long long)arg13;
- (void)_testCase:(XCTestCase *)arg1 willStartActivity:(XCActivityRecord *)arg2;

@end