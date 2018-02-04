/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSourceItemManager : HFItemManager {
    NSSet * _controlItems;
}

@property (nonatomic, copy) NSSet *controlItems;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)controlItems;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 controlItems:(id)arg3;
- (void)setControlItems:(id)arg1;

@end
