/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIOnboardingInterface : IKJSObject <WLKUIOnboardingInterface> {
    WLKUIOnboardingController * _controller;
    bool  _hasSynced;
    bool  _isShowing;
    NSNumber * _lastReportedOptedInValue;
}

@property (nonatomic, readonly) NSArray *eligibleBids;
@property (nonatomic, readonly) bool isShowing;
@property (getter=isOptedIn, nonatomic, readonly) bool optedIn;
@property (getter=isOptedInCached, nonatomic, readonly) NSNumber *optedInCached;
@property (getter=isTvosMigrated, nonatomic, readonly) bool tvosMigrated;

- (void).cxx_destruct;
- (void)dealloc;
- (void)dismiss;
- (id)eligibleBids;
- (id)initWithAppContext:(id)arg1;
- (bool)isOptedIn;
- (id)isOptedInCached;
- (bool)isShowing;
- (bool)isTvosMigrated;
- (void)migrateTvos:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setOptedIn:(bool)arg1 :(id)arg2;
- (void)show:(id)arg1;
- (void)showForBids:(id)arg1 :(id)arg2 :(id)arg3;

@end
