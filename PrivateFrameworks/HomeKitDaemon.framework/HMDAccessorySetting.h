/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessorySetting : HMFObject <HMDBackingStoreObjectProtocol, HMFLogging, HMFMessageReceiver, NSSecureCoding> {
    HMDAccessory * _accessory;
    NSObject<OS_dispatch_queue> * _clientQueue;
    unsigned long long  _configurationVersion;
    NSMutableArray * _constraints;
    HMDAccessorySettingGroup * _group;
    NSUUID * _identifier;
    HMFMessageDispatcher * _messageDispatcher;
    NSString * _name;
    unsigned long long  _properties;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    long long  _type;
    id  _value;
}

@property (nonatomic, retain) HMDAccessory *accessory;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) unsigned long long configurationVersion;
@property (readonly, copy) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property HMDAccessorySettingGroup *group;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (nonatomic, retain) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) HMDAccessorySettingModel *model;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long properties;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (readonly) long long type;
@property (copy) id value;

+ (id)logCategory;
+ (id)supportedConstraintClasses;
+ (id)supportedValueClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__init;
- (void)_handleAddConstraint:(id)arg1;
- (void)_handleRemoveConstraint:(id)arg1;
- (void)_handleUpdateValue:(id)arg1;
- (void)_relayRequestMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_relayUpdateValue:(id)arg1 message:(id)arg2;
- (bool)_shouldAcceptMessage:(id)arg1;
- (id)accessory;
- (void)addConstraint:(id)arg1;
- (id)clientQueue;
- (unsigned long long)configurationVersion;
- (void)configureWithAccessory:(id)arg1 messageDispatcher:(id)arg2;
- (id)constraints;
- (void)encodeWithCoder:(id)arg1;
- (id)group;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValidValue:(id)arg1;
- (id)logIdentifier;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)model;
- (id)name;
- (unsigned long long)properties;
- (id)propertyQueue;
- (void)registerForMessages;
- (id)remoteMessageDestination;
- (void)removeConstraint:(id)arg1;
- (void)setAccessory:(id)arg1;
- (void)setConfigurationVersion:(unsigned long long)arg1;
- (void)setGroup:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setValue:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (long long)type;
- (id)value;
- (id)valueUpdateNotificationWithMessage:(id)arg1;

@end
