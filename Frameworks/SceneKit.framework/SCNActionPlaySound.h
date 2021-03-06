/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionPlaySound : SCNAction {
    /* Warning: unhandled struct encoding: '{SCNCPlaySound=^^?f@?@BdddddBB@?^{__CFString}qddddBB@}' */ struct SCNCPlaySound { int (**x1)(); float x2; id /* block */ x3; id x4; double x5; double x6; double x7; double x8; double x9; bool x10; bool x11; id /* block */ x12; struct __CFString {} *x13; long long x14; double x15; double x16; double x17; double x18; bool x19; bool x20; id x21; } * _mycaction;
}

+ (id)playAudioSource:(id)arg1 waitForCompletion:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void)_setupDuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)parameters;
- (id)reversedAction;

@end
