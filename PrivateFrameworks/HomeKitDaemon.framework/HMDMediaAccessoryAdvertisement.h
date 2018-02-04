/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaAccessoryAdvertisement : HMDAccessoryAdvertisement {
    bool  _associated;
    unsigned int  _deviceType;
    HMDMediaOutputDevice * _outputDevice;
    NSString * _sessionIdentifier;
}

@property (nonatomic) bool associated;
@property (nonatomic, readonly) unsigned int deviceType;
@property (nonatomic, readonly) HMDMediaOutputDevice *outputDevice;
@property (nonatomic, retain) NSString *sessionIdentifier;

- (void).cxx_destruct;
- (bool)associated;
- (id)description;
- (unsigned int)deviceType;
- (id)initWithIdentifier:(id)arg1 sessionIdentifier:(id)arg2 name:(id)arg3 category:(id)arg4 deviceType:(unsigned int)arg5;
- (id)initWithOutputDevice:(id)arg1 sessionIdentifier:(id)arg2;
- (id)outputDevice;
- (id)sessionIdentifier;
- (void)setAssociated:(bool)arg1;
- (void)setSessionIdentifier:(id)arg1;

@end
