/* made by EzioChiu.
 */

@protocol AVFigRoutingContextOutputDeviceTranslator <NSObject>

@required

- (void)addOutputDevice:(AVOutputDevice *)arg1 toRoutingContext:(struct OpaqueFigRoutingContext { }*)arg2;
- (AVOutputDevice *)outputDeviceFromRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1;
- (NSArray *)outputDevicesFromRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1;
- (void)removeOutputDevice:(AVOutputDevice *)arg1 fromRoutingContext:(struct OpaqueFigRoutingContext { }*)arg2;
- (bool)setOutputDevice:(AVOutputDevice *)arg1 withOptions:(const struct __CFDictionary { }*)arg2 onRoutingContext:(struct OpaqueFigRoutingContext { }*)arg3;
- (void)setOutputDevices:(NSArray *)arg1 withOptions:(const struct __CFDictionary { }*)arg2 onRoutingContext:(struct OpaqueFigRoutingContext { }*)arg3;

@end
