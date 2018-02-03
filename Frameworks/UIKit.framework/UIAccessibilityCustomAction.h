/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAccessibilityCustomAction : NSObject {
    NSAttributedString * _attributedName;
    SEL  _selector;
    id  _target;
}

@property (nonatomic, copy) NSAttributedString *attributedName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) SEL selector;
@property (nonatomic) id target;

- (void).cxx_destruct;
- (id)attributedName;
- (id)init;
- (id)initWithAttributedName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)name;
- (SEL)selector;
- (void)setAttributedName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
