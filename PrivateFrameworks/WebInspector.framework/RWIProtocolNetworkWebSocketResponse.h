/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolNetworkWebSocketResponse : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolNetworkHeaders *headers;
@property (nonatomic) double status;
@property (nonatomic, copy) NSString *statusText;

- (id)headers;
- (id)initWithStatus:(double)arg1 statusText:(id)arg2 headers:(id)arg3;
- (void)setHeaders:(id)arg1;
- (void)setStatus:(double)arg1;
- (void)setStatusText:(id)arg1;
- (double)status;
- (id)statusText;

@end
