/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOutgoingMessageDelivery : NSObject {
    MailAccount * _archiveAccount;
    MFAttachmentCompositionContext * _attachmentContext;
    NSArray * _charsets;
    NSDictionary * _compositionSpecification;
    unsigned long long  _conversationFlags;
    MFMailDelivery * _currentDeliveryObject;
    <MFDeliveryDelegate> * _delegate;
    DeliveryAccount * _deliveryAccount;
    MFMutableMessageHeaders * _headers;
    NSString * _htmlBody;
    bool  _isUserRequested;
    MFMessage * _message;
    NSArray * _mixedContent;
    long long  _originalConversationId;
    NSArray * _otherHTMLAndAttachments;
    MFPlainTextDocument * _plainTextAlternative;
    bool  _textPartsAreHTML;
}

@property (nonatomic, retain) MFAttachmentCompositionContext *attachmentContext;
@property (nonatomic, retain) NSDictionary *compositionSpecification;
@property (nonatomic) unsigned long long conversationFlags;
@property (nonatomic) bool isUserRequested;
@property (nonatomic) long long originalConversationId;

+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(bool)arg3;
+ (id)newWithMessage:(id)arg1;

- (id)_currentDeliveryObject;
- (id)_deliverSynchronouslyWithCurrentSettings:(bool)arg1;
- (id)_deliveryAccountForInitializers;
- (id)account;
- (id)attachmentContext;
- (id)compositionSpecification;
- (unsigned long long)conversationFlags;
- (void)dealloc;
- (id)deliverSynchronouslyWithCompletion:(id /* block */)arg1;
- (long long)deliveryStatus;
- (id)init;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(bool)arg3;
- (id)initWithMessage:(id)arg1;
- (bool)isUserRequested;
- (id)message;
- (long long)originalConversationId;
- (id)originalHeaders;
- (void)setAccount:(id)arg1;
- (void)setArchiveAccount:(id)arg1;
- (void)setAttachmentContext:(id)arg1;
- (void)setCompositionSpecification:(id)arg1;
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsUserRequested:(bool)arg1;
- (void)setOriginalConversationId:(long long)arg1;

@end