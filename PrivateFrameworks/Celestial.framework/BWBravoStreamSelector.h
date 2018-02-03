/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWBravoStreamSelector : NSObject {
    BWFigVideoCaptureStream * _currentMasterStream;
    bool  _ignoreFocusAndExposureStability;
    float  _initialFocusDistance;
    int  _initialFocusPosition;
    int  _initialLuxLevel;
    bool  _lockWhenExposureAndFocusAreStable;
    bool  _locked;
    bool  _lockedOnTele;
    float  _minFocusDistanceChangeForSceneChange;
    int  _minFocusPositionChangeForSceneChange;
    float  _minLuxLevelChangeForSceneChange;
    float  _previousZoomFactor;
    BWFigVideoCaptureStream * _recommendedMasterStream;
    bool  _resetSceneChangeMonitoring;
    bool  _sceneChangeDetected;
    int  _selectionBehavior;
    float  _teleAEGainHysteresisLag;
    float  _teleBaseZoomFactor;
    float  _teleMaxAEGain;
    int  _teleMaxGainReachedCounter;
    int  _teleMaxSubsequentFramesAtMaxGain;
    BWFigVideoCaptureStream * _teleStream;
    int  _teleToWideFocusDistance;
    int  _teleToWideFocusPosition;
    bool  _usesAPSFocusDistance;
    bool  _usesLensMakersFocusDistance;
    int  _waitForFocusFrameCounter;
    BWFigVideoCaptureStream * _wideStream;
    int  _wideToTeleFocusDistance;
    int  _wideToTeleFocusPosition;
}

@property (nonatomic) bool ignoreFocusAndExposureStability;
@property (nonatomic) int selectionBehavior;

+ (void)initialize;

- (void)_attemptLockWithFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; unsigned int x15; float x16; unsigned char x17; double x18; int x19; int x20; int x21; float x22; float x23; int x24; int x25; unsigned char x26; int x27; float x28; float x29; int x30; int x31; int x32; int x33; long long x34; }*)arg1;
- (bool)_exposureAndFocusStableForSwitchOverForFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; unsigned int x15; float x16; unsigned char x17; double x18; int x19; int x20; int x21; float x22; float x23; int x24; int x25; unsigned char x26; int x27; float x28; float x29; int x30; int x31; int x32; int x33; long long x34; }*)arg1;
- (id)_preferredMasterStreamForZoomFactor:(float)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; unsigned int x15; float x16; unsigned char x17; double x18; int x19; int x20; int x21; float x22; float x23; int x24; int x25; unsigned char x26; int x27; float x28; float x29; int x30; int x31; int x32; int x33; long long x34; }*)arg2;
- (bool)_selectionBehaviorAllowsSwitchOverForFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; unsigned int x15; float x16; unsigned char x17; double x18; int x19; int x20; int x21; float x22; float x23; int x24; int x25; unsigned char x26; int x27; float x28; float x29; int x30; int x31; int x32; int x33; long long x34; }*)arg1 zoomFactor:(float)arg2;
- (void)_updateSceneChangeMonitorWithFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; unsigned int x15; float x16; unsigned char x17; double x18; int x19; int x20; int x21; float x22; float x23; int x24; int x25; unsigned char x26; int x27; float x28; float x29; int x30; int x31; int x32; int x33; long long x34; }*)arg1 fromMasterStream:(id)arg2 zoomFactor:(float)arg3;
- (bool)ignoreFocusAndExposureStability;
- (id)initWithStreamSelectionAttributes:(id)arg1 wideStream:(id)arg2 teleStream:(id)arg3;
- (void)lockWhenExposureAndFocusAreStable;
- (id)recommendMasterStreamUsingCurrentMasterStream:(id)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; unsigned int x15; float x16; unsigned char x17; double x18; int x19; int x20; int x21; float x22; float x23; int x24; int x25; unsigned char x26; int x27; float x28; float x29; int x30; int x31; int x32; int x33; long long x34; }*)arg2 zoomFactor:(float)arg3;
- (void)resetWithZoomFactor:(float)arg1 currentMasterStream:(id)arg2 teleMaxAEGain:(float)arg3;
- (int)selectionBehavior;
- (void)setIgnoreFocusAndExposureStability:(bool)arg1;
- (void)setSelectionBehavior:(int)arg1;
- (bool)telephotoLimitsReached:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; unsigned int x15; float x16; unsigned char x17; double x18; int x19; int x20; int x21; float x22; float x23; int x24; int x25; unsigned char x26; int x27; float x28; float x29; int x30; int x31; int x32; int x33; long long x34; }*)arg1;
- (void)unlock;

@end
