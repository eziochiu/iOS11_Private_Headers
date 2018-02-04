/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardDockView : UIView {
    <UIKeyboardDockViewDelegate> * _delegate;
    UIKeyboardDockItem * _leftDockItem;
    UIKeyboardDockItem * _rightDockItem;
}

@property (nonatomic) <UIKeyboardDockViewDelegate> *delegate;
@property (nonatomic, retain) UIKeyboardDockItem *leftDockItem;
@property (nonatomic, retain) UIKeyboardDockItem *rightDockItem;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (void)_configureDockItem:(id)arg1;
- (void)_dockItemButtonWasTapped:(id)arg1 withEvent:(id)arg2;
- (id)_dockItemWithButton:(id)arg1;
- (id)delegate;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)leftDockItem;
- (id)rightDockItem;
- (void)setDelegate:(id)arg1;
- (void)setLeftDockItem:(id)arg1;
- (void)setRightDockItem:(id)arg1;

// Image: /bootstrap/Library/SBInject/LittleX.dylib

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)fakeBounds;
- (void)layoutSubviews;
- (void)setFakeBounds:(bool)arg1;

@end
