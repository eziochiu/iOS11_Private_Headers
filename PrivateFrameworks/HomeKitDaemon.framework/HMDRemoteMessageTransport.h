/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteMessageTransport : HMFMessageTransport <HMFLogging> {
    HMDAccountRegistry * _accountRegistry;
    long long  _qualityOfService;
    bool  _secure;
}

@property (nonatomic, readonly) HMDAccountRegistry *accountRegistry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long qualityOfService;
@property (getter=isSecure, nonatomic, readonly) bool secure;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)remoteMessageFromMessage:(id)arg1 secure:(bool)arg2 accountRegistry:(id)arg3;
+ (unsigned long long)restriction;

- (void).cxx_destruct;
- (id)accountRegistry;
- (bool)canSendMessage:(id)arg1;
- (long long)compareCapability:(id)arg1 key:(id)arg2 withCapability:(id)arg3;
- (bool)doesResponse:(id)arg1 matchAllCapabilities:(id)arg2;
- (id)init;
- (id)initWithAccountRegistry:(id)arg1;
- (bool)isSecure;
- (id)matchResponse:(id)arg1 requestedCapabilities:(id)arg2;
- (void)postDidReceiveRemoteMessageWithNoListenerFromDevice:(id)arg1;
- (long long)qualityOfService;
- (id)remoteMessageFromMessage:(id)arg1;
- (void)start;

@end
