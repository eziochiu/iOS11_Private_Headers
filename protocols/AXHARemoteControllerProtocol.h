/* made by EzioChiu.
 */

@protocol AXHARemoteControllerProtocol <NSObject>

@required

- (AXHADispatchTimer *)communicationTimer;
- (bool)didValidateHIID;
- (void)setCommunicationTimer:(AXHADispatchTimer *)arg1;
- (void)setDidValidateHIID:(bool)arg1;

@end
