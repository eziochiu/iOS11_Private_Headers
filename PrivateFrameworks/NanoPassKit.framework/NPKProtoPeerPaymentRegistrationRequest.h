/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoPeerPaymentRegistrationRequest : PBRequest <NSCopying> {
    NSString * _serviceURL;
}

@property (nonatomic, readonly) bool hasServiceURL;
@property (nonatomic, retain) NSString *serviceURL;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasServiceURL;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serviceURL;
- (void)setServiceURL:(id)arg1;
- (void)writeTo:(id)arg1;

@end
