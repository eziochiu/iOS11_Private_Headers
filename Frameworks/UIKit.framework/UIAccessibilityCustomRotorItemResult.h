/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAccessibilityCustomRotorItemResult : NSObject {
    <NSObject> * _targetElement;
    UITextRange * _targetRange;
    NSUUID * uuid;
}

@property (nonatomic) <NSObject> *targetElement;
@property (nonatomic, retain) UITextRange *targetRange;
@property (nonatomic, retain) NSUUID *uuid;

- (void).cxx_destruct;
- (id)initWithTargetElement:(id)arg1 targetRange:(id)arg2;
- (void)setTargetElement:(id)arg1;
- (void)setTargetRange:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)targetElement;
- (id)targetRange;
- (id)uuid;

@end
