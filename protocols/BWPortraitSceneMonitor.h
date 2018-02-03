/* made by EzioChiu.
 */

@protocol BWPortraitSceneMonitor <NSObject>

@required

- (bool)portraitSceneMonitoringRequiresStageThresholds;
- (bool)resolveSDOFStatusWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; unsigned int x15; float x16; unsigned char x17; double x18; int x19; int x20; int x21; float x22; float x23; int x24; int x25; unsigned char x26; int x27; float x28; float x29; int x30; int x31; int x32; int x33; long long x34; }*)arg2 flashModeForSceneMonitoring:(int)arg3 hdrModeForSceneMonitoring:(int)arg4 sisModeForSceneMonitoring:(int)arg5 effectStatus:(int*)arg6;
- (void)setPortraitSceneMonitoringRequiresStageThresholds:(bool)arg1;
- (void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(NSArray *)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(bool)arg7 faces:(NSArray *)arg8;

@end
