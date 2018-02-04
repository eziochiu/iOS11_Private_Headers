/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentExposureTracking : NSObject {
    SXComponentView * _componentView;
    id /* block */  _exposureBlock;
    double  _maximumVisibleY;
    double  _minimumVisibleY;
    double  _visibilityFactor;
}

@property (nonatomic, readonly) SXComponentView *componentView;
@property (nonatomic, readonly, copy) id /* block */ exposureBlock;
@property (nonatomic) double maximumVisibleY;
@property (nonatomic) double minimumVisibleY;
@property (nonatomic, readonly) double visibilityFactor;

+ (id)exposureTrackingWithComponent:(id)arg1 block:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)calculateVisibilityFactor;
- (id)componentView;
- (id /* block */)exposureBlock;
- (id)initWithComponent:(id)arg1 block:(id /* block */)arg2;
- (double)maximumVisibleY;
- (double)minimumVisibleY;
- (void)setMaximumVisibleY:(double)arg1;
- (void)setMinimumVisibleY:(double)arg1;
- (double)visibilityFactor;

@end
