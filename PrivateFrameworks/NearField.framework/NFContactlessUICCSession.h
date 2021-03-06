/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFContactlessUICCSession : NFSession <NFContactlessSessionCallbacks> {
    <NFContactlessUICCSessionDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <NFContactlessUICCSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)delegate;
- (void)didDetectField:(bool)arg1;
- (void)didDetectTechnology:(id)arg1;
- (void)didEndUnexpectedly;
- (void)didSelectApplet:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
