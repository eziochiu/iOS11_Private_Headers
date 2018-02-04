/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRExternalDeviceTransport : NSObject {
    bool  _requiresCustomPairing;
}

@property (nonatomic, readonly) void*deviceInfo;
@property (nonatomic, readonly) NSString *hostname;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long port;
@property (nonatomic, readonly) bool requiresCustomPairing;

- (void*)deviceInfo;
- (bool)getInputStream:(id*)arg1 outputStream:(id*)arg2;
- (id)hostname;
- (id)name;
- (long long)port;
- (bool)requiresCustomPairing;

@end
