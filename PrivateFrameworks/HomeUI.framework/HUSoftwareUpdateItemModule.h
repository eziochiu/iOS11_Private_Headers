/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSoftwareUpdateItemModule : HFItemModule {
    HMAccessory * _accessory;
    HUSoftwareUpdateActionAndProgressItem * _actionAndProgressItem;
    HMHome * _home;
    NSSet * _itemProviders;
    HUSoftwareUpdateInfoItemProvider * _softwareUpdateInfoItemProvider;
    HFItem<HFAccessoryVendor> * _sourceItem;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, retain) HUSoftwareUpdateActionAndProgressItem *actionAndProgressItem;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HUSoftwareUpdateInfoItemProvider *softwareUpdateInfoItemProvider;
@property (nonatomic, readonly) HFItem<HFAccessoryVendor> *sourceItem;

- (void).cxx_destruct;
- (id)accessory;
- (id)actionAndProgressItem;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3;
- (id)itemProviders;
- (void)setActionAndProgressItem:(id)arg1;
- (void)setSoftwareUpdateInfoItemProvider:(id)arg1;
- (id)softwareUpdateInfoItemProvider;
- (id)sourceItem;

@end
