/* made by EzioChiu.
 */

@protocol TUAudioDeviceControllerActions <NSObject>

@required

- (oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(NSString *)arg1;
- (oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(NSString *)arg1;

@end
