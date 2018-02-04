/* made by EzioChiu.
 */

@protocol HKFitnessMachineConnectionClientInterface <NSObject>

@required

- (void)clientRemote_deliverConnectionChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(NSUUID *)arg3 error:(NSError *)arg4;
- (void)clientRemote_deliverDetectedNFC:(NSUUID *)arg1;
- (void)clientRemote_deliverFailedWithError:(NSError *)arg1;
- (void)clientRemote_deliverMachineChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(NSUUID *)arg3 date:(NSDate *)arg4;
- (void)clientRemote_deliverMachineInformationUpdated:(_HKFitnessMachine *)arg1;

@end