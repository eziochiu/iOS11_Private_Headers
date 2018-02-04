/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCReportingPlaybackObserver : NSObject {
    bool  _SBEnabled;
    NSData * _currentJingleReportingTimedMetadata;
    bool  _hasPendingContainerChange;
    bool  _hasSetLastPlayEventTimeStamp;
    bool  _isReloadingWithPlaybackContext;
    bool  _isScrubbing;
    MPAVItem * _itemForCurrentTimeChange;
    double  _lastPlayEventEndTimeForCurrentItem;
    double  _lastPlayEventTimeStamp;
    bool  _offline;
    MPAVController * _player;
    NSOperationQueue * _recordEventOperationQueue;
    MPCReportingController * _reportingController;
    bool  _shouldReportAsPlaying;
    double  _startTimeForCurrentTimeChange;
    unsigned long long  _storeAccountID;
    NSString * _storeFrontID;
}

@property (getter=isSBEnabled, nonatomic) bool SBEnabled;
@property (getter=isOffline, nonatomic) bool offline;
@property (nonatomic, readonly) MPAVController *player;
@property (nonatomic, readonly) MPCReportingController *reportingController;
@property (nonatomic) unsigned long long storeAccountID;
@property (nonatomic, copy) NSString *storeFrontID;

- (void).cxx_destruct;
- (double)_itemEndTimeForItem:(id)arg1 withProposedEndTime:(double)arg2;
- (void)_itemReportingJingleTimedMetadataDidChangeNotification:(id)arg1;
- (double)_itemStartTimeForItem:(id)arg1;
- (id)_newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 eventSource:(id)arg2;
- (void)_playerDidReloadWithPlaybackContextNotification:(id)arg1;
- (void)_playerDidSetCurrentTimeNotification:(id)arg1;
- (void)_playerItemDidChangeNotification:(id)arg1;
- (void)_playerItemWillChangeNotification:(id)arg1;
- (void)_playerPlaybackStateDidChangeNotification:(id)arg1;
- (void)_playerWillReloadWithPlaybackContextNotification:(id)arg1;
- (void)_playerWillSetCurrentTimeNotification:(id)arg1;
- (void)_reportPlaybackEndedForTimeoutWithItem:(id)arg1;
- (void)_setLastPlayEventEndTimeForCurrentItem:(double)arg1;
- (void)dealloc;
- (void)didHitPlaybackTimeoutEndingPlayback:(bool)arg1 withCurrentItem:(id)arg2;
- (void)didTransitionItemForBan:(id)arg1;
- (id)initWithPlayer:(id)arg1 reportingController:(id)arg2;
- (bool)isOffline;
- (bool)isSBEnabled;
- (id)newPlayActivityEvent;
- (id)player;
- (void)recordPlayActivityEvents:(id)arg1 forEventSource:(id)arg2;
- (void)recordUserSeekFromTime:(double)arg1 toTime:(double)arg2 forItem:(id)arg3;
- (id)reportingController;
- (void)setOffline:(bool)arg1;
- (void)setSBEnabled:(bool)arg1;
- (void)setStoreAccountID:(unsigned long long)arg1;
- (void)setStoreFrontID:(id)arg1;
- (unsigned long long)storeAccountID;
- (id)storeFrontID;
- (void)willHitPlaybackTimeoutEndingPlayback:(bool)arg1 withCurrentItem:(id)arg2;
- (void)willTransitionItemForBan:(id)arg1;

@end