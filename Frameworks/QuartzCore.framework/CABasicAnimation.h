/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CABasicAnimation : CAPropertyAnimation

@property (retain) id byValue;
@property double endAngle;
@property (retain) id fromValue;
@property bool roundsToInteger;
@property double startAngle;
@property (retain) id toValue;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (void)CA_prepareRenderValue;
- (struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)_copyRenderAnimationForLayer:(id)arg1;
- (bool)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1 layer:(id)arg2;
- (double)_timeFunction:(double)arg1;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (id)byValue;
- (double)endAngle;
- (id)fromValue;
- (bool)roundsToInteger;
- (void)setByValue:(id)arg1;
- (void)setEndAngle:(double)arg1;
- (void)setFromValue:(id)arg1;
- (void)setRoundsToInteger:(bool)arg1;
- (void)setStartAngle:(double)arg1;
- (void)setToValue:(id)arg1;
- (double)startAngle;
- (id)toValue;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;

@end
