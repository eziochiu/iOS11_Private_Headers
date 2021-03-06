/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface _RWIRelayClientConnection : NSObject <_RWIRelayToClientMessageProxy> {
    <_RWIRelayClientConnectionDelegate> * _delegate;
    bool  _didReportClose;
    bool  _sleeping;
    NSString * _tag;
}

@property (nonatomic, readonly) <_RWIRelayClientConnectionDelegate> *delegate;
@property (nonatomic) bool sleeping;
@property (nonatomic, copy) NSString *tag;

- (void)_dispatchMessage:(id)arg1;
- (void)_reportClose;
- (void)dealloc;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)sendMessage:(id)arg1;
- (void)setSleeping:(bool)arg1;
- (void)setTag:(id)arg1;
- (bool)sleeping;
- (id)tag;

@end
