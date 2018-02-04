/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest <MPCModelPlaybackRequestEnvironmentConsuming, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring, MPModelRequestDetailedKeepLocalStatusRequesting> {
    bool  _allowLocalEquivalencies;
    bool  _allowsMultipleResponseHandlerCalls;
    NSString * _clientIdentifier;
    MPCPlaybackRequestEnvironment * _playbackRequestEnvironment;
    MPModelResponse * _previousResponse;
    MPSectionedCollection * _sectionedModelObjects;
    NSArray * _storeIDs;
    bool  _wantsDetailedKeepLocalRequestableResponse;
}

@property (nonatomic) bool allowLocalEquivalencies;
@property (nonatomic) bool allowsMultipleResponseHandlerCalls;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (nonatomic, retain) MPModelResponse *previousResponse;
@property (nonatomic, readonly, copy) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (nonatomic, copy) MPSectionedCollection *sectionedModelObjects;
@property (nonatomic, copy) NSArray *storeIDs;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsDetailedKeepLocalRequestableResponse;

- (void).cxx_destruct;
- (bool)allowLocalEquivalencies;
- (bool)allowsMultipleResponseHandlerCalls;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)playbackRequestEnvironment;
- (id)previousResponse;
- (id)rtcReportingPlayQueueSourceIdentifier;
- (id)sectionedModelObjects;
- (void)setAllowLocalEquivalencies:(bool)arg1;
- (void)setAllowsMultipleResponseHandlerCalls:(bool)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setPlaybackRequestEnvironment:(id)arg1;
- (void)setPreviousResponse:(id)arg1;
- (void)setSectionedModelObjects:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setWantsDetailedKeepLocalRequestableResponse:(bool)arg1;
- (id)storeIDs;
- (bool)wantsDetailedKeepLocalRequestableResponse;

@end
