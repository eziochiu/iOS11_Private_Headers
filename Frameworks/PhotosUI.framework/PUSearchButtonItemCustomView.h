/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchButtonItemCustomView : UIView {
    UINavigationBar * _navigationBar;
    bool  _nudgesSearchIcon;
}

@property (nonatomic) UINavigationBar *navigationBar;
@property (nonatomic) bool nudgesSearchIcon;

- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)navigationBar;
- (bool)nudgesSearchIcon;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setNavigationBar:(id)arg1;
- (void)setNudgesSearchIcon:(bool)arg1;

@end
