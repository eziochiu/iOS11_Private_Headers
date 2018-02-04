/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelStorePlaybackItemsResponse : MPModelResponse <MPModelResponseDetailedKeepLocalStatusRequesting, MPModelStoreEquivalencyMapping> {
    bool  _finalResponse;
    NSDate * _invalidationDate;
    NSObject<OS_dispatch_source> * _invalidationTimer;
    NSDictionary * _localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
    MPStoreLibraryPersonalizationResponse * _personalizationResponse;
    MPCModelStorePlaybackItemsResponse * _updatedResponse;
}

@property (nonatomic, readonly) MPStoreLibraryPersonalizationResponse *_personalizationResponse;
@property (getter=_updatedResponse, nonatomic, readonly) MPCModelStorePlaybackItemsResponse *_updatedResponse;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinalResponse, nonatomic) bool finalResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *invalidationDate;
@property (nonatomic, copy) NSDictionary *localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_allowsExplicitContentDidChangeNotification:(id)arg1;
- (void)_invalidate;
- (void)_invalidateWithUpdatedResponse:(id)arg1;
- (id)_personalizationResponse;
- (void)_personalizationResponseDidInvalidateNotification:(id)arg1;
- (id)_updatedResponse;
- (void)dealloc;
- (id)equivalencySourceStoreAdamIDForLocalStoreAdamID:(long long)arg1;
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2;
- (id)invalidationDate;
- (bool)isFinalResponse;
- (id)localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(id /* block */)arg2;
- (void)setFinalResponse:(bool)arg1;
- (void)setInvalidationDate:(id)arg1;
- (void)setLocalStoreAdamIDToEquivalencySourceStoreAdamIDMap:(id)arg1;

@end
