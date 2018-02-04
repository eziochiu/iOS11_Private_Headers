/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceIdentity.framework/DeviceIdentity
 */

@interface DeviceType : NSObject {
    NSString * _device_class;
    bool  _has_telephony;
    bool  _is_fpga;
    NSString * _product_type;
    bool  _should_hactivate;
}

@property (nonatomic, copy) NSString *device_class;
@property (nonatomic) bool has_telephony;
@property (nonatomic) bool is_fpga;
@property (nonatomic, copy) NSString *product_type;
@property (nonatomic) bool should_hactivate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)copyDeviceTreeInt:(id)arg1 key:(id)arg2 defaultValue:(int)arg3;
- (id)copyDeviceTreeProperty:(id)arg1 key:(id)arg2;
- (id)device_class;
- (bool)has_telephony;
- (bool)is_fpga;
- (id)product_type;
- (void)setDevice_class:(id)arg1;
- (void)setHas_telephony:(bool)arg1;
- (void)setIs_fpga:(bool)arg1;
- (void)setProduct_type:(id)arg1;
- (void)setShould_hactivate:(bool)arg1;
- (bool)should_hactivate;

@end
