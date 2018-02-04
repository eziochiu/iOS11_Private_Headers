/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKAvalancheCaptureService : CMKCaptureService {
    CMKAvalancheSession * __activeAvalancheSession;
    NSMutableDictionary * __avalancheSessionsByUUID;
    NSMutableSet * __avalancheSessionsToBeFinalizedAfterNextResponseCompletion;
    double  __avalancheStartTime;
    NSCountedSet * __inflightRequestsByUUID;
    NSArray * _recentFaceMetadata;
    bool  _supportsAvalancheAnalysis;
}

@property (nonatomic, readonly) CMKAvalancheSession *_activeAvalancheSession;
@property (nonatomic, readonly) NSMutableDictionary *_avalancheSessionsByUUID;
@property (nonatomic, readonly) NSMutableSet *_avalancheSessionsToBeFinalizedAfterNextResponseCompletion;
@property (nonatomic, readonly) double _avalancheStartTime;
@property (nonatomic, readonly) NSCountedSet *_inflightRequestsByUUID;
@property (nonatomic, copy) NSArray *recentFaceMetadata;
@property (nonatomic) bool supportsAvalancheAnalysis;

- (void).cxx_destruct;
- (id)_activeAvalancheSession;
- (id)_avalancheSessionsByUUID;
- (id)_avalancheSessionsToBeFinalizedAfterNextResponseCompletion;
- (double)_avalancheStartTime;
- (bool)_canFinishCapturingActiveAvalanche;
- (void)_cancelAvalancheSession:(id)arg1;
- (void)_ensureValidAvalancheSession;
- (void)_finalizeAndBeginNewAvalancheSession;
- (void)_finalizeAvalancheSession:(id)arg1;
- (id)_inflightRequestsByUUID;
- (bool)canContinueAvalancheCapture;
- (void)cancelAvalancheCapture;
- (void)finishAvalancheCapture;
- (void)finishAvalancheCaptureWithCompletion:(id /* block */)arg1;
- (id)init;
- (long long)numberOfPhotos;
- (id)recentFaceMetadata;
- (void)requestWasEnqueued:(id)arg1;
- (void)responseWasCompleted:(id)arg1 error:(id)arg2;
- (void)responseWasGenerated:(id)arg1 error:(id)arg2;
- (void)setRecentFaceMetadata:(id)arg1;
- (void)setSupportsAvalancheAnalysis:(bool)arg1;
- (void)startAvalancheCapture;
- (bool)supportsAvalancheAnalysis;

@end