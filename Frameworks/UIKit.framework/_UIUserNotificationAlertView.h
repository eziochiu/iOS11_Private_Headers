/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIUserNotificationAlertView : UIAlertView {
    id  _retainedSelf;
    bool  _runningModal;
    bool  _runsModal;
    id  _strongDelegate;
    struct __CFUserNotification { } * _userNotification;
    struct __CFRunLoopSource { } * _userNotificationRunLoopSource;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)_cancelUserNotification;
- (void)_removeObservervations;
- (long long)addButtonWithTitle:(id)arg1;
- (void)cancelAlertView;
- (void)dealloc;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (bool)isVisible;
- (bool)runsModal;
- (void)setHostedWindow:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setRunsModal:(bool)arg1;
- (void)show;
- (id)textFieldAtIndex:(long long)arg1;

@end
