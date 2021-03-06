/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNCoreMLFeatureValueObservation : VNObservation {
    MLFeatureValue * _featureValue;
}

@property (nonatomic, readonly, copy) MLFeatureValue *featureValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)featureValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureValue:(id)arg1;

@end
