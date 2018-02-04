/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenSmartCardPINAuthOperation : TKTokenAuthOperation {
    NSData * _APDUTemplate;
    NSString * _PIN;
    long long  _PINByteOffset;
    TKSmartCardPINFormat * _PINFormat;
    NSString * _localizedDescription;
    TKSmartCard * _smartCard;
}

@property (copy) NSData *APDUTemplate;
@property (copy) NSString *PIN;
@property long long PINByteOffset;
@property (retain) TKSmartCardPINFormat *PINFormat;
@property (copy) NSString *localizedDescription;
@property (retain) TKSmartCard *smartCard;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)APDUTemplate;
- (id)PIN;
- (long long)PINByteOffset;
- (id)PINFormat;
- (void)encodeWithCoder:(id)arg1;
- (bool)finishWithError:(id*)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescription;
- (void)setAPDUTemplate:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setPIN:(id)arg1;
- (void)setPINByteOffset:(long long)arg1;
- (void)setPINFormat:(id)arg1;
- (void)setSmartCard:(id)arg1;
- (id)smartCard;

@end