/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKMessageContent : NSObject <NSSecureCoding> {
    NSArray * _attachments;
    NSString * _externalReferenceId;
    bool  _mainAlternativeValid;
    NSString * _messageId;
    bool  _partiallyLoaded;
    NSData * _textData;
}

@property (nonatomic, retain) NSArray *attachments;
@property (nonatomic, retain) NSString *externalReferenceId;
@property (nonatomic) bool mainAlternativeValid;
@property (nonatomic, retain) NSString *messageId;
@property (nonatomic) bool partiallyLoaded;
@property (nonatomic, retain) NSData *textData;

+ (id)classesForUnarchivingTextData;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachments;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalReferenceId;
- (id)initWithCoder:(id)arg1;
- (bool)mainAlternativeValid;
- (id)messageId;
- (bool)partiallyLoaded;
- (void)setAttachments:(id)arg1;
- (void)setExternalReferenceId:(id)arg1;
- (void)setMainAlternativeValid:(bool)arg1;
- (void)setMessageId:(id)arg1;
- (void)setPartiallyLoaded:(bool)arg1;
- (void)setTextData:(id)arg1;
- (id)textData;

@end
