/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageSpace : NSObject <NSCopying> {
    struct NSArray { Class x1; } * _transformStack;
}

@property (retain) NSArray *transformStack;

- (void).cxx_destruct;
- (void)appendTransform:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTransformStack:(struct NSArray { Class x1; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSpace:(id)arg1;
- (void)setTransformStack:(struct NSArray { Class x1; }*)arg1;
- (struct CGPoint { double x1; double x2; })transformPoint:(struct CGPoint { double x1; double x2; })arg1 toSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })transformPointBackward:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })transformPointForward:(struct CGPoint { double x1; double x2; })arg1;
- (struct NSArray { Class x1; }*)transformStack;

@end
