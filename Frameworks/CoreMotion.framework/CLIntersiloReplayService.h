/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloReplayService : CLIntersiloService <CLIntersiloServiceProtocol> {
    <CLIntersiloReplayServiceClientProtocol> * _coordinator;
    int (* _filter;
    struct Item { 
        int (**_vptr$Base)(); 
        struct unique_ptr<CMMsl::Accel, std::__1::default_delete<CMMsl::Accel> > { 
            struct __compressed_pair<CMMsl::Accel *, std::__1::default_delete<CMMsl::Accel> > { 
                struct Accel {} *__first_; 
            } __ptr_; 
        } _accel; 
        struct unique_ptr<CMMsl::AccelBatch, std::__1::default_delete<CMMsl::AccelBatch> > { 
            struct __compressed_pair<CMMsl::AccelBatch *, std::__1::default_delete<CMMsl::AccelBatch> > { 
                struct AccelBatch {} *__first_; 
            } __ptr_; 
        } _accelBatch; 
        struct unique_ptr<CMMsl::AccelGesture, std::__1::default_delete<CMMsl::AccelGesture> > { 
            struct __compressed_pair<CMMsl::AccelGesture *, std::__1::default_delete<CMMsl::AccelGesture> > { 
                struct AccelGesture {} *__first_; 
            } __ptr_; 
        } _accelGesture; 
        struct unique_ptr<CMMsl::AccelGps, std::__1::default_delete<CMMsl::AccelGps> > { 
            struct __compressed_pair<CMMsl::AccelGps *, std::__1::default_delete<CMMsl::AccelGps> > { 
                struct AccelGps {} *__first_; 
            } __ptr_; 
        } _accelGps; 
        struct unique_ptr<CMMsl::AccelOscarEmu, std::__1::default_delete<CMMsl::AccelOscarEmu> > { 
            struct __compressed_pair<CMMsl::AccelOscarEmu *, std::__1::default_delete<CMMsl::AccelOscarEmu> > { 
                struct AccelOscarEmu {} *__first_; 
            } __ptr_; 
        } _accelOscarEmu; 
        struct unique_ptr<CMMsl::BTConnection, std::__1::default_delete<CMMsl::BTConnection> > { 
            struct __compressed_pair<CMMsl::BTConnection *, std::__1::default_delete<CMMsl::BTConnection> > { 
                struct BTConnection {} *__first_; 
            } __ptr_; 
        } _bTConnection; 
        struct unique_ptr<CMMsl::BasebandSpeed, std::__1::default_delete<CMMsl::BasebandSpeed> > { 
            struct __compressed_pair<CMMsl::BasebandSpeed *, std::__1::default_delete<CMMsl::BasebandSpeed> > { 
                struct BasebandSpeed {} *__first_; 
            } __ptr_; 
        } _basebandSpeed; 
        struct unique_ptr<CMMsl::BodyMetrics, std::__1::default_delete<CMMsl::BodyMetrics> > { 
            struct __compressed_pair<CMMsl::BodyMetrics *, std::__1::default_delete<CMMsl::BodyMetrics> > { 
                struct BodyMetrics {} *__first_; 
            } __ptr_; 
        } _bodyMetrics; 
        struct unique_ptr<CMMsl::CalorimetryPauseEvent, std::__1::default_delete<CMMsl::CalorimetryPauseEvent> > { 
            struct __compressed_pair<CMMsl::CalorimetryPauseEvent *, std::__1::default_delete<CMMsl::CalorimetryPauseEvent> > { 
                struct CalorimetryPauseEvent {} *__first_; 
            } __ptr_; 
        } _calorimetryPauseEvent; 
        double _cftime; 
        struct unique_ptr<CMMsl::CoarseElevationChange, std::__1::default_delete<CMMsl::CoarseElevationChange> > { 
            struct __compressed_pair<CMMsl::CoarseElevationChange *, std::__1::default_delete<CMMsl::CoarseElevationChange> > { 
                struct CoarseElevationChange {} *__first_; 
            } __ptr_; 
        } _coarseElevationChange; 
        struct unique_ptr<CMMsl::Compass, std::__1::default_delete<CMMsl::Compass> > { 
            struct __compressed_pair<CMMsl::Compass *, std::__1::default_delete<CMMsl::Compass> > { 
                struct Compass {} *__first_; 
            } __ptr_; 
        } _compass; 
        struct unique_ptr<CMMsl::CompassAlignment, std::__1::default_delete<CMMsl::CompassAlignment> > { 
            struct __compressed_pair<CMMsl::CompassAlignment *, std::__1::default_delete<CMMsl::CompassAlignment> > { 
                struct CompassAlignment {} *__first_; 
            } __ptr_; 
        } _compassAlignment; 
        struct unique_ptr<CMMsl::CompassCalibration, std::__1::default_delete<CMMsl::CompassCalibration> > { 
            struct __compressed_pair<CMMsl::CompassCalibration *, std::__1::default_delete<CMMsl::CompassCalibration> > { 
                struct CompassCalibration {} *__first_; 
            } __ptr_; 
        } _compassCalibration; 
        struct unique_ptr<CMMsl::CompassConstraints, std::__1::default_delete<CMMsl::CompassConstraints> > { 
            struct __compressed_pair<CMMsl::CompassConstraints *, std::__1::default_delete<CMMsl::CompassConstraints> > { 
                struct CompassConstraints {} *__first_; 
            } __ptr_; 
        } _compassConstraints; 
        struct unique_ptr<CMMsl::CompassCorrection, std::__1::default_delete<CMMsl::CompassCorrection> > { 
            struct __compressed_pair<CMMsl::CompassCorrection *, std::__1::default_delete<CMMsl::CompassCorrection> > { 
                struct CompassCorrection {} *__first_; 
            } __ptr_; 
        } _compassCorrection; 
        struct unique_ptr<CMMsl::CourseConstraints, std::__1::default_delete<CMMsl::CourseConstraints> > { 
            struct __compressed_pair<CMMsl::CourseConstraints *, std::__1::default_delete<CMMsl::CourseConstraints> > { 
                struct CourseConstraints {} *__first_; 
            } __ptr_; 
        } _courseConstraints; 
        struct unique_ptr<CMMsl::CourseCorrection, std::__1::default_delete<CMMsl::CourseCorrection> > { 
            struct __compressed_pair<CMMsl::CourseCorrection *, std::__1::default_delete<CMMsl::CourseCorrection> > { 
                struct CourseCorrection {} *__first_; 
            } __ptr_; 
        } _courseCorrection; 
        struct unique_ptr<CMMsl::DeviceMotion, std::__1::default_delete<CMMsl::DeviceMotion> > { 
            struct __compressed_pair<CMMsl::DeviceMotion *, std::__1::default_delete<CMMsl::DeviceMotion> > { 
                struct DeviceMotion {} *__first_; 
            } __ptr_; 
        } _deviceMotion; 
        struct unique_ptr<CMMsl::DeviceMotionCovariance, std::__1::default_delete<CMMsl::DeviceMotionCovariance> > { 
            struct __compressed_pair<CMMsl::DeviceMotionCovariance *, std::__1::default_delete<CMMsl::DeviceMotionCovariance> > { 
                struct DeviceMotionCovariance {} *__first_; 
            } __ptr_; 
        } _deviceMotionCovariance; 
        struct unique_ptr<CMMsl::ElevationChange, std::__1::default_delete<CMMsl::ElevationChange> > { 
            struct __compressed_pair<CMMsl::ElevationChange *, std::__1::default_delete<CMMsl::ElevationChange> > { 
                struct ElevationChange {} *__first_; 
            } __ptr_; 
        } _elevationChange; 
        struct unique_ptr<CMMsl::EnhancedDeviceMotion, std::__1::default_delete<CMMsl::EnhancedDeviceMotion> > { 
            struct __compressed_pair<CMMsl::EnhancedDeviceMotion *, std::__1::default_delete<CMMsl::EnhancedDeviceMotion> > { 
                struct EnhancedDeviceMotion {} *__first_; 
            } __ptr_; 
        } _enhancedDeviceMotion; 
        struct unique_ptr<CMMsl::FallStats, std::__1::default_delete<CMMsl::FallStats> > { 
            struct __compressed_pair<CMMsl::FallStats *, std::__1::default_delete<CMMsl::FallStats> > { 
                struct FallStats {} *__first_; 
            } __ptr_; 
        } _fallStats; 
        struct unique_ptr<CMMsl::GestureHint, std::__1::default_delete<CMMsl::GestureHint> > { 
            struct __compressed_pair<CMMsl::GestureHint *, std::__1::default_delete<CMMsl::GestureHint> > { 
                struct GestureHint {} *__first_; 
            } __ptr_; 
        } _gestureHint; 
        struct unique_ptr<CMMsl::GravityConstraints, std::__1::default_delete<CMMsl::GravityConstraints> > { 
            struct __compressed_pair<CMMsl::GravityConstraints *, std::__1::default_delete<CMMsl::GravityConstraints> > { 
                struct GravityConstraints {} *__first_; 
            } __ptr_; 
        } _gravityConstraints; 
        struct unique_ptr<CMMsl::GravityCorrection, std::__1::default_delete<CMMsl::GravityCorrection> > { 
            struct __compressed_pair<CMMsl::GravityCorrection *, std::__1::default_delete<CMMsl::GravityCorrection> > { 
                struct GravityCorrection {} *__first_; 
            } __ptr_; 
        } _gravityCorrection; 
        struct unique_ptr<CMMsl::Gyro, std::__1::default_delete<CMMsl::Gyro> > { 
            struct __compressed_pair<CMMsl::Gyro *, std::__1::default_delete<CMMsl::Gyro> > { 
                struct Gyro {} *__first_; 
            } __ptr_; 
        } _gyro; 
        struct unique_ptr<CMMsl::GyroBiasAndVariance, std::__1::default_delete<CMMsl::GyroBiasAndVariance> > { 
            struct __compressed_pair<CMMsl::GyroBiasAndVariance *, std::__1::default_delete<CMMsl::GyroBiasAndVariance> > { 
                struct GyroBiasAndVariance {} *__first_; 
            } __ptr_; 
        } _gyroBiasAndVariance; 
        struct unique_ptr<CMMsl::GyroBiasConstraints, std::__1::default_delete<CMMsl::GyroBiasConstraints> > { 
            struct __compressed_pair<CMMsl::GyroBiasConstraints *, std::__1::default_delete<CMMsl::GyroBiasConstraints> > { 
                struct GyroBiasConstraints {} *__first_; 
            } __ptr_; 
        } _gyroBiasConstraints; 
        struct unique_ptr<CMMsl::GyroBiasCorrection, std::__1::default_delete<CMMsl::GyroBiasCorrection> > { 
            struct __compressed_pair<CMMsl::GyroBiasCorrection *, std::__1::default_delete<CMMsl::GyroBiasCorrection> > { 
                struct GyroBiasCorrection {} *__first_; 
            } __ptr_; 
        } _gyroBiasCorrection; 
        struct unique_ptr<CMMsl::GyroBiasFit, std::__1::default_delete<CMMsl::GyroBiasFit> > { 
            struct __compressed_pair<CMMsl::GyroBiasFit *, std::__1::default_delete<CMMsl::GyroBiasFit> > { 
                struct GyroBiasFit {} *__first_; 
            } __ptr_; 
        } _gyroBiasFit; 
        struct unique_ptr<CMMsl::GyroCompass, std::__1::default_delete<CMMsl::GyroCompass> > { 
            struct __compressed_pair<CMMsl::GyroCompass *, std::__1::default_delete<CMMsl::GyroCompass> > { 
                struct GyroCompass {} *__first_; 
            } __ptr_; 
        } _gyroCompass; 
        struct unique_ptr<CMMsl::GyroDt, std::__1::default_delete<CMMsl::GyroDt> > { 
            struct __compressed_pair<CMMsl::GyroDt *, std::__1::default_delete<CMMsl::GyroDt> > { 
                struct GyroDt {} *__first_; 
            } __ptr_; 
        } _gyroDt; 
        struct unique_ptr<CMMsl::GyroGps, std::__1::default_delete<CMMsl::GyroGps> > { 
            struct __compressed_pair<CMMsl::GyroGps *, std::__1::default_delete<CMMsl::GyroGps> > { 
                struct GyroGps {} *__first_; 
            } __ptr_; 
        } _gyroGps; 
        struct unique_ptr<CMMsl::GyroOscarEmu, std::__1::default_delete<CMMsl::GyroOscarEmu> > { 
            struct __compressed_pair<CMMsl::GyroOscarEmu *, std::__1::default_delete<CMMsl::GyroOscarEmu> > { 
                struct GyroOscarEmu {} *__first_; 
            } __ptr_; 
        } _gyroOscarEmu; 
        struct unique_ptr<CMMsl::GyroTemperature, std::__1::default_delete<CMMsl::GyroTemperature> > { 
            struct __compressed_pair<CMMsl::GyroTemperature *, std::__1::default_delete<CMMsl::GyroTemperature> > { 
                struct GyroTemperature {} *__first_; 
            } __ptr_; 
        } _gyroTemperature; 
        struct unique_ptr<CMMsl::IntersiloNSCodingData, std::__1::default_delete<CMMsl::IntersiloNSCodingData> > { 
            struct __compressed_pair<CMMsl::IntersiloNSCodingData *, std::__1::default_delete<CMMsl::IntersiloNSCodingData> > { 
                struct IntersiloNSCodingData {} *__first_; 
            } __ptr_; 
        } _intersiloNSCodingData; 
        struct unique_ptr<CMMsl::LocationOscarEmu, std::__1::default_delete<CMMsl::LocationOscarEmu> > { 
            struct __compressed_pair<CMMsl::LocationOscarEmu *, std::__1::default_delete<CMMsl::LocationOscarEmu> > { 
                struct LocationOscarEmu {} *__first_; 
            } __ptr_; 
        } _locationOscarEmu; 
        struct unique_ptr<CMMsl::Magnetometer, std::__1::default_delete<CMMsl::Magnetometer> > { 
            struct __compressed_pair<CMMsl::Magnetometer *, std::__1::default_delete<CMMsl::Magnetometer> > { 
                struct Magnetometer {} *__first_; 
            } __ptr_; 
        } _magnetometer; 
        struct unique_ptr<CMMsl::MetsInfo, std::__1::default_delete<CMMsl::MetsInfo> > { 
            struct __compressed_pair<CMMsl::MetsInfo *, std::__1::default_delete<CMMsl::MetsInfo> > { 
                struct MetsInfo {} *__first_; 
            } __ptr_; 
        } _metsInfo; 
        struct unique_ptr<CMMsl::MotionGPSLocation, std::__1::default_delete<CMMsl::MotionGPSLocation> > { 
            struct __compressed_pair<CMMsl::MotionGPSLocation *, std::__1::default_delete<CMMsl::MotionGPSLocation> > { 
                struct MotionGPSLocation {} *__first_; 
            } __ptr_; 
        } _motionGPSLocation; 
        struct unique_ptr<CMMsl::MotionLoiData, std::__1::default_delete<CMMsl::MotionLoiData> > { 
            struct __compressed_pair<CMMsl::MotionLoiData *, std::__1::default_delete<CMMsl::MotionLoiData> > { 
                struct MotionLoiData {} *__first_; 
            } __ptr_; 
        } _motionLoiData; 
        struct unique_ptr<CMMsl::MotionStateUpdate, std::__1::default_delete<CMMsl::MotionStateUpdate> > { 
            struct __compressed_pair<CMMsl::MotionStateUpdate *, std::__1::default_delete<CMMsl::MotionStateUpdate> > { 
                struct MotionStateUpdate {} *__first_; 
            } __ptr_; 
        } _motionStateUpdate; 
        struct unique_ptr<CMMsl::MotionWifiAssociation, std::__1::default_delete<CMMsl::MotionWifiAssociation> > { 
            struct __compressed_pair<CMMsl::MotionWifiAssociation *, std::__1::default_delete<CMMsl::MotionWifiAssociation> > { 
                struct MotionWifiAssociation {} *__first_; 
            } __ptr_; 
        } _motionWifiAssociation; 
        struct unique_ptr<CMMsl::MotionWifiLocation, std::__1::default_delete<CMMsl::MotionWifiLocation> > { 
            struct __compressed_pair<CMMsl::MotionWifiLocation *, std::__1::default_delete<CMMsl::MotionWifiLocation> > { 
                struct MotionWifiLocation {} *__first_; 
            } __ptr_; 
        } _motionWifiLocation; 
        struct unique_ptr<CMMsl::NatalieData, std::__1::default_delete<CMMsl::NatalieData> > { 
            struct __compressed_pair<CMMsl::NatalieData *, std::__1::default_delete<CMMsl::NatalieData> > { 
                struct NatalieData {} *__first_; 
            } __ptr_; 
        } _natalieData; 
        struct unique_ptr<CMMsl::NonlinearBiasFit, std::__1::default_delete<CMMsl::NonlinearBiasFit> > { 
            struct __compressed_pair<CMMsl::NonlinearBiasFit *, std::__1::default_delete<CMMsl::NonlinearBiasFit> > { 
                struct NonlinearBiasFit {} *__first_; 
            } __ptr_; 
        } _nonlinearBiasFit; 
        struct unique_ptr<CMMsl::Odometer, std::__1::default_delete<CMMsl::Odometer> > { 
            struct __compressed_pair<CMMsl::Odometer *, std::__1::default_delete<CMMsl::Odometer> > { 
                struct Odometer {} *__first_; 
            } __ptr_; 
        } _odometer; 
        struct unique_ptr<CMMsl::OdometerWithAltitude, std::__1::default_delete<CMMsl::OdometerWithAltitude> > { 
            struct __compressed_pair<CMMsl::OdometerWithAltitude *, std::__1::default_delete<CMMsl::OdometerWithAltitude> > { 
                struct OdometerWithAltitude {} *__first_; 
            } __ptr_; 
        } _odometerWithAltitude; 
        struct unique_ptr<CMMsl::OnsetHeartRateData, std::__1::default_delete<CMMsl::OnsetHeartRateData> > { 
            struct __compressed_pair<CMMsl::OnsetHeartRateData *, std::__1::default_delete<CMMsl::OnsetHeartRateData> > { 
                struct OnsetHeartRateData {} *__first_; 
            } __ptr_; 
        } _onsetHeartRateData; 
        struct unique_ptr<CMMsl::Pressure, std::__1::default_delete<CMMsl::Pressure> > { 
            struct __compressed_pair<CMMsl::Pressure *, std::__1::default_delete<CMMsl::Pressure> > { 
                struct Pressure {} *__first_; 
            } __ptr_; 
        } _pressure; 
        struct unique_ptr<CMMsl::PressureFiltered, std::__1::default_delete<CMMsl::PressureFiltered> > { 
            struct __compressed_pair<CMMsl::PressureFiltered *, std::__1::default_delete<CMMsl::PressureFiltered> > { 
                struct PressureFiltered {} *__first_; 
            } __ptr_; 
        } _pressureFiltered; 
        struct unique_ptr<CMMsl::PressureFilteredNoTemperature, std::__1::default_delete<CMMsl::PressureFilteredNoTemperature> > { 
            struct __compressed_pair<CMMsl::PressureFilteredNoTemperature *, std::__1::default_delete<CMMsl::PressureFilteredNoTemperature> > { 
                struct PressureFilteredNoTemperature {} *__first_; 
            } __ptr_; 
        } _pressureFilteredNoTemperature; 
        struct unique_ptr<CMMsl::PressureGps, std::__1::default_delete<CMMsl::PressureGps> > { 
            struct __compressed_pair<CMMsl::PressureGps *, std::__1::default_delete<CMMsl::PressureGps> > { 
                struct PressureGps {} *__first_; 
            } __ptr_; 
        } _pressureGps; 
        struct unique_ptr<CMMsl::PressureOscarEmu, std::__1::default_delete<CMMsl::PressureOscarEmu> > { 
            struct __compressed_pair<CMMsl::PressureOscarEmu *, std::__1::default_delete<CMMsl::PressureOscarEmu> > { 
                struct PressureOscarEmu {} *__first_; 
            } __ptr_; 
        } _pressureOscarEmu; 
        struct unique_ptr<CMMsl::Prox, std::__1::default_delete<CMMsl::Prox> > { 
            struct __compressed_pair<CMMsl::Prox *, std::__1::default_delete<CMMsl::Prox> > { 
                struct Prox {} *__first_; 
            } __ptr_; 
        } _prox; 
        struct unique_ptr<CMMsl::SessionOverride, std::__1::default_delete<CMMsl::SessionOverride> > { 
            struct __compressed_pair<CMMsl::SessionOverride *, std::__1::default_delete<CMMsl::SessionOverride> > { 
                struct SessionOverride {} *__first_; 
            } __ptr_; 
        } _sessionOverride; 
        struct unique_ptr<CMMsl::StepCadenceToStrideLengthBin, std::__1::default_delete<CMMsl::StepCadenceToStrideLengthBin> > { 
            struct __compressed_pair<CMMsl::StepCadenceToStrideLengthBin *, std::__1::default_delete<CMMsl::StepCadenceToStrideLengthBin> > { 
                struct StepCadenceToStrideLengthBin {} *__first_; 
            } __ptr_; 
        } _stepCadenceToStrideLengthBin; 
        struct unique_ptr<CMMsl::StreamingHeartRateData, std::__1::default_delete<CMMsl::StreamingHeartRateData> > { 
            struct __compressed_pair<CMMsl::StreamingHeartRateData *, std::__1::default_delete<CMMsl::StreamingHeartRateData> > { 
                struct StreamingHeartRateData {} *__first_; 
            } __ptr_; 
        } _streamingHeartRateData; 
        struct unique_ptr<CMMsl::StrideCalBin, std::__1::default_delete<CMMsl::StrideCalBin> > { 
            struct __compressed_pair<CMMsl::StrideCalBin *, std::__1::default_delete<CMMsl::StrideCalBin> > { 
                struct StrideCalBin {} *__first_; 
            } __ptr_; 
        } _strideCalBin; 
        struct unique_ptr<CMMsl::TouchOscarEmu, std::__1::default_delete<CMMsl::TouchOscarEmu> > { 
            struct __compressed_pair<CMMsl::TouchOscarEmu *, std::__1::default_delete<CMMsl::TouchOscarEmu> > { 
                struct TouchOscarEmu {} *__first_; 
            } __ptr_; 
        } _touchOscarEmu; 
        struct unique_ptr<CMMsl::VibrationEvent, std::__1::default_delete<CMMsl::VibrationEvent> > { 
            struct __compressed_pair<CMMsl::VibrationEvent *, std::__1::default_delete<CMMsl::VibrationEvent> > { 
                struct VibrationEvent {} *__first_; 
            } __ptr_; 
        } _vibrationEvent; 
        struct unique_ptr<CMMsl::WatchOrientationSettings, std::__1::default_delete<CMMsl::WatchOrientationSettings> > { 
            struct __compressed_pair<CMMsl::WatchOrientationSettings *, std::__1::default_delete<CMMsl::WatchOrientationSettings> > { 
                struct WatchOrientationSettings {} *__first_; 
            } __ptr_; 
        } _watchOrientationSettings; 
        struct unique_ptr<CMMsl::WorkoutEvent, std::__1::default_delete<CMMsl::WorkoutEvent> > { 
            struct __compressed_pair<CMMsl::WorkoutEvent *, std::__1::default_delete<CMMsl::WorkoutEvent> > { 
                struct WorkoutEvent {} *__first_; 
            } __ptr_; 
        } _workoutEvent; 
        struct { 
            unsigned int cftime : 1; 
        } _has; 
    }  _onDeckMessage;
    NSMapTable * _outboundTable;
    struct unique_ptr<CMMsl::Reader, std::__1::default_delete<CMMsl::Reader> > { 
        struct __compressed_pair<CMMsl::Reader *, std::__1::default_delete<CMMsl::Reader> > { 
            struct Reader {} *__first_; 
        } __ptr_; 
    }  _replayReader;
}

@property (nonatomic, retain) <CLIntersiloReplayServiceClientProtocol> *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int (*filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *outboundTable;
@property (readonly) Class superclass;
@property (nonatomic) bool valid;

+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
+ (id)getSilo;
+ (void)performSyncOnSilo:(id)arg1 invoker:(id /* block */)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)beginService;
- (id)coordinator;
- (void)endService;
- (int (*)filter;
- (id)getConnectionKeyFrom:(id)arg1 to:(id)arg2;
- (bool)handleAbstractInvocation:(id)arg1 selectorInfo:(id)arg2 selfProxy:(id)arg3 senderProxy:(id)arg4;
- (id)init;
- (bool)loadNextRecordedMessageOnDeck;
- (id)outboundTable;
- (void)setCoordinator:(id)arg1;
- (void)setFilter:(int (*)arg1;
- (void)setOutboundTable:(id)arg1;
- (void)tryToSendOnDeckMessage;
- (void)useRecordingFileForPlayback:(id)arg1;
- (void)useRecordingFileForPlayback:(void *)arg1 coordinator:(void *)arg2 synchronousFilter:(void *)arg3; // needs 3 arg types, found 4: id, /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*, id, int (*

@end
