/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUnassociatedAppleMediaAccessory : HMDUnassociatedMediaAccessory {
    HMDDevice * _device;
}

@property (retain) HMDDevice *device;

+ (Class)modelClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;
- (id)descriptionWithPointer:(bool)arg1 additionalDescription:(id)arg2;
- (id)device;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 device:(id)arg2 messageDispatcher:(id)arg3;
- (void)setDevice:(id)arg1;

@end
