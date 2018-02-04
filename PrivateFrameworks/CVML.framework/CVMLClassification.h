/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLClassification : CVMLObservation {
    NSString * _classification;
    float  _confidence;
}

@property (readonly) NSString *classification;

- (void).cxx_destruct;
- (id)classification;
- (float)confidence;
- (id)debugDescription;
- (void)setClassification:(id)arg1 withConfidence:(float)arg2;
- (void)setConfidence:(float)arg1;

@end
