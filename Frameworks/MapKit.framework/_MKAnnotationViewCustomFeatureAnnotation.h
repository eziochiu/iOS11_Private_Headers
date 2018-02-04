/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKAnnotationViewCustomFeatureAnnotation : NSObject <VKCustomFeatureAnnotation> {
    MKAnnotationView * _annotationView;
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    VKCustomFeature * _customFeature;
}

@property (nonatomic) MKAnnotationView *annotationView;
@property (nonatomic) struct { double x1; double x2; } coordinate;
@property (nonatomic) double course;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) VKCustomFeature *feature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)annotationView;
- (struct { double x1; double x2; })coordinate;
- (id)feature;
- (void)setAnnotationView:(id)arg1;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;

@end