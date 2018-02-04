/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSearchFeedbackListener : NSObject <SFFeedbackListener> {
    NSString * _clientIdentifier;
    _QPSearchFeedbackListener * _feedbackListener;
    bool  _isSpotlight;
    <_DKKnowledgeSaving> * _store;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _QPSearchFeedbackListener *feedbackListener;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSpotlight;
@property (nonatomic, retain) <_DKKnowledgeSaving> *store;
@property (readonly) Class superclass;

+ (id)feedbackListener;
+ (id)feedbackListenerWithClientIdentifier:(id)arg1;
+ (id)feedbackListenerWithStore:(id)arg1 clientIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (void)didEngageResult:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (id)feedbackListener;
- (bool)isSpotlight;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)setFeedbackListener:(id)arg1;
- (void)setIsSpotlight:(bool)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end