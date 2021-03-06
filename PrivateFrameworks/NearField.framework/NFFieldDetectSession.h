/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFFieldDetectSession : NFSession <NFFieldDetectSessionCallbacks> {
    NFWeakReference * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <NFFieldDetectSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)delegate;
- (void)didDetectField:(bool)arg1;
- (void)didDetectTechnology:(id)arg1;
- (void)didEndUnexpectedly;
- (void)setDelegate:(id)arg1;

@end
