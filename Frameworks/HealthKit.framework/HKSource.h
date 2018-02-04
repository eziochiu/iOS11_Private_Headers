/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSource : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    bool  _localDevice;
    NSString * _name;
    unsigned long long  _options;
    NSString * _productType;
    NSNumber * _sourceID;
}

@property (readonly) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_isLocalDevice, setter=_setLocalDevice:, nonatomic) bool localDevice;
@property (readonly) NSString *name;
@property (getter=_options, setter=_setOptions:, nonatomic) unsigned long long options;
@property (getter=_productType, setter=_setProductType:, nonatomic, retain) NSString *productType;
@property (getter=_sourceID, setter=_setSourceID:, nonatomic, retain) NSNumber *sourceID;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_connectedGymSource;
+ (id)_currentSourceProductType:(bool)arg1;
+ (id)_generateIdentifierForAppleDevice;
+ (id)_generateIdentifierForAppleDeviceWithUUID:(id)arg1;
+ (id)_localDeviceSource;
+ (bool)_representsCurrentDeviceWithBundleIdentifier:(id)arg1;
+ (id)_sourceBundleIdentifierWithEntitlements:(id)arg1 processBundleIdentifier:(id)arg2 isExtension:(bool)arg3;
+ (id)_sourceNameWithRepresentsCurrentDevice:(bool)arg1 defaultSource:(bool)arg2;
+ (id)_sourceWithBundleIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 options:(unsigned long long)arg4;
+ (id)defaultSource;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_hasFirstPartyBundleID;
- (id)_init;
- (bool)_isAppleDevice;
- (bool)_isAppleWatch;
- (bool)_isApplication;
- (bool)_isConnectedGymBundleID;
- (bool)_isConnectedGymSource;
- (bool)_isHidden;
- (bool)_isLocalDevice;
- (bool)_isPreferredSource;
- (unsigned long long)_options;
- (id)_productType;
- (bool)_requiresAuthorization;
- (void)_setBundleIdentifier:(id)arg1;
- (void)_setLocalDevice:(bool)arg1;
- (void)_setName:(id)arg1;
- (void)_setOptions:(unsigned long long)arg1;
- (void)_setProductType:(id)arg1;
- (void)_setSourceID:(id)arg1;
- (id)_sourceID;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end