/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFGetSettingsRequest : AFSiriRequest {
    NSArray * _settings;
}

@property (nonatomic, copy) NSArray *settings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
