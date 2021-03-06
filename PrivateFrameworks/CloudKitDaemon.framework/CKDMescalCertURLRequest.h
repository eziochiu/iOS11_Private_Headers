/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMescalCertURLRequest : CKDURLRequest {
    NSData * _mescalCert;
}

@property (nonatomic, retain) NSData *mescalCert;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (bool)hasRequestBody;
- (id)httpMethod;
- (id)mescalCert;
- (long long)partitionType;
- (void)requestDidParse509CertObject:(id)arg1;
- (void)requestDidParsePlaintextObject:(id)arg1;
- (id)requestOptions;
- (bool)requiresDeviceID;
- (bool)requiresSignature;
- (long long)serverType;
- (void)setMescalCert:(id)arg1;
- (id)url;

@end
