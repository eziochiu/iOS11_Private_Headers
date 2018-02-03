/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWAggdDataReporter : NSObject {
    NSObject<OS_dispatch_queue> * _aggdDispatchQueue;
}

+ (void)initialize;
+ (id)sharedInstance;

- (id)_aggdCameraStreamingTimeStringFromDeviceType:(int)arg1 devicePosition:(int)arg2;
- (id)_aggdGNRProcessingStatusStringFromProcessingStatus:(int)arg1;
- (id)_aggdPearlInfraredProjectorUptimeStringFromCurrent:(int)arg1 pattern:(int)arg2 applicationID:(id)arg3;
- (id)_aggdSDOFProcessingStatusStringFromProcessingStatus:(int)arg1;
- (id)_aggdShutterLagStringForCaptureType:(int)arg1 wideSubCaptureType:(int)arg2 teleSubCaptureType:(int)arg3 stillDuringVideo:(bool)arg4 frontCamera:(bool)arg5;
- (id)_aggdStereoFusionProcessingStatusStringFromProcessingStatus:(int)arg1;
- (id)_aggdStereoFusionProcessingTypeStringForCaptureType:(int)arg1 isStereoFusionCapture:(bool)arg2 wideSubCaptureType:(int)arg3 teleSubCaptureType:(int)arg4 isOriginalImage:(bool)arg5;
- (void)_incrementAggdScalarKey:(id)arg1 withValue:(long long)arg2;
- (void)_pushValue:(double)arg1 aggdDistributionKey:(id)arg2;
- (void)_setAggdScalarKey:(id)arg1 withValue:(long long)arg2;
- (void)dealloc;
- (id)init;
- (void)reportAPSSphereInteractionCalibrationForPosition:(int)arg1 residualErrorNeutral:(float)arg2 calibrationZHeightNeutral:(float)arg3 residualErrorMacro:(float)arg4 calibrationZHeightMacro:(float)arg5 calibrationStatus:(unsigned int)arg6 isValid:(bool)arg7;
- (void)reportAutoFocusCalibrationForPosition:(int)arg1 freqZ:(float)arg2 deltaFreqZ:(float)arg3 qZ:(float)arg4 deltaQZ:(float)arg5 gainZ:(float)arg6 calibrationStatus:(unsigned int)arg7 isValid:(bool)arg8;
- (void)reportAutoFocusPositionSensorCalibrationForPosition:(int)arg1 iStopZEstimate:(int)arg2 eSensorOutput:(short)arg3 wSensorOutput:(short)arg4 gravityZ:(int)arg5 calibrationStatus:(unsigned int)arg6 sensorTemp:(short)arg7 factoryCalibrationOffset:(int)arg8 infinityEndStopDelta:(int)arg9 deltaNeutralZFromNVM:(int)arg10 estimateSagZ:(int)arg11 combinedSensorOutput:(int)arg12 isValid:(bool)arg13;
- (void)reportAutoFocusPositionSensorMode:(int)arg1 portType:(id)arg2;
- (void)reportCalibrationStatisticsWithTime:(id)arg1 timeValue:(double)arg2 attemptsField:(id)arg3 attemptsValue:(long long)arg4 successField:(id)arg5 successValue:(long long)arg6 magneticFieldMagnitudeField:(id)arg7 magneticFieldMagnitudeValue:(double)arg8;
- (void)reportCameraStreamingTimeInMilliseconds:(unsigned long long)arg1 deviceType:(int)arg2 devicePosition:(int)arg3;
- (void)reportGNRSampleBufferProcessorProcessingStatus:(int)arg1;
- (void)reportPearlInfraredProjectorUptime:(unsigned long long)arg1 current:(int)arg2 pattern:(int)arg3 applicationID:(id)arg4;
- (void)reportSDOFSampleBufferProcessorProcessingStatus:(int)arg1;
- (void)reportShutterLag:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 captureType:(int)arg2 wideSubCaptureType:(int)arg3 teleSubCaptureType:(int)arg4 stillDuringVideo:(bool)arg5 frontCamera:(bool)arg6;
- (void)reportSphereCalibrationForPosition:(int)arg1 freqX:(float)arg2 deltaFreqX:(float)arg3 qX:(float)arg4 deltaQX:(float)arg5 freqY:(float)arg6 deltaFreqY:(float)arg7 qY:(float)arg8 deltaQY:(float)arg9 gainY:(float)arg10 calibrationStatus:(unsigned int)arg11 isValid:(bool)arg12;
- (void)reportSphereEndStopCalibrationForPosition:(int)arg1 oisPositiveX:(int)arg2 oisNegativeX:(int)arg3 oisPositiveY:(int)arg4 oisNegativeY:(int)arg5 maxPositiveXDriftFromNVM:(int)arg6 maxNegativeXDriftFromNVM:(int)arg7 maxPositiveYDriftFromNVM:(int)arg8 maxNegativeYDriftFromNVM:(int)arg9 sphereStrokeX:(int)arg10 sphereStrokeY:(int)arg11 calibrationStatus:(unsigned int)arg12 isValid:(bool)arg13;
- (void)reportStereoFusionProcessingTypeForCaptureType:(int)arg1 isStereoFusionCapture:(bool)arg2 wideSubCaptureType:(int)arg3 teleSubCaptureType:(int)arg4 isOriginalImage:(bool)arg5;
- (void)reportStereoFusionSampleBufferProcessorProcessingStatus:(int)arg1;

@end
