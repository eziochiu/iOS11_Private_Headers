/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTextComponentView : SXComponentView <SXTextViewDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _calculatedSize;
    SXTextComponentView * _nextTextComponentView;
    SXTextComponentView * _previousTextComponentView;
    SXTextView * _textView;
}

@property (nonatomic) struct CGSize { double x1; double x2; } calculatedSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SXTextComponentView *nextTextComponentView;
@property (nonatomic) SXTextComponentView *previousTextComponentView;
@property (readonly) Class superclass;
@property (nonatomic, retain) SXTextView *textView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })absoluteTextViewFrame;
- (id)accessibilityContextualLabelForTextView:(id)arg1;
- (id)accessibilityCustomRotorMembershipForTextView:(id)arg1;
- (void)animationDidFinish:(id)arg1;
- (void)animationDidStart:(id)arg1;
- (void)applyAddition:(id)arg1;
- (struct CGSize { double x1; double x2; })calculatedSize;
- (id)componentIdentifierForTextView:(id)arg1;
- (void)didApplyBehavior:(id)arg1;
- (void)didMoveToWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)gestureShouldBegin:(id)arg1;
- (id)nextTextComponentView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)presentComponent;
- (id)previousTextComponentView;
- (void)provideInfosLayoutTo:(id)arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)setAbsoluteFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCalculatedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNextTextComponentView:(id)arg1;
- (void)setPresentationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreviousTextComponentView:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setupTextView;
- (id)textRulesForTextView:(id)arg1;
- (id)textSource;
- (id)textView;

@end
