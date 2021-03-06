/* made by EzioChiu.
 */

@protocol XCTestDriverInterface

@required

- (id)_IDE_processWithBundleID:(NSString *)arg1 path:(NSString *)arg2 pid:(NSNumber *)arg3 crashedUnderSymbol:(NSString *)arg4;
- (id)_IDE_processWithToken:(NSNumber *)arg1 exitedWithStatus:(NSNumber *)arg2;
- (id)_IDE_startExecutingTestPlanWithProtocolVersion:(NSNumber *)arg1;
- (id)_IDE_stopTrackingProcessWithToken:(NSNumber *)arg1;

@end
