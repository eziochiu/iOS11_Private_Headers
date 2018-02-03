/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHTTPURLResponse : NSURLResponse {
    NSHTTPURLResponseInternal * _httpInternal;
}

@property (readonly, copy) NSDictionary *allHeaderFields;
@property (readonly) long long statusCode;

+ (bool)isErrorStatusCode:(long long)arg1;
+ (id)localizedStringForStatusCode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)_allHTTPHeaderFieldsAsArrays;
- (id)_clientCertificateChain;
- (id)_clientCertificateState;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (id)_peerCertificateChain;
- (struct __SecTrust { }*)_peerTrust;
- (void)_setPeerTrust:(struct __SecTrust { }*)arg1;
- (id)allHeaderFields;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 headerFields:(id)arg3 requestTime:(double)arg4;
- (long long)statusCode;

@end
