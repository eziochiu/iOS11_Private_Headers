/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVRenderRequest : NSObject {
    NSArray * _outputNodes;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (nonatomic, readonly) NSArray *outputNodes;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } outputSize;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void).cxx_destruct;
- (id)initWithOutputs:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (id)outputNodes;
- (struct CGSize { double x1; double x2; })outputSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
