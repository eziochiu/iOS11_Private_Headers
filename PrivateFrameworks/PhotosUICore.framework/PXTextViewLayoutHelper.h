/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTextViewLayoutHelper : NSObject {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _reverseTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

- (double)_firstBaselineLocationForView:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_getFirstBaseline:(double*)arg1 lastBaseline:(double*)arg2 forView:(id)arg3 withSize:(struct CGSize { double x1; double x2; })arg4;
- (double)bottomEdgeForView:(id)arg1;
- (id)init;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)lastBaselineForView:(id)arg1;
- (double)leftEdgeForView:(id)arg1;
- (void)positionView:(id)arg1 withLeftEdge:(double)arg2 rightEdge:(double)arg3 alignment:(long long)arg4 firstBaseline:(double)arg5;
- (void)repositionView:(id)arg1 withFirstBaseline:(double)arg2;
- (void)repositionView:(id)arg1 withRightEdgeLimit:(double)arg2;
- (void)repositionView:(id)arg1 withTopAtOrBelow:(double)arg2;
- (double)rightEdgeForView:(id)arg1;

@end
