/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLResponse : NSObject <NSCopying, NSSecureCoding> {
    NSURLResponseInternal * _internal;
}

@property (readonly, copy) NSString *MIMEType;
@property (readonly, copy) NSURL *URL;
@property (readonly) long long expectedContentLength;
@property (nonatomic, readonly) bool ssv_isExpiredResponse;
@property (readonly, copy) NSString *suggestedFilename;
@property (readonly, copy) NSString *textEncodingName;
@property (readonly) bool tsu_isHTTPSuccess;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)_responseWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
+ (id)getObjectKeyWithIndex:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)MIMEType;
- (id)URL;
- (struct _CFURLResponse { }*)_CFURLResponse;
- (double)_calculatedExpiration;
- (double)_freshnessLifetime;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (id)_lastModifiedDate;
- (bool)_mustRevalidate;
- (id)_peerCertificateChain;
- (void)_setExpectedContentLength:(long long)arg1;
- (void)_setMIMEType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedContentLength;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4;
- (id)suggestedFilename;
- (id)textEncodingName;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (bool)sf_hasXMLAttachment;

// Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation

- (bool)_fides_statusIsHTTPOK;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

- (id)_cacheTime;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (bool)tsu_isHTTPSuccess;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (bool)safari_hasAttachment;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)ssv_isExpiredResponse;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

- (struct __SecTrust { }*)webui_serverTrust;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

- (id)allHeaderFields;
- (long long)maxExpectedContentLength;
- (int)statusCode;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (bool)tsu_isHTTPSuccess;

@end
