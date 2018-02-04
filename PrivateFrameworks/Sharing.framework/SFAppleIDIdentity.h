/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAppleIDIdentity : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSString * _appleID;
    NSDate * _certificateExpirationDate;
    NSData * _certificatePersistentReference;
    long long  _certificateStatus;
    bool  _dirty;
    NSString * _encDSID;
    NSData * _intermediateCertificatePersistentReference;
    NSDate * _lastValidationAttemptDate;
    NSDate * _lastValidationDate;
    NSDate * _modificationDate;
    NSData * _privateKeyPersistentReference;
    NSString * _serialNumber;
}

@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, retain) NSDate *certificateExpirationDate;
@property (nonatomic, readonly) bool certificateExpired;
@property (nonatomic, retain) NSData *certificatePersistentReference;
@property (nonatomic, readonly) long long certificateState;
@property (nonatomic) long long certificateStatus;
@property (getter=isDirty, nonatomic) bool dirty;
@property (nonatomic, readonly) NSData *intermediateCertificatePersistentReference;
@property (nonatomic, retain) NSDate *lastValidationAttemptDate;
@property (nonatomic, retain) NSDate *lastValidationDate;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, readonly) bool needsRenewal;
@property (nonatomic, retain) NSData *privateKeyPersistentReference;
@property (nonatomic, retain) NSString *serialNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)appleID;
- (id)certificateExpirationDate;
- (bool)certificateExpired;
- (id)certificatePersistentReference;
- (long long)certificateState;
- (long long)certificateStatus;
- (struct __SecCertificate { }*)copyCertificate;
- (struct __SecIdentity { }*)copyIdentity;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)copyPrivateKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)intermediateCertificatePersistentReference;
- (bool)isDirty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIdentity:(id)arg1;
- (id)lastValidationAttemptDate;
- (id)lastValidationDate;
- (id)modificationDate;
- (bool)needsRenewal;
- (id)privateKeyPersistentReference;
- (id)serialNumber;
- (void)setCertificateExpirationDate:(id)arg1;
- (void)setCertificatePersistentReference:(id)arg1;
- (void)setCertificateStatus:(long long)arg1;
- (void)setDirty:(bool)arg1;
- (void)setLastValidationAttemptDate:(id)arg1;
- (void)setLastValidationDate:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setPrivateKeyPersistentReference:(id)arg1;
- (void)setSerialNumber:(id)arg1;

@end
