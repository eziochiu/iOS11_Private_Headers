/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLModelDescription : NSObject {
    NSDictionary * _inputDescriptionsByName;
    NSDictionary * _metadata;
    NSDictionary * _outputDescriptionsByName;
    NSString * _predictedFeatureName;
    NSString * _predictedProbabilitiesName;
}

@property (nonatomic, readonly) NSDictionary *inputDescriptionsByName;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSDictionary *outputDescriptionsByName;
@property (nonatomic, readonly, copy) NSString *predictedFeatureName;
@property (nonatomic, readonly, copy) NSString *predictedProbabilitiesName;

- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)description;
- (id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 metadata:(id)arg5;
- (id)inputDescriptionsByName;
- (id)metadata;
- (id)outputDescriptionsByName;
- (id)predictedFeatureName;
- (id)predictedProbabilitiesName;

@end
