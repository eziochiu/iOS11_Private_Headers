/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INControlHomeIntent : INIntent <INControlHomeIntentExport>

@property (nonatomic, readonly, copy) INHomeAttribute *attribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *entities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (id)attribute;
- (id)domain;
- (id)entities;
- (id)initWithEntities:(id)arg1 attribute:(id)arg2;
- (id)parametersByName;
- (void)setAttribute:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setEntities:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
