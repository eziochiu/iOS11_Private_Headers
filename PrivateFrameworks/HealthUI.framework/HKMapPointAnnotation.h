/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMapPointAnnotation : MKPointAnnotation {
    bool  _isStartPoint;
}

@property (nonatomic) bool isStartPoint;

- (bool)isStartPoint;
- (void)setIsStartPoint:(bool)arg1;

@end