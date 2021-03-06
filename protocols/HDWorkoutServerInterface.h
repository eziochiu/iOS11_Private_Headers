/* made by EzioChiu.
 */

@protocol HDWorkoutServerInterface <NSObject>

@required

- (void)remote_activeWorkoutApplicationIdentifier:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)remote_addSamples:(void *)arg1 toWorkout:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, HKWorkout *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_associateSamplesWithUUIDs:(void *)arg1 withWorkout:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, HKWorkout *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_attachWorkoutServerWithClient:(void *)arg1 serverConfiguration:(void *)arg2 fitnessMachineConnectionClient:(void *)arg3 fitnessMachineSessionConfiguration:(void *)arg4 willReactivate:(void *)arg5 handler:(void *)arg6; // needs 6 arg types, found 13: id, _HKActiveWorkoutServerConfiguration *, <HKFitnessMachineConnectionClientInterface> *, _HKFitnessMachineSessionConfiguration *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HDActiveWorkoutServer *, bool, NSError *, void*
- (void)remote_endFitnessMachineConnectionForFitnessMachineSessionUUID:(NSUUID *)arg1 withConnectionUUID:(NSUUID *)arg2;
- (void)remote_endFitnessMachineConnectionWithUUID:(NSUUID *)arg1;
- (void)remote_forbidConnectionForFitnessMachineSessionUUID:(NSUUID *)arg1 withConnectionUUID:(NSUUID *)arg2;
- (void)remote_generatePauseOrResumeRequestWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_getCurrentWorkoutSnapshotWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _HKCurrentWorkoutSnapshot *, NSError *, void*
- (void)remote_getFirstPartyWorkoutSnapshotWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _HKFirstPartyWorkoutSnapshot *, NSError *, void*
- (void)remote_markClientReadyWithConnectionUUID:(NSUUID *)arg1;
- (void)remote_pauseAllActiveWorkoutsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_pauseWorkoutSessionWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_permitConnectionForFitnessMachineSessionUUID:(NSUUID *)arg1 activityType:(unsigned long long)arg2 withConnectionUUID:(NSUUID *)arg3;
- (void)remote_registerClient:(id <HKFitnessMachineConnectionClientInterface>)arg1 withConnectionUUID:(NSUUID *)arg2;
- (void)remote_registerConnectionInitiatorClient:(id <HKFitnessMachineConnectionInitiatorClientInterface>)arg1 withConnectionUUID:(NSUUID *)arg2;
- (void)remote_replaceWorkout:(void *)arg1 withWorkout:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKWorkout *, HKWorkout *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_resumeWorkoutSessionWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_simulateAccept;
- (void)remote_simulateDisconnect;
- (void)remote_simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)remote_startWatchAppWithWorkoutConfiguration:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKWorkoutConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_startWorkoutSession:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: _HKWorkoutSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_stopWorkoutSessionWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
