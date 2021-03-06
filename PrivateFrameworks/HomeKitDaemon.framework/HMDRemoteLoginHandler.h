/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteLoginHandler : HMFObject <HMFLogging, NSSecureCoding> {
    HMDAppleMediaAccessory * _accessory;
    HMDRemoteLoginAnisetteDataHandler * _anisetteDataHandler;
    HMDRemoteLoginInitiator * _initiator;
    ACAccount * _loggedInAccount;
    HMDRemoteLoginReceiver * _receiver;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) HMDAppleMediaAccessory *accessory;
@property (nonatomic, readonly) HMDRemoteLoginAnisetteDataHandler *anisetteDataHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDRemoteLoginInitiator *initiator;
@property (nonatomic, retain) ACAccount *loggedInAccount;
@property (nonatomic, readonly) HMDRemoteLoginReceiver *receiver;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)logCategory;
+ (id)remoteMessages;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleRemoteLoginAccount:(id)arg1 message:(id)arg2;
- (void)_initialize;
- (void)_updateLoggedInAccount:(id)arg1;
- (id)accessory;
- (id)anisetteDataHandler;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessory:(id)arg1 loggedInAccountData:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initiator;
- (id)logIdentifier;
- (id)loggedInAccount;
- (id)receiver;
- (void)registerForMessages;
- (void)setLoggedInAccount:(id)arg1;
- (id)uuid;

@end
