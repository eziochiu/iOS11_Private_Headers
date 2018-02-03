/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusFastScrollingTest : _UIFocusTest {
    unsigned long long  _currentScroll;
    double  _delayBetweenScrolls;
    NSTimer * _delayTimer;
    unsigned long long  _numberOfScrollsToPerform;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalContentOffset;
    <UIFocusItem> * _originalFocusedItem;
    double  _peakScrollVelocity;
    UIScrollView * _scrollView;
}

@property (nonatomic) double delayBetweenScrolls;
@property (nonatomic) unsigned long long numberOfScrollsToPerform;
@property (nonatomic) double peakScrollVelocity;
@property (nonatomic, retain) UIScrollView *scrollView;

- (void).cxx_destruct;
- (void)_performFocusFastScrolling;
- (void)cancel;
- (double)delayBetweenScrolls;
- (id)initWithIdentifier:(id)arg1;
- (void)main;
- (unsigned long long)numberOfScrollsToPerform;
- (double)peakScrollVelocity;
- (void)prepareWithCompletionHandler:(id /* block */)arg1;
- (void)reset;
- (id)scrollView;
- (void)setDelayBetweenScrolls:(double)arg1;
- (void)setNumberOfScrollsToPerform:(unsigned long long)arg1;
- (void)setPeakScrollVelocity:(double)arg1;
- (void)setScrollView:(id)arg1;

@end