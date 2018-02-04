/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDKnob : NSObject {
    CAShapeLayer * mHitRegionLayer;
    TSDBezierPath * mHitRegionPath;
    CALayer * mLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  mOffset;
    bool  mOffsetValid;
    struct CGPoint { 
        double x; 
        double y; 
    }  mPosition;
    double  mRadius;
    TSDRep * mRep;
    bool  mShouldDisplayDirectlyOverRep;
    unsigned long long  mTag;
    int  mType;
    bool  mWorksWhenInVersionBrowsingMode;
    bool  mWorksWhenRepLocked;
}

@property (nonatomic, copy) TSDBezierPath *hitRegionPath;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic) bool offsetValid;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic) double radius;
@property (nonatomic, readonly) TSDRep *rep;
@property (nonatomic) bool shouldDisplayDirectlyOverRep;
@property (nonatomic) unsigned long long tag;
@property (nonatomic) int type;
@property (nonatomic) bool worksWhenInVersionBrowsingMode;
@property (nonatomic) bool worksWhenRepLocked;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxOfHitRegionForRep:(id)arg1 scale:(double)arg2;
- (void)dealloc;
- (id)description;
- (int)dragType;
- (id)hitRegionLayerForRep:(id)arg1;
- (id)hitRegionPath;
- (double)i_rotationInDegreesForKnobOnRep:(id)arg1;
- (id)init;
- (id)initWithType:(int)arg1 position:(struct CGPoint { double x1; double x2; })arg2 radius:(double)arg3 tag:(unsigned long long)arg4 onRep:(id)arg5;
- (bool)isHitByUnscaledPoint:(struct CGPoint { double x1; double x2; })arg1 andRep:(id)arg2;
- (bool)isHitByUnscaledPoint:(struct CGPoint { double x1; double x2; })arg1 andRep:(id)arg2 returningDistance:(double*)arg3;
- (id)knobImage;
- (id)layer;
- (bool)obscuresKnob:(id)arg1;
- (struct CGPoint { double x1; double x2; })offset;
- (bool)offsetValid;
- (bool)overlapsWithKnob:(id)arg1;
- (struct CGPoint { double x1; double x2; })position;
- (double)radius;
- (id)rep;
- (void)setHitRegionPath:(id)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOffsetValid:(bool)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRadius:(double)arg1;
- (void)setShouldDisplayDirectlyOverRep:(bool)arg1;
- (void)setTag:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (void)setWorksWhenInVersionBrowsingMode:(bool)arg1;
- (void)setWorksWhenRepLocked:(bool)arg1;
- (bool)shouldDisplayDirectlyOverRep;
- (unsigned long long)tag;
- (int)type;
- (void)updateHitRegionPathForRep:(id)arg1;
- (bool)worksWhenInVersionBrowsingMode;
- (bool)worksWhenRepLocked;

@end