/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCoreImageFilterVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction> {
    id /* block */  _handler;
    NSArray * _requiredSourceTrackIDs;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _sourceTrackPreferredTransform;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
}

@property (nonatomic, readonly) bool containsTweening;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enablePostProcessing;
@property (nonatomic, readonly) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int passthroughTrackID;
@property (nonatomic, readonly) NSArray *requiredSourceTrackIDs;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } sourceTrackPreferredTransform;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

- (bool)containsTweening;
- (void)dealloc;
- (bool)enablePostProcessing;
- (id /* block */)handler;
- (id)init;
- (id)initWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 sourceTrackIDs:(id)arg2 handler:(id /* block */)arg3;
- (int)passthroughTrackID;
- (id)requiredSourceTrackIDs;
- (void)setSourceTrackPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })sourceTrackPreferredTransform;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end