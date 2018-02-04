/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI
 */

@interface _UNNotificationContentExtensionContext : NSExtensionContext {
    <_UNNotificationExtensionHostInterface> * _hostService;
}

@property (nonatomic) <_UNNotificationExtensionHostInterface> *hostService;

- (void).cxx_destruct;
- (id)hostService;
- (void)mediaPlayingPaused;
- (void)mediaPlayingStarted;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestDismiss;
- (void)setHostService:(id)arg1;

@end
