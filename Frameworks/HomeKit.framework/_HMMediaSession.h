/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMMediaSession : NSObject <HMFMessageReceiver, HMObjectMerge> {
    _HMContext * _context;
    <_HMMediaSessionDelegate> * _delegate;
    NSUUID * _messageTargetUUID;
    long long  _playbackState;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_HMMediaSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, retain) NSUUID *messageTargetUUID;
@property (readonly) long long playbackState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (void)_handleSessionPlaybackUpdated:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_notifyDelegateOfUpdatedPlaybackState:(long long)arg1;
- (void)_registerNotificationHandlers;
- (void)_updatePlaybackState:(id)arg1 completion:(id /* block */)arg2;
- (id)clientQueue;
- (id)context;
- (id)delegate;
- (id)delegateCaller;
- (unsigned long long)hash;
- (id)initWithUUID:(id)arg1 playbackState:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (long long)playbackState;
- (id)propertyQueue;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMessageTargetUUID:(id)arg1;
- (void)setPlaybackState:(long long)arg1;
- (void)setPlaybackState:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setUuid:(id)arg1;
- (id)uniqueIdentifier;
- (void)updatePlaybackState:(id)arg1;
- (id)uuid;

@end
