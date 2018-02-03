/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCPayload : NSObject {
    NSString * _UUID;
    NSString * _displayName;
    NSString * _identifier;
    bool  _mustInstallNonInteractively;
    NSString * _organization;
    NSString * _payloadDescription;
    NSString * _persistentResourceID;
    MCProfile * _profile;
    NSString * _type;
    long long  _version;
}

@property (nonatomic, readonly, retain) NSString *UUID;
@property (nonatomic, readonly) bool containsSensitiveUserInformation;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly, retain) NSString *friendlyName;
@property (nonatomic, readonly, retain) NSString *identifier;
@property (nonatomic, readonly, retain) NSArray *installationWarnings;
@property (nonatomic) bool mustInstallNonInteractively;
@property (nonatomic, readonly, retain) NSString *organization;
@property (nonatomic, readonly, retain) NSString *payloadDescription;
@property (nonatomic, retain) NSString *persistentResourceID;
@property (nonatomic, readonly) MCProfile *profile;
@property (nonatomic, readonly) NSDictionary *restrictions;
@property (nonatomic, readonly, retain) NSString *type;
@property (nonatomic, readonly) long long version;

+ (id)applicablePayloadsForHomePod;
+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (id)badFieldValueErrorWithField:(id)arg1;
+ (id)badFieldValueErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)cellularRequiredPayloads;
+ (id)conflictingFieldValueErrorWithUnderlyingError:(id)arg1;
+ (id)localizedDescriptionForPayloadCount:(unsigned long long)arg1;
+ (id)localizedParenthesizedFormDescriptionForPayloadCount:(unsigned long long)arg1;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)mdmAdoptablePayloads;
+ (id)minimumWatchVersionRequirementsForPayloads;
+ (id)missingFieldErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)payloadFromDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
+ (id)payloadsFromArray:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
+ (id)supervisedRequiredPayloads;
+ (id)typeStrings;
+ (id)unavailablePayloadsInEphemeralMultiUser;
+ (id)unavailableSystemPayloadsInEphemeralMultiUser;
+ (id)unavailableUserPayloadsInEphemeralMultiUser;
+ (id)wrapperPayloadDictionary;

- (void).cxx_destruct;
- (id)UUID;
- (bool)containsSensitiveUserInformation;
- (id)description;
- (id)displayName;
- (id)friendlyName;
- (id)identifier;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)malformedPayloadErrorWithError:(id)arg1;
- (bool)mustInstallNonInteractively;
- (id)organization;
- (id)payloadDescription;
- (id)payloadDescriptionKeyValueSections;
- (id)persistentResourceID;
- (id)profile;
- (id)restrictions;
- (void)setDisplayName:(id)arg1;
- (void)setMustInstallNonInteractively:(bool)arg1;
- (void)setPersistentResourceID:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;
- (id)type;
- (long long)version;

@end