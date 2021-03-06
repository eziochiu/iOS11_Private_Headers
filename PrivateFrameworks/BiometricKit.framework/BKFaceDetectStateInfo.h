/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKFaceDetectStateInfo : NSObject {
    bool  _faceDetected;
    bool  _flare;
    bool  _multipleFaces;
    bool  _occlusion;
    bool  _partiallyOutOfView;
    NSNumber * _pitch;
    NSNumber * _roll;
    bool  _tooCloseToCamera;
    bool  _tooFarFromCamera;
    NSNumber * _yaw;
}

@property (nonatomic) bool faceDetected;
@property (nonatomic) bool flare;
@property (nonatomic) bool multipleFaces;
@property (nonatomic) bool occlusion;
@property (nonatomic, readonly) bool partiallyOutOfView;
@property (nonatomic, retain) NSNumber *pitch;
@property (nonatomic, retain) NSNumber *roll;
@property (nonatomic) bool tooCloseToCamera;
@property (nonatomic) bool tooFarFromCamera;
@property (nonatomic, retain) NSNumber *yaw;

- (void).cxx_destruct;
- (id)dictionary;
- (bool)faceDetected;
- (bool)flare;
- (id)initFromDictionary:(id)arg1;
- (id)initFromFaceInfo:(const struct { unsigned short x1; float x2; float x3; float x4; }*)arg1;
- (id)initWithPresenceState:(bool)arg1;
- (bool)multipleFaces;
- (bool)occlusion;
- (bool)partiallyOutOfView;
- (id)pitch;
- (id)roll;
- (void)setFaceDetected:(bool)arg1;
- (void)setFlare:(bool)arg1;
- (void)setMultipleFaces:(bool)arg1;
- (void)setOcclusion:(bool)arg1;
- (void)setPitch:(id)arg1;
- (void)setRoll:(id)arg1;
- (void)setTooCloseToCamera:(bool)arg1;
- (void)setTooFarFromCamera:(bool)arg1;
- (void)setYaw:(id)arg1;
- (bool)tooCloseToCamera;
- (bool)tooFarFromCamera;
- (id)yaw;

@end
