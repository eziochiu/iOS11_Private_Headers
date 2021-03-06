/* made by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSMessagesAppViewController : UIViewController <MSConversationDelegate, MSMessagesAppTranscriptPresentation> {
    MSConversation * _activeConversation;
    <_MSMessageComposeExtensionImplProtocol> * _appContext;
    bool  _isReadyForDisplay;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _balloonMaskEdgeInsets;
@property (nonatomic, retain) MSConversation *activeConversation;
@property (nonatomic, retain) <_MSMessageComposeExtensionImplProtocol> *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isReadyForDisplay;
@property (nonatomic, readonly) unsigned long long presentationStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_balloonMaskEdgeInsets;
- (void)_conversation:(id)arg1 didSelectMessage:(id)arg2;
- (void)_conversation:(id)arg1 willSelectMessage:(id)arg2;
- (bool)_handleTextInputPayload:(id)arg1 withPayloadID:(id)arg2;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_validateMessageForSending:(id)arg1 conversation:(id)arg2 associatedText:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_validateMessageForSending:(id)arg1 conversation:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)activeConversation;
- (id)appContext;
- (struct CGSize { double x1; double x2; })contentSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (void)didBecomeActiveWithConversation:(id)arg1;
- (void)didCancelSendingMessage:(id)arg1 conversation:(id)arg2;
- (void)didReceiveMessage:(id)arg1 conversation:(id)arg2;
- (void)didResignActiveWithConversation:(id)arg1;
- (void)didSelectMessage:(id)arg1 conversation:(id)arg2;
- (void)didStartSendingMessage:(id)arg1 conversation:(id)arg2;
- (void)didTransitionToPresentationStyle:(unsigned long long)arg1;
- (void)dismiss;
- (bool)displaysAfterAppearance;
- (bool)isReadyForDisplay;
- (unsigned long long)presentationStyle;
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)requestResize;
- (void)setActiveConversation:(id)arg1;
- (void)setAppContext:(id)arg1;
- (void)setIsReadyForDisplay:(bool)arg1;
- (void)setReadyForDisplay;
- (void)updateSnapshotWithCompletionBlock:(id /* block */)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)willBecomeActiveWithConversation:(id)arg1;
- (void)willResignActiveWithConversation:(id)arg1;
- (void)willSelectMessage:(id)arg1 conversation:(id)arg2;
- (void)willTransitionToPresentationStyle:(unsigned long long)arg1;

@end
