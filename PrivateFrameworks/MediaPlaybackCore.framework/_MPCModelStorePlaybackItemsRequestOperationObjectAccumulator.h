/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCModelStorePlaybackItemsRequestOperationObjectAccumulator : NSObject {
    bool  _allowsExplicitContent;
    NSMapTable * _baseContentItemIDToOccurrenceCount;
    long long  _defaultPersonalizationStyle;
    NSMutableDictionary * _equivalencyMapping;
    MPStoreModelGenericObjectBuilder * _genericObjectBuilder;
    bool  _looseItemNeedsSection;
    long long  _unknownEndpointPersonalizationStyle;
    MPMutableSectionedCollection * _unpersonalizedContentDescriptors;
}

@property (nonatomic, readonly) bool allowsExplicitContent;
@property (nonatomic, readonly) NSDictionary *equivalencyMapping;
@property (nonatomic, readonly) MPSectionedCollection *unpersonalizedContentDescriptors;

- (void).cxx_destruct;
- (void)_addAnonymousContainerSection;
- (void)_addEquivalencyForMetadata:(id)arg1 requestStoreIdentifier:(id)arg2;
- (void)_addItemsForChildrenOfMetadata:(id)arg1;
- (struct MPModelStorePlaybackItemEligibility { bool x1; long long x2; })_eligibilityForItem:(id)arg1;
- (id)_modelObjectWithStoreItemMetadata:(id)arg1;
- (bool)allowsExplicitContent;
- (void)appendEmptySectionForMetadata:(id)arg1 requestStoreIdentifier:(id)arg2;
- (void)appendMetadata:(id)arg1 requestStoreIdentifier:(id)arg2;
- (void)appendMetadataResponse:(id)arg1 forRequestSectionedModelObjects:(id)arg2;
- (void)appendMetadataResponse:(id)arg1 forRequestStoreIdentifiers:(id)arg2;
- (id)equivalencyMapping;
- (id)initWithRequest:(id)arg1 shouldLibraryPersonalize:(bool)arg2 allowsExplicitContent:(bool)arg3;
- (id)unpersonalizedContentDescriptors;

@end
