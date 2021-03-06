/* made by EzioChiu.
 */

@protocol TUCallCapabilitiesXPCServerActions <NSObject>

@required

- (oneway void)cancelPinRequestFromPrimaryDevice;
- (oneway void)endEmergencyCallbackMode;
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURL;
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURL;
- (oneway void)requestPinFromPrimaryDevice;
- (oneway void)setRelayCallingEnabled:(bool)arg1;
- (oneway void)setRelayCallingEnabled:(bool)arg1 forDeviceWithID:(NSString *)arg2;
- (oneway void)setThumperCallingAllowed:(bool)arg1 onSecondaryDeviceWithID:(NSString *)arg2;
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(bool)arg1;
- (oneway void)setThumperCallingEnabled:(bool)arg1;
- (oneway void)setVoLTECallingEnabled:(bool)arg1;
- (oneway void)setWiFiCallingEnabled:(bool)arg1;
- (oneway void)setWiFiCallingRoamingEnabled:(bool)arg1;

@end
