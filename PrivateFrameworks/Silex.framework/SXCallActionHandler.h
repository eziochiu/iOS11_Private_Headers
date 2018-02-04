/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXCallActionHandler : SXActionHandler <CNContactViewControllerDelegate, MFMessageComposeViewControllerDelegate> {
    UIAlertAction * _addToContactsAction;
    UIAlertAction * _callAction;
    UIAlertAction * _copyAction;
    UIAlertAction * _facetimeAction;
    UIAlertAction * _messageAction;
    UIViewController * _presentedModalViewController;
}

@property (nonatomic, readonly) UIAlertAction *addToContactsAction;
@property (nonatomic, readonly) UIAlertAction *callAction;
@property (nonatomic, readonly) UIAlertAction *copyAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIAlertAction *facetimeAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIAlertAction *messageAction;
@property (nonatomic, retain) UIViewController *presentedModalViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addToContacts;
- (id)addToContactsAction;
- (id)alertActions;
- (long long)alertControllerStyle;
- (id)callAction;
- (bool)canMakeCalls;
- (bool)canMakeFacetimeAudioCalls;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (id)copyAction;
- (void)copyToPasteboard;
- (void)dismissPresentedViewController;
- (id)facetimeAction;
- (void)makeCall;
- (void)makeFaceTimeCall;
- (id)message;
- (id)messageAction;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(id /* block */)arg4;
- (id)presentedModalViewController;
- (void)sendMessage;
- (void)setPresentedModalViewController:(id)arg1;
- (id)title;

@end
