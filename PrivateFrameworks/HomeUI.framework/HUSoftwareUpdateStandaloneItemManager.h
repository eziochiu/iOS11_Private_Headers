/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSoftwareUpdateStandaloneItemManager : HFItemManager <HFHomeObserver> {
    HFItem * _autoUpdateItem;
    HUSoftwareUpdateFetchItem * _fetchItem;
    NAFuture * _softwareUpdateFetchFuture;
    HUSoftwareUpdateItemModule * _softwareUpdateModule;
}

@property (nonatomic, retain) HFItem *autoUpdateItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUSoftwareUpdateFetchItem *fetchItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NAFuture *softwareUpdateFetchFuture;
@property (nonatomic, retain) HUSoftwareUpdateItemModule *softwareUpdateModule;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)autoUpdateItem;
- (id)fetchItem;
- (void)home:(id)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(bool)arg2;
- (id)initWithDelegate:(id)arg1 softwareUpdateFetchFuture:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (void)setAutoUpdateItem:(id)arg1;
- (void)setFetchItem:(id)arg1;
- (void)setSoftwareUpdateFetchFuture:(id)arg1;
- (void)setSoftwareUpdateModule:(id)arg1;
- (id)softwareUpdateFetchFuture;
- (id)softwareUpdateModule;

@end
