/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPresentationControllerRootViewController : UIViewController {
    bool  _allowsRotation;
}

@property (nonatomic) bool allowsRotation;

- (bool)allowsRotation;
- (void)setAllowsRotation:(bool)arg1;
- (bool)shouldAutorotate;

@end