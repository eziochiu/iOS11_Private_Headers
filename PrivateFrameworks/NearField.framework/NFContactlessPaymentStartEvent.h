/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFContactlessPaymentStartEvent : NSObject <NSSecureCoding> {
    NFApplet * _applet;
    NSString * _appletIdentifier;
    unsigned short  _paymentMode;
    unsigned short  _selectStatus;
}

@property (nonatomic, readonly) NFApplet *applet;
@property (nonatomic, readonly) unsigned short paymentMode;
@property (nonatomic, readonly) unsigned short selectStatus;

+ (bool)supportsSecureCoding;

- (void)_setApplet:(id)arg1;
- (id)applet;
- (id)appletIdentifier;
- (id)asDictionary;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned short)paymentMode;
- (unsigned short)selectStatus;

@end