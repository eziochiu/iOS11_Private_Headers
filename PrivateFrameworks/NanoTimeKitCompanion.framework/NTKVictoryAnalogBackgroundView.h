/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVictoryAnalogBackgroundView : UIView {
    NSArray * _activeDigitIndices;
    NSArray * _bigNumberLayers;
    bool  _canonicalDigitStatesByStyle;
    unsigned long long  _color;
    <NTKVictoryAnalogBackgroundViewDelegate> * _delegate;
    UIImage * _dotImage;
    NSMutableDictionary * _largeNumberImages;
    NTKVictoryAnalogFakeComplicationButton * _logoButton;
    CALayer * _logoLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _logoPositionBig;
    struct CGPoint { 
        double x; 
        double y; 
    }  _logoPositionNoDigits;
    struct CGPoint { 
        double x; 
        double y; 
    }  _logoPositionRing;
    NSMutableDictionary * _regularNumberImages;
    bool  _ringLayerIsDigit;
    NSArray * _ringLayers;
    unsigned long long  _style;
    NSArray * _transitionDigitIndices;
    NSDictionary * _transitionDigitTargetStates;
    unsigned long long  _transitionFromStyle;
    NSArray * _transitionStaticDigitIndices;
    CAMediaTimingFunction * _transitionTimingFunction;
    unsigned long long  _transitionToStyle;
}

@property (nonatomic) unsigned long long color;
@property (nonatomic) <NTKVictoryAnalogBackgroundViewDelegate> *delegate;
@property (nonatomic) unsigned long long style;

+ (id)_disabledLayerActions;

- (void).cxx_destruct;
- (void)_applyColorForStyle:(unsigned long long)arg1;
- (id)_bigNumberInitialTransforms;
- (void)_clearTransitionStateForStyle:(unsigned long long)arg1;
- (id)_createAndAddLayersWithCount:(unsigned long long)arg1;
- (void)_createBigNumberLayersIfNeeded;
- (void)_createRingLayersIfNeeded;
- (double)_dotAlphaForColor:(unsigned long long)arg1 style:(unsigned long long)arg2;
- (id)_dotImage;
- (double)_elementScaleForTransitionProgress:(double)arg1 initialScale:(double)arg2 middleScale:(double)arg3 finalScale:(double)arg4;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_intermediateTransformForBigNumberAtIndex:(unsigned long long)arg1 fraction:(double)arg2;
- (id)_largeNumberImageForNumber:(unsigned long long)arg1;
- (struct CGColor { }*)_layerTransitionColorFromColor:(id)arg1 toColor:(id)arg2 amount:(double)arg3;
- (id)_logoImage;
- (void)_logoTapped;
- (id)_regularNumberImageForNumber:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })_ringDigitOffsetAtIndex:(unsigned long long)arg1;
- (void)_setRingLayerAtIndex:(unsigned long long)arg1 isDigit:(bool)arg2;
- (double)_transitionProgressForDigitAtIndex:(unsigned long long)arg1 overallProgress:(double)arg2 delayPerDigit:(double)arg3 digitTransitionLength:(double)arg4;
- (void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (unsigned long long)color;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setColor:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInTimeTravel:(bool)arg1 animated:(bool)arg2;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;
- (void)willBeginEditing;

@end
