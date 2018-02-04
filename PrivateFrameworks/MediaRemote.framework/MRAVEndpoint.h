/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVEndpoint : NSObject {
    MRAVOutputDevice * _designatedGroupLeader;
    MRExternalDevice * _externalDevice;
    NSString * _localizedName;
    NSArray * _outputDevices;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) MRAVOutputDevice *designatedGroupLeader;
@property (nonatomic, retain) MRExternalDevice *externalDevice;
@property (getter=isLocalEndpoint, nonatomic, readonly) bool localEndpoint;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, copy) NSArray *outputDevices;
@property (nonatomic, retain) NSString *uniqueIdentifier;

- (void)_connectToExternalDeviceWithCompletion:(id /* block */)arg1;
- (void)_initializeExternalDeviceIfPossible;
- (void)_requestSharedAudioPresentationOutputContextModificationWithAddingDevices:(id)arg1 removingDevices:(id)arg2 replyQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)addOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(id /* block */)arg3;
- (bool)containsOutputDevice:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)designatedGroupLeader;
- (id)externalDevice;
- (void)forceEnableRemoteControllability;
- (id)initWithOutputDevices:(id)arg1;
- (bool)isLocalEndpoint;
- (id)localizedName;
- (id)outputDevices;
- (void)removeOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)setDesignatedGroupLeader:(id)arg1;
- (void)setExternalDevice:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setOutputDevices:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;

@end
