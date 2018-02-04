/* made by EzioChiu.
 */

@protocol DTObjectAllocServiceAuthorizedAPI <DTXAllowedRPC>

@required

- (NSNumber *)attachToPid:(NSNumber *)arg1 eventsMask:(NSNumber *)arg2;
- (NSDictionary *)preparedEnvironmentForLaunch:(NSDictionary *)arg1 eventsMask:(NSNumber *)arg2;
- (void)startCollectionWithPid:(int)arg1;
- (void)stopCollection;

@end