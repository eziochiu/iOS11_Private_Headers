/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPEndPointDetector : AVAudioEndpointDetector {
    unsigned long long  _activities;
    bool  _firstEvent;
    unsigned int  _musicDecision;
    NSMutableArray * _musicResults;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _musicStart;
    double  _sampleRate;
    NSMutableArray * _speechResults;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _speechStart;
    float  _timeScaling;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _trackStart;
    unsigned int  _utteranceDecision;
    NSMutableArray * _utteranceResults;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _utteranceStart;
}

@property (readonly) NSMutableArray *musicResults;
@property (readonly) NSMutableArray *speechResults;
@property (readonly) NSMutableArray *utteranceResults;

- (void).cxx_destruct;
- (void)addDetectionFromTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 toTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 result:(id)arg3;
- (int)finalize:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (void)handleVADEventOfType:(int)arg1 andOfCategoryNum:(unsigned int)arg2 havingTimeStamp:(double)arg3 andHavingValue:(const void*)arg4;
- (id)initWithTrackStart:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 sampleRate:(double)arg2;
- (id)musicResults;
- (id)speechResults;
- (id)utteranceResults;

@end
