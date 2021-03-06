/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSetTaskAttributeIntent : INIntent <INSetTaskAttributeIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INSpatialEventTrigger *spatialEventTrigger;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INTask *targetTask;
@property (nonatomic, readonly, copy) INTemporalEventTrigger *temporalEventTrigger;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithTargetTask:(id)arg1 status:(long long)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setSpatialEventTrigger:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTargetTask:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)spatialEventTrigger;
- (long long)status;
- (id)targetTask;
- (id)temporalEventTrigger;
- (id)verb;

@end
