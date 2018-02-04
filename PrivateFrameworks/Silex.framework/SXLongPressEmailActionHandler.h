/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLongPressEmailActionHandler : SXActionHandler <CNContactViewControllerDelegate, MFMailComposeViewControllerDelegate> {
    UIAlertAction * _addToContactsAction;
    UIAlertAction * _copyAction;
    UIAlertAction * _messageAction;
    UIViewController * _presentedModalViewController;
}

@property (nonatomic, readonly) UIAlertAction *addToContactsAction;
@property (nonatomic, readonly) UIAlertAction *copyAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIAlertAction *messageAction;
@property (nonatomic, retain) UIViewController *presentedModalViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addToContacts;
- (id)addToContactsAction;
- (id)alertActions;
- (void)composeMessage;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (id)copyAction;
- (void)copyToPasteboard;
- (void)dismissPresentedViewController;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)message;
- (id)messageAction;
- (id)presentedModalViewController;
- (void)setPresentedModalViewController:(id)arg1;
- (id)title;

@end
