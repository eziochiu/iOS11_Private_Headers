/* made by EzioChiu.
 */

@protocol SOSInternalClientProtocol <SOSClientProtocol>

@required

- (void)dismissClientSOSWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateCurrentSOSInitiationState:(long long)arg1;
- (void)updateCurrentSOSInteractiveState:(long long)arg1;

@end
