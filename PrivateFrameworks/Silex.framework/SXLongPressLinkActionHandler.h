/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLongPressLinkActionHandler : SXActionHandler {
    UIAlertAction * _copyAction;
    UIAlertAction * _openAction;
    UIAlertAction * _openInSafariAction;
}

@property (nonatomic, readonly) UIAlertAction *copyAction;
@property (nonatomic, readonly) UIAlertAction *openAction;
@property (nonatomic, readonly) UIAlertAction *openInSafariAction;

- (void).cxx_destruct;
- (id)alertActions;
- (id)copyAction;
- (void)copyToPasteboard;
- (id)message;
- (id)openAction;
- (id)openInSafariAction;
- (void)openLinkInApp;
- (void)openLinkInSafari;
- (id)title;

@end
