/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityAggregateElement : UIAccessibilityElement {
    NSArray * _representedElements;
}

@property (nonatomic, retain) NSArray *representedElements;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (void)addRepresentedObject:(id)arg1;
- (id)initWithAccessibilityContainer:(id)arg1;
- (id)initWithAccessibilityContainer:(id)arg1 representedElements:(id)arg2;
- (id)representedElements;
- (void)setRepresentedElements:(id)arg1;

@end