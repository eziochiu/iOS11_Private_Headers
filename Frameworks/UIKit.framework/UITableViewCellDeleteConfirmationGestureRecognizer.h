/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellDeleteConfirmationGestureRecognizer : UIGestureRecognizer {
    UIView * _excludedView;
}

+ (bool)_shouldDefaultToTouches;

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 excludedView:(id)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end