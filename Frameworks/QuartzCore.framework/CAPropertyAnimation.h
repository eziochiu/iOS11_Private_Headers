/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAPropertyAnimation : CAAnimation

@property (getter=isAdditive) bool additive;
@property (getter=isCumulative) bool cumulative;
@property (copy) NSString *keyPath;
@property (retain) CAValueFunction *valueFunction;

+ (id)animationWithKeyPath:(id)arg1;

- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (bool)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1 layer:(id)arg2;
- (bool)additive;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (bool)cumulative;
- (bool)isAdditive;
- (bool)isCumulative;
- (id)keyPath;
- (void)setAdditive:(bool)arg1;
- (void)setCumulative:(bool)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setValueFunction:(id)arg1;
- (id)valueFunction;

@end
