/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDIAPInfo : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _accountId;
    NSNumber * _adamId;
    NSNumber * _appAdamId;
    NSNumber * _expirationTimestamp;
    NSNumber * _lastModifiedTimestamp;
    NSNumber * _purchaseTimestamp;
    unsigned char  _type;
}

@property (nonatomic, retain) NSNumber *accountId;
@property (nonatomic, retain) NSNumber *adamId;
@property (nonatomic, retain) NSNumber *appAdamId;
@property (nonatomic, retain) NSNumber *expirationTimestamp;
@property (nonatomic, retain) NSNumber *lastModifiedTimestamp;
@property (nonatomic, retain) NSNumber *purchaseTimestamp;
@property (nonatomic) unsigned char type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountId;
- (id)adamId;
- (id)appAdamId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationTimestamp;
- (id)initWithCoder:(id)arg1;
- (id)lastModifiedTimestamp;
- (id)purchaseTimestamp;
- (void)setAccountId:(id)arg1;
- (void)setAdamId:(id)arg1;
- (void)setAppAdamId:(id)arg1;
- (void)setExpirationTimestamp:(id)arg1;
- (void)setLastModifiedTimestamp:(id)arg1;
- (void)setPurchaseTimestamp:(id)arg1;
- (void)setType:(unsigned char)arg1;
- (unsigned char)type;

@end
