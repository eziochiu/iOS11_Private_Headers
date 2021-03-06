/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPhoneTranscriptMessageCell : CKTranscriptMessageCell {
    CKAvatarView * _avatarView;
}

@property (nonatomic, retain) CKAvatarView *avatarView;

- (void).cxx_destruct;
- (id)avatarView;
- (id)contactImageView;
- (void)dealloc;
- (void)layoutSubviewsForContents;
- (void)setAvatarView:(id)arg1;
- (void)setShowAvatarView:(bool)arg1 withContact:(id)arg2 preferredHandle:(id)arg3 avatarViewDelegate:(id)arg4;

@end
