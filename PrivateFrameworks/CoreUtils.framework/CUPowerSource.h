/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUPowerSource : NSObject <NSSecureCoding> {
    NSString * _accessoryID;
    long long  _adapterFamilyCode;
    NSString * _adapterName;
    double  _chargeLevel;
    bool  _charging;
    long long  _familyCode;
    NSString * _groupID;
    NSDictionary * _ioKitAdapterDescription;
    NSDictionary * _ioKitDescription;
    NSString * _name;
    NSString * _partID;
    bool  _present;
    long long  _productID;
    struct OpaqueIOPSPowerSourceID { } * _psID;
    long long  _sourceID;
    NSString * _state;
    NSString * _transportType;
    NSString * _type;
    long long  _vendorID;
}

@property (nonatomic, copy) NSString *accessoryID;
@property (nonatomic) long long adapterFamilyCode;
@property (nonatomic, copy) NSString *adapterName;
@property (nonatomic) double chargeLevel;
@property (nonatomic) bool charging;
@property (nonatomic) long long familyCode;
@property (nonatomic, copy) NSString *groupID;
@property (nonatomic, copy) NSDictionary *ioKitAdapterDescription;
@property (nonatomic, copy) NSDictionary *ioKitDescription;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *partID;
@property (nonatomic) bool present;
@property (nonatomic) long long productID;
@property (nonatomic) long long sourceID;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSString *transportType;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) long long vendorID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryID;
- (long long)adapterFamilyCode;
- (id)adapterName;
- (double)chargeLevel;
- (bool)charging;
- (void)dealloc;
- (id)description;
- (id)detailedDescription;
- (void)encodeWithCoder:(id)arg1;
- (long long)familyCode;
- (id)groupID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (id)ioKitAdapterDescription;
- (id)ioKitDescription;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)partID;
- (bool)present;
- (long long)productID;
- (int)publish;
- (void)setAccessoryID:(id)arg1;
- (void)setAdapterFamilyCode:(long long)arg1;
- (void)setAdapterName:(id)arg1;
- (void)setChargeLevel:(double)arg1;
- (void)setCharging:(bool)arg1;
- (void)setFamilyCode:(long long)arg1;
- (void)setGroupID:(id)arg1;
- (void)setIoKitAdapterDescription:(id)arg1;
- (void)setIoKitDescription:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPartID:(id)arg1;
- (void)setPresent:(bool)arg1;
- (void)setProductID:(long long)arg1;
- (void)setSourceID:(long long)arg1;
- (void)setState:(id)arg1;
- (void)setTransportType:(id)arg1;
- (void)setType:(id)arg1;
- (void)setVendorID:(long long)arg1;
- (long long)sourceID;
- (id)state;
- (id)transportType;
- (id)type;
- (unsigned int)updateWithPowerAdapterDetails:(id)arg1;
- (unsigned int)updateWithPowerSourceDescription:(id)arg1;
- (long long)vendorID;

@end
