/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionFade : SCNAction {
    struct SCNCActionFade { int (**x1)(); float x2; id /* block */ x3; id x4; double x5; double x6; double x7; double x8; double x9; bool x10; bool x11; id /* block */ x12; struct __CFString {} *x13; long long x14; double x15; double x16; double x17; double x18; float x19; float x20; float x21; bool x22; } * _mycaction;
}

+ (id)fadeInWithDuration:(double)arg1;
+ (id)fadeOpacityBy:(double)arg1 duration:(double)arg2;
+ (id)fadeOpacityTo:(double)arg1 duration:(double)arg2;
+ (id)fadeOutWithDuration:(double)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)parameters;
- (id)reversedAction;

@end
