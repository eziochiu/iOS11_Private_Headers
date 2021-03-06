/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKView : UIView <TLKObservable> {
    UIView * _containerView;
    unsigned long long  _style;
    TLKObserver * _viewObserver;
}

@property (retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (retain) TLKObserver *viewObserver;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultInsets;
+ (Class)layerClass;

- (void).cxx_destruct;
- (id)containerView;
- (void)dealloc;
- (void)disableUnbatchedUpdates;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)observableProperties;
- (void)observedPropertiesChanged;
- (void)performBatchUpdates:(id /* block */)arg1;
- (void)setContainer:(id)arg1 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)setContainerView:(id)arg1;
- (void)setContainerWithDefaultInsets:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setViewObserver:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (void)styleDidChange:(unsigned long long)arg1;
- (bool)supportsAsynchronousMeasurement;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)viewObserver;

@end
