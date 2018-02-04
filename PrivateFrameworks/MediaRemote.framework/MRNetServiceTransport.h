/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNetServiceTransport : MRExternalDeviceTransport {
    void * _deviceInfo;
    NSNetService * _netService;
}

@property (nonatomic, retain) NSNetService *netService;

+ (void*)createDeviceInfoFromNetService:(id)arg1;
+ (void*)createDeviceInfoFromTXTRecord:(id)arg1;

- (void)dealloc;
- (id)description;
- (void*)deviceInfo;
- (bool)getInputStream:(id*)arg1 outputStream:(id*)arg2;
- (id)hostname;
- (id)initWithNetService:(id)arg1;
- (id)name;
- (id)netService;
- (long long)port;
- (bool)requiresCustomPairing;
- (void)setNetService:(id)arg1;
- (void)updateDeviceInfoWithTXTRecord:(id)arg1;

@end
