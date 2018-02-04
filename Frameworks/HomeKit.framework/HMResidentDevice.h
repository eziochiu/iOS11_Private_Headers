/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMResidentDevice : HMDevice <HFPrettyDescription, HFStateDumpSerializable, HMObjectMerge, NSSecureCoding> {
    NSUUID * _accountIdentifier;
    unsigned long long  _capabilities;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMResidentDeviceDelegate> * _delegate;
    HMDelegateCaller * _delegateCaller;
    bool  _enabled;
    HMHome * _home;
    HMFMessageDispatcher * _messageDispatcher;
    unsigned long long  _status;
}

@property (nonatomic, copy) NSUUID *accountIdentifier;
@property unsigned long long capabilities;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property <HMResidentDeviceDelegate> *delegate;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled) bool enabled;
@property (readonly) unsigned long long hash;
@property HMHome *home;
@property (nonatomic, retain) HMFMessageDispatcher *messageDispatcher;
@property unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configure:(id)arg1 messageDispatcher:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)accountIdentifier;
- (unsigned long long)capabilities;
- (id)clientQueue;
- (id)delegate;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)messageDispatcher;
- (void)setAccountIdentifier:(id)arg1;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;
- (void)updatedEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;

@end
