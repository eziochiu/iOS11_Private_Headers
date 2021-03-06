/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface FFTMeter : NSObject {
    float  adjust0DB;
    struct DSPSplitComplex { 
        float *realp; 
        float *imagp; 
    }  dspSplitComplex;
    float  fftBuffer;
    float  fftNormFactor;
    struct vDSP_DFT_SetupStruct { } * fftSetup;
    float  lerpIdxs;
    float  magnitudeBuffer;
    float  octaveDb;
    float  octaveDbFilt;
    float  octaveDbOld;
    float  sampleHistory;
    float  windowBuffer;
    float  windowHistory;
}

- (id)computeWithSampleBuffer:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)dealloc;
- (id)init;

@end
