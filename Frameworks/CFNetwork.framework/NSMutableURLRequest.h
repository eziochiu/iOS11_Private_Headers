/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSMutableURLRequest : NSURLRequest

@property (copy) NSData *HTTPBody;
@property (retain) NSInputStream *HTTPBodyStream;
@property (copy) NSString *HTTPMethod;
@property bool HTTPShouldHandleCookies;
@property bool HTTPShouldUsePipelining;
@property (copy) NSURL *URL;
@property (copy) NSDictionary *allHTTPHeaderFields;
@property bool allowsCellularAccess;
@property unsigned long long cachePolicy;
@property (copy) NSURL *mainDocumentURL;
@property unsigned long long networkServiceType;
@property double timeoutInterval;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

- (void)_setPayloadTransmissionTimeout:(double)arg1;
- (void)_setRequiresShortConnectionTimeout:(bool)arg1;
- (void)_setStartTimeoutDate:(id)arg1;
- (void)_setTimeWindowDelay:(double)arg1;
- (void)_setTimeWindowDuration:(double)arg1;
- (void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)requestPriority;
- (void)setAllHTTPHeaderFields:(id)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setBoundInterfaceIdentifier:(id)arg1;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setContentDispositionEncodingFallbackArray:(id)arg1;
- (void)setExpectedWorkload:(unsigned long long)arg1;
- (void)setHTTPBody:(id)arg1;
- (void)setHTTPBodyStream:(id)arg1;
- (void)setHTTPContentType:(id)arg1;
- (void)setHTTPExtraCookies:(id)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setHTTPReferrer:(id)arg1;
- (void)setHTTPShouldHandleCookies:(bool)arg1;
- (void)setHTTPShouldUsePipelining:(bool)arg1;
- (void)setHTTPUserAgent:(id)arg1;
- (void)setMainDocumentURL:(id)arg1;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (void)setRequestPriority:(unsigned long long)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setURL:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (void)_web_setHTTPContentType:(id)arg1;
- (void)_web_setHTTPReferrer:(id)arg1;
- (void)_web_setHTTPUserAgent:(id)arg1;

@end
