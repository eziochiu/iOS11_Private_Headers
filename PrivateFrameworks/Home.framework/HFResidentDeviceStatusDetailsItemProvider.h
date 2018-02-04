/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFResidentDeviceStatusDetailsItemProvider : HFItemProvider {
    HMHome * _home;
    NSMutableSet * _residentDeviceItems;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSMutableSet *residentDeviceItems;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)residentDeviceItems;
- (void)setResidentDeviceItems:(id)arg1;

@end
