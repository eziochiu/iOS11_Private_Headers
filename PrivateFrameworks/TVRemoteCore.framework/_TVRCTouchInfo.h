/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCTouchInfo : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialProportionalLocation;
    bool  _isLikelyLongListScrollingEdgeGesture;
    bool  _pendingCancellation;
    double  _previousTimestamp;
    double  _timestamp;
    long long  _virtualPhase;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialLocation;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialProportionalLocation;
@property (nonatomic) bool isLikelyLongListScrollingEdgeGesture;
@property (nonatomic) bool pendingCancellation;
@property (nonatomic) double previousTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) long long virtualPhase;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)description;
- (struct CGPoint { double x1; double x2; })initialLocation;
- (struct CGPoint { double x1; double x2; })initialProportionalLocation;
- (bool)isLikelyLongListScrollingEdgeGesture;
- (bool)pendingCancellation;
- (double)previousTimestamp;
- (void)setBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInitialLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialProportionalLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setIsLikelyLongListScrollingEdgeGesture:(bool)arg1;
- (void)setPendingCancellation:(bool)arg1;
- (void)setPreviousTimestamp:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVirtualPhase:(long long)arg1;
- (double)timestamp;
- (long long)virtualPhase;

@end