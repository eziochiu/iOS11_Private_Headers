/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimeOffsetManager : NSObject {
    double  _timeOffset;
}

@property (nonatomic) double timeOffset;

+ (id)sharedManager;

- (void)_handleFaceDefaultsChanged;
- (void)_handleFaceLibraryReloaded;
- (void)_loadTimeOffset;
- (void)_updateTimeOffset:(bool)arg1;
- (void)dealloc;
- (id)displayTimeForRealTime:(id)arg1;
- (id)faceDisplayTime;
- (id)init;
- (void)setTimeOffset:(double)arg1;
- (double)timeOffset;

@end