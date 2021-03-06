/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryViewUtilities : NSObject

+ (void)configureHorizontalLockupContentDescriptorWithCommonMetricsForCollectionCells:(id)arg1;
+ (void)configureHorizontalLockupContentDescriptorWithCommonMetricsForMusicVideosCells:(id)arg1;
+ (void)configureHorizontalLockupContentDescriptorWithCommonMetricsForSongCells:(id)arg1;
+ (void)handlePlaybackContext:(id)arg1 inViewController:(id)arg2;
+ (void)handlePlaybackContext:(id)arg1 inViewController:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)parentNavigationControllerHasInFlightTransitionFromViewController:(id)arg1;
+ (bool)shouldAbortSelectionFromViewController:(id)arg1 withLastSelectionBehavior:(long long)arg2;

@end
