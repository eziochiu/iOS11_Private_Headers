/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSEmailModel : NSObject <NSCoding> {
    NSArray * _bcc;
    NSString * _body;
    NSArray * _cc;
    NSURL * _reference;
    NSString * _subject;
    NSArray * _to;
    int  _type;
}

@property (nonatomic, copy) NSArray *bcc;
@property (nonatomic, retain) NSString *body;
@property (nonatomic, copy) NSArray *cc;
@property (nonatomic, retain) NSURL *reference;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSArray *to;
@property (nonatomic) int type;

- (id)bcc;
- (id)body;
- (id)cc;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reference;
- (void)setBcc:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCc:(id)arg1;
- (void)setReference:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTo:(id)arg1;
- (void)setType:(int)arg1;
- (id)subject;
- (id)to;
- (int)type;

@end
