/* made by EzioChiu.
 */

@protocol _MSMessageComposeHostProtocol <NSObject>

@required

- (void)_dismiss;
- (void)_openURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_requestPresentationStyleExpanded:(bool)arg1;
- (void)_requestResize;
- (void)_stageAppItem:(void *)arg1 skipShelf:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MSMessage *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_stageMediaItem:(void *)arg1 skipShelf:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: _MSMessageMediaPayload *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_stageRichLink:(void *)arg1 skipShelf:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MSRichLink *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_startDragMediaItem:(void *)arg1 frameInRemoteView:(void *)arg2 fence:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: _MSMessageMediaPayload *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, BKSAnimationFenceHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)_updateSnapshotForNextLaunch:(UIImage *)arg1;

@end
