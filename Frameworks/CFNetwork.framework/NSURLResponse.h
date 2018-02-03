/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLResponse : NSObject <NSCopying, NSSecureCoding> {
    NSURLResponseInternal * _internal;
}

@property (readonly, copy) NSString *MIMEType;
@property (readonly, copy) NSURL *URL;
@property (readonly) long long expectedContentLength;
@property (readonly, copy) NSString *suggestedFilename;
@property (readonly, copy) NSString *textEncodingName;

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

@end
