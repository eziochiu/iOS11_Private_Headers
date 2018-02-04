/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioShareInformation : NSObject <NSCopying> {
    NSURL * _URL;
    RadioArtworkCollection * _artworkCollection;
    NSString * _message;
    NSString * _messageMIMEType;
    NSString * _subject;
}

@property (nonatomic, readonly, retain) NSURL *URL;
@property (nonatomic, readonly, copy) RadioArtworkCollection *artworkCollection;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) NSString *messageMIMEType;
@property (nonatomic, readonly, copy) NSString *subject;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithShareInfoResponse:(id)arg1;
- (id)artworkCollection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)message;
- (id)messageMIMEType;
- (id)subject;

@end
