/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRDeviceAggregate : NSObject {
    _TVRCMRTelevisionWrapper * _mediaRemote;
    TVRCDevice * _publicDevice;
}

@property (nonatomic, retain) _TVRCMRTelevisionWrapper *mediaRemote;
@property (nonatomic, retain) TVRCDevice *publicDevice;

- (void).cxx_destruct;
- (id)bestImpl;
- (bool)isEmpty;
- (id)mediaRemote;
- (id)publicDevice;
- (void)setMediaRemote:(id)arg1;
- (void)setPublicDevice:(id)arg1;

@end
