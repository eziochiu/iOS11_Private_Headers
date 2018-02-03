/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageCaptureSettings : NSObject {
    unsigned long long  _captureFlags;
    NSArray * _captureStreamSettings;
    int  _captureType;
    bool  _deliverOriginalImage;
    bool  _deliverProcessedImage;
    bool  _deliverSushiRaw;
    long long  _settingsID;
    int  _tempExpectedClientImageCount;
    int  _timeMachineReferenceFrameBracketedCaptureSequenceNumber;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _zeroShutterLagPTS;
    bool  _zeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled;
}

@property (nonatomic, readonly) int bracketedCaptureSequenceNumberForOISLongExposure;
@property (nonatomic, readonly) unsigned long long captureFlags;
@property (nonatomic, readonly) NSArray *captureStreamSettings;
@property (nonatomic, readonly) int captureType;
@property (nonatomic, readonly) bool deliverOriginalImage;
@property (nonatomic, readonly) bool deliverProcessedImage;
@property (nonatomic, readonly) bool deliverSushiRaw;
@property (nonatomic, readonly) bool expectReferenceFrameBracketedCaptureSequenceNumber;
@property (nonatomic) int expectedClientImageCount;
@property (nonatomic, readonly) long long settingsID;
@property (nonatomic) int timeMachineReferenceFrameBracketedCaptureSequenceNumber;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } zeroShutterLagPTS;
@property (nonatomic) bool zeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled;

- (int)bracketedCaptureSequenceNumberForOISLongExposure;
- (unsigned long long)captureFlags;
- (id)captureStreamSettings;
- (id)captureStreamSettingsForPortType:(id)arg1;
- (int)captureType;
- (void)dealloc;
- (bool)deliverOriginalImage;
- (bool)deliverProcessedImage;
- (bool)deliverSushiRaw;
- (id)description;
- (bool)expectReferenceFrameBracketedCaptureSequenceNumber;
- (int)expectedClientImageCount;
- (id)initWithSettingsID:(long long)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 deliverProcessedImage:(bool)arg4 deliverOriginalImage:(bool)arg5 deliverSushiRaw:(bool)arg6 captureStreamSettings:(id)arg7;
- (void)setExpectedClientImageCount:(int)arg1;
- (void)setTimeMachineReferenceFrameBracketedCaptureSequenceNumber:(int)arg1;
- (void)setZeroShutterLagPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setZeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled:(bool)arg1;
- (long long)settingsID;
- (int)timeMachineReferenceFrameBracketedCaptureSequenceNumber;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })zeroShutterLagPTS;
- (bool)zeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled;

@end
