/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSetPlacementOnScreen : UIInputViewSetPlacement <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (bool)inputViewWillAppear;
- (bool)showsInputViews;
- (bool)showsKeyboard;

@end
