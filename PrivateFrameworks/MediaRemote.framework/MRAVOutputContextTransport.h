/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVOutputContextTransport : MRExternalDeviceTransport {
    void * _deviceInfo;
    MRAVInputStream * _inputStream;
    AVOutputContext * _outputContext;
    NSArray * _outputDevices;
    MRAVOutputStream * _outputStream;
}

@property (nonatomic, readonly) NSArray *outputDevices;

- (id)_createRemoteControlContextWithID:(id)arg1;
- (void)_initializeOutputContext;
- (void)dealloc;
- (id)description;
- (void*)deviceInfo;
- (bool)getInputStream:(id*)arg1 outputStream:(id*)arg2;
- (id)hostname;
- (id)initWithOutputDevices:(id)arg1;
- (id)name;
- (id)outputDevices;
- (long long)port;
- (bool)requiresCustomPairing;

@end
