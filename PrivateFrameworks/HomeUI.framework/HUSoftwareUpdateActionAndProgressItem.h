/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSoftwareUpdateActionAndProgressItem : HFItem {
    HMAccessory * _accessory;
    HMHome * _home;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)_filteredAccessories;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessory;
- (id)home;
- (id)init;
- (id)initWithAccessory:(id)arg1;
- (id)initWithHome:(id)arg1;

@end
