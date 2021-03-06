/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKUIBehaviorNanoNotifications : CKUIBehaviorNano

- (double)balloonMaxWidthForTranscriptWidth:(double)arg1 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 shouldShowPluginButtons:(bool)arg3 shouldShowCharacterCount:(bool)arg4 shouldCoverSendButton:(bool)arg5;
- (double)bottomTranscriptSpace;
- (double)nanoNoteSenderContentSpace;
- (double)previewBalloonMaxWidthForBalloonMaxWidth:(double)arg1;
- (bool)shouldLoadInitialViewingMessageCount;
- (bool)shouldSizeInitialViewingMessageCount;
- (bool)shouldUseRotisserieScrolling;
- (bool)showsBalloonBadges;
- (bool)showsBalloonChevron;
- (bool)showsReplyButtonsInTranscript;
- (double)topTranscriptSpace;

@end
