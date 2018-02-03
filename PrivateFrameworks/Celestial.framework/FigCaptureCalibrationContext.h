/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureCalibrationContext : NSObject {
    NSString * _activityName;
    unsigned long long  _expectedDataSize;
    NSString * _internalLogName;
    int  _interval;
    NSMutableDictionary * _lastSuccessfulCalibrationData;
    double  _lastSuccessfulCalibrationTimeStamp;
    int  _minimumBatteryLevelToRun;
    NSString * _preferenceString;
    NSString * _propertyName;
    NSArray * _supportedDevices;
}

@property (nonatomic, readonly) NSString *activityName;
@property (nonatomic, readonly) unsigned long long expectedDataSize;
@property (nonatomic, readonly) int interval;
@property (nonatomic, retain) NSDictionary *lastSuccessfulCalibrationData;
@property (nonatomic) double lastSuccessfulCalibrationTimeStamp;
@property (nonatomic, readonly) int minimumBatteryLevelToRun;
@property (nonatomic, readonly) NSString *propertyName;

+ (id)calibrationDataStringForInternalLogging:(id)arg1;
+ (unsigned int)calibrationStatusFromRawStreamCalibrationData:(id)arg1;
+ (id)createRawStreamCalibrationDataWithFailureReasons:(int)arg1;
+ (void)initialize;
+ (void)printDebugInfoForRawStreamCalibrationData:(id)arg1;

- (id)_createDictionaryForFailureOutsideFirmwareWithReasons:(unsigned int)arg1;
- (void)_updateAndStashCalibrationData:(id)arg1 externalErrors:(unsigned int)arg2 hasFirmwareErrors:(bool)arg3 magneticFieldAttempts:(int)arg4;
- (void)_writeCalibrationDataToInternalLogFile:(id)arg1 magneticField:(struct { double x1; double x2; double x3; })arg2;
- (id)activityName;
- (unsigned long long)expectedDataSize;
- (id)initWithPreferenceString:(id)arg1 withActivityName:(id)arg2 withPropertyName:(id)arg3 withExpectedDataSize:(unsigned long long)arg4 withInterval:(int)arg5 withMinimumBatteryLevel:(int)arg6 withInternalLogName:(id)arg7 supportedDeviceNames:(id)arg8;
- (id)initWithSupportedDeviceNames:(id)arg1;
- (int)interval;
- (id)lastSuccessfulCalibrationData;
- (double)lastSuccessfulCalibrationTimeStamp;
- (int)minimumBatteryLevelToRun;
- (id)propertyName;
- (void)reportForAggdLoggingWithCalibrationData:(id)arg1 isValid:(bool)arg2 magneticFieldMagnitude:(double)arg3;
- (void)setLastSuccessfulCalibrationData:(id)arg1;
- (void)setLastSuccessfulCalibrationTimeStamp:(double)arg1;
- (void)updateWithNewCalibrationData:(id)arg1 orExternalErrors:(unsigned int)arg2 magneticFieldAttempts:(int)arg3 magneticField:(struct { double x1; double x2; double x3; })arg4 isCalibrationValid:(bool*)arg5 calibrationStatus:(unsigned int*)arg6;

@end
