/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGobblerGestureRecognizer : UIGestureRecognizer {
    UIView * _excludedView;
}

- (void).cxx_destruct;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 excludedView:(id)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
