/* made by EzioChiu.
 */

@protocol AVOutputContextImpl <NSObject, NSSecureCoding>

@required

+ (id)auxiliaryOutputContext;
+ (id)iTunesAudioContext;
+ (bool)outputContextExistsWithRemoteOutputDevice;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(NSString *)arg1;
+ (id)outputContextImplForID:(NSString *)arg1;
+ (id)platformDependentScreenOrVideoContext;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)sharedAudioPresentationOutputContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;

- (NSString *)ID;
- (void)addOutputDevice:(AVOutputDevice *)arg1;
- (NSString *)associatedAudioDeviceID;
- (bool)canSetVolume;
- (AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
- (void)outputContextDidChangeApplicationProcessID:(AVOutputContext *)arg1;
- (NSString *)outputContextType;
- (AVOutputDevice *)outputDevice;
- (NSArray *)outputDevices;
- (AVOutputContext *)parentOutputContext;
- (bool)providesControlForAllVolumeFeatures;
- (void)removeOutputDevice:(AVOutputDevice *)arg1;
- (bool)setOutputDevice:(AVOutputDevice *)arg1 options:(NSDictionary *)arg2;
- (void)setOutputDevices:(NSArray *)arg1;
- (void)setParentOutputContext:(AVOutputContext *)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;

@end
