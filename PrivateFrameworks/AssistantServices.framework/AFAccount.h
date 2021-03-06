/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAccount : NSObject {
    NSString * _aceHost;
    NSString * _assistantIdentifier;
    NSDictionary * _connectionPolicy;
    NSDate * _connectionPolicyDate;
    NSString * _connectionPolicyHostname;
    NSString * _group;
    NSString * _hostname;
    NSString * _identifier;
    bool  _isActive;
    NSString * _label;
    NSDictionary * _lastSyncDates;
    NSString * _localeIdentifier;
    NSString * _predefinedServer;
    NSString * _speechIdentifier;
}

@property (nonatomic, copy) NSString *aceHost;
@property (nonatomic, copy) NSString *assistantIdentifier;
@property (nonatomic, copy) NSDictionary *connectionPolicy;
@property (nonatomic, copy) NSDate *connectionPolicyDate;
@property (nonatomic, copy) NSString *connectionPolicyHostname;
@property (nonatomic, copy) NSString *group;
@property (nonatomic, copy) NSString *hostname;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSDictionary *lastSyncDates;
@property (nonatomic, copy) NSString *localeIdentifier;
@property (nonatomic, copy) NSString *predefinedServer;
@property (nonatomic, copy) NSString *speechIdentifier;

- (void).cxx_destruct;
- (id)aceHost;
- (id)assistantIdentifier;
- (id)connectionPolicy;
- (id)connectionPolicyDate;
- (id)connectionPolicyHostname;
- (id)description;
- (id)group;
- (id)hostname;
- (id)identifier;
- (id)initWithMessageDictionary:(id)arg1;
- (bool)isActive;
- (id)label;
- (id)lastSyncDates;
- (id)localeIdentifier;
- (id)messageDictionary;
- (id)predefinedServer;
- (void)setAceHost:(id)arg1;
- (void)setAssistantIdentifier:(id)arg1;
- (void)setConnectionPolicy:(id)arg1;
- (void)setConnectionPolicyDate:(id)arg1;
- (void)setConnectionPolicyHostname:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLastSyncDates:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setPredefinedServer:(id)arg1;
- (void)setSpeechIdentifier:(id)arg1;
- (id)speechIdentifier;

@end
