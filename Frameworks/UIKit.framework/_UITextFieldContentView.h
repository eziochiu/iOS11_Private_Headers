/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextFieldContentView : UIView <_UITextTiledLayerDelegate> {
    <_UITextFieldContentViewContext> * _context;
    NSMutableSet * _ghostedRanges;
    NSArray * _maskedRects;
}

@property (nonatomic, readonly) <_UITextFieldContentViewContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_textTiledLayer:(id)arg1 maskedRectsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)addGhostedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)context;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithContentContext:(id)arg1;
- (id)layer;
- (void)removeAllGhostedRanges;
- (void)setNeedsLayout;

@end
