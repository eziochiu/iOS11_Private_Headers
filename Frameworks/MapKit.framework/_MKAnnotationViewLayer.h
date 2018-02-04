/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKAnnotationViewLayer : CALayer {
    MKAnnotationView * _annotationView;
}

@property (nonatomic) MKAnnotationView *annotationView;

- (void).cxx_destruct;
- (id)annotationView;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)setAnnotationView:(id)arg1;

@end
