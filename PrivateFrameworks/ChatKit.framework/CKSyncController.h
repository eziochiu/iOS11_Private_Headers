/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSyncController : NSObject {
    int  _attachmentRestoredToken;
    int  _restoreStateChangedToken;
    bool  _restoring;
}

@property (getter=isRestoring, nonatomic) bool restoring;

+ (id)sharedInstance;

- (void)attachmentRestored;
- (id)init;
- (bool)isRestoring;
- (void)postAttachmentRestored;
- (void)prioritizeAttachmentAtPath:(id)arg1;
- (void)setRestoring:(bool)arg1;
- (void)updateRestoreState;

@end
