/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMSoftwareUpdate : NSObject <HFPrettyDescription, HFStateDumpSerializable, HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    HMAccessory * _accessory;
    _HMContext * _context;
    <HMSoftwareUpdateDelegate> * _delegate;
    unsigned long long  _downloadSize;
    NSUUID * _identifier;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    long long  _state;
    NSUUID * _uniqueIdentifier;
    HMFSoftwareVersion * _version;
}

@property HMAccessory *accessory;
@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property <HMSoftwareUpdateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long downloadSize;
@property (readonly) unsigned long long hash;
@property (copy) NSUUID *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, copy) HMFSoftwareVersion *version;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleUpdatedState:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (id)accessory;
- (void)configureWithContext:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (unsigned long long)downloadSize;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2;
- (id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)propertyQueue;
- (void)setAccessory:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)uniqueIdentifier;
- (void)updateState:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)version;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;

@end
