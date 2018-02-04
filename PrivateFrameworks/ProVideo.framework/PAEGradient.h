/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEGradient : PAEGeneratorDefaultBase {
    int  _currentMethod;
}

- (bool)addGradientPositionedWithName:(id)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (bool)addParameters;
- (bool)canThrowRenderOutput:(id)arg1 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg2;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 hardware:(bool*)arg2 software:(bool*)arg3;
- (bool)getGradientStartEnd:(double*)arg1 startY:(double*)arg2 endX:(double*)arg3 endY:(double*)arg4 type:(int*)arg5 fromParm:(unsigned int)arg6 atTime:(union { double x1; struct { /* ? */ } *x2; })arg7;
- (bool)initPAEGradientWithHeight:(id)arg1;
- (id)initWithAPIManager:(id)arg1;
- (bool)parameterChanged:(unsigned int)arg1;
- (id)properties;
- (bool)setGradientStartEnd:(double)arg1 startY:(double)arg2 endX:(double)arg3 endY:(double)arg4 toParm:(unsigned int)arg5 atTime:(union { double x1; struct { /* ? */ } *x2; })arg6;

@end