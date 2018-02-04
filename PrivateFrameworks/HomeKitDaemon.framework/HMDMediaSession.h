/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaSession : HMFObject <HMFDumpState, HMFLogging, HMFMessageReceiver, NSSecureCoding> {
    bool  _connecting;
    HMDMediaEndpoint * _endpoint;
    NSString * _logID;
    NSMutableSet * _mediaProfiles;
    HMFMessageDispatcher * _msgDispatcher;
    NSMutableArray * _pendingBlocks;
    long long  _playbackState;
    NSString * _sessionIdentifier;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (getter=isConnecting, nonatomic) bool connecting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMDMediaEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logID;
@property (nonatomic, readonly) NSSet *mediaProfiles;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSMutableArray *pendingBlocks;
@property (nonatomic) long long playbackState;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uuid;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (long long)_mapToHMMediaPlaybackState:(unsigned int)arg1;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addPendingBlock:(id /* block */)arg1 externalDevice:(void*)arg2;
- (void*)_getExternalDevice;
- (void)_handleGetPlaybackState:(id)arg1;
- (void)_handleMediaSessionSetAudioControl:(id)arg1;
- (void)_handleMediaSessionSetPlayback:(id)arg1;
- (void)_handleMediaUpdateMuted:(id)arg1;
- (void)_handleMediaUpdateVolume:(id)arg1;
- (void)_notifyClientsOfPlaybackStateUpdate:(long long)arg1 error:(id)arg2 inResponseToMessage:(id)arg3;
- (void)_notifyClientsOfUpdatedVolume:(id)arg1 muted:(id)arg2 inResponseToMessage:(id)arg3;
- (void)_notifyPendingBlocksOfError:(id)arg1;
- (void)_registerForSessionUpdates:(bool)arg1;
- (void)addMediaProfile:(id)arg1;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(id)arg1 mediaProfiles:(id)arg2;
- (bool)isConnecting;
- (bool)isEqual:(id)arg1;
- (id)logID;
- (id)logIdentifier;
- (void)mediaPlaybackStateChanged:(id)arg1;
- (id)mediaProfiles;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)pendingBlocks;
- (long long)playbackState;
- (void)registerForSessionUpdates:(bool)arg1;
- (void)removeMediaProfile:(id)arg1;
- (id)sessionIdentifier;
- (void)setConnecting:(bool)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setPendingBlocks:(id)arg1;
- (void)setPlaybackState:(long long)arg1;
- (id)uuid;
- (id)workQueue;

@end
