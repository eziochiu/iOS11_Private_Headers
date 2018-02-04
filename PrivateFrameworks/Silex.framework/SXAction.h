/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAction : NSObject {
    SXAddition * _addition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
    bool  _touchAndHold;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchPoint;
}

@property (nonatomic, readonly) SXAddition *addition;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic) UIView *sourceView;
@property (nonatomic) bool touchAndHold;
@property (nonatomic) struct CGPoint { double x1; double x2; } touchPoint;

- (void).cxx_destruct;
- (id)addition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)handlerClass;
- (id)init;
- (id)initWithAddition:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setTouchAndHold:(bool)arg1;
- (void)setTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (bool)touchAndHold;
- (struct CGPoint { double x1; double x2; })touchPoint;
- (void)triggerOnView:(id)arg1;
- (void)triggerOnView:(id)arg1 touchPoint:(struct CGPoint { double x1; double x2; })arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 touchAndHold:(bool)arg4;

@end
