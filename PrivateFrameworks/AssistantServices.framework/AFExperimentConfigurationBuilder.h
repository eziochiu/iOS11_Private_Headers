/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFExperimentConfigurationBuilder : NSObject {
    AFExperimentConfiguration * _baseObject;
    struct _builderFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasType : 1; 
        unsigned int hasIdentifier : 1; 
        unsigned int hasVersion : 1; 
        unsigned int hasControlGroup : 1; 
        unsigned int hasExperimentGroups : 1; 
        unsigned int hasSalt : 1; 
    }  _builderFlags;
    AFExperimentGroup * _controlGroup;
    NSArray * _experimentGroups;
    NSString * _identifier;
    NSString * _salt;
    long long  _type;
    NSString * _version;
}

- (void).cxx_destruct;
- (id)build;
- (id)init;
- (id)initWithBaseObject:(id)arg1;
- (id)setControlGroup:(id)arg1;
- (id)setExperimentGroups:(id)arg1;
- (id)setIdentifier:(id)arg1;
- (id)setSalt:(id)arg1;
- (id)setType:(long long)arg1;
- (id)setVersion:(id)arg1;

@end
