/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFExperimentBuilder : NSObject {
    AFExperiment * _baseObject;
    struct _builderFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasConfigurationIdentifier : 1; 
        unsigned int hasConfigurationVersion : 1; 
        unsigned int hasDeploymentGroupIdentifier : 1; 
        unsigned int hasDeploymentGroupProperties : 1; 
        unsigned int hasDeploymentReason : 1; 
    }  _builderFlags;
    NSString * _configurationIdentifier;
    NSString * _configurationVersion;
    NSString * _deploymentGroupIdentifier;
    NSDictionary * _deploymentGroupProperties;
    long long  _deploymentReason;
}

- (void).cxx_destruct;
- (id)build;
- (id)init;
- (id)initWithBaseObject:(id)arg1;
- (id)setConfigurationIdentifier:(id)arg1;
- (id)setConfigurationVersion:(id)arg1;
- (id)setDeploymentGroupIdentifier:(id)arg1;
- (id)setDeploymentGroupProperties:(id)arg1;
- (id)setDeploymentReason:(long long)arg1;

@end
