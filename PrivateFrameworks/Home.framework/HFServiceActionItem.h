/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceActionItem : HFItem <HFServiceLikeItem> {
    NSSet * _actionBuilders;
    NSSet * _actions;
    HFItem<HFServiceLikeItem> * _containingItem;
    HMHome * _home;
}

@property (nonatomic, retain) NSSet *actionBuilders;
@property (nonatomic, retain) NSSet *actions;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *containingItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

+ (id)_percentFormatter;

- (void).cxx_destruct;
- (id)_characteristicTypeToTargetValuesMap;
- (void)_getDesiredItemDescription:(id*)arg1 controlDescription:(id*)arg2 withSourceItemResults:(id)arg3;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)actionBuilders;
- (id)actions;
- (void)addAction:(id)arg1;
- (void)addActionBuilder:(id)arg1;
- (id)allControlItems;
- (id)containingItem;
- (id)controlPanelItems;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)home;
- (id)homeKitObject;
- (id)incrementalStateControlItem;
- (id)init;
- (id)initWithHome:(id)arg1 containingItem:(id)arg2;
- (id)primaryStateControlItem;
- (id)serviceActionItemForChildServiceItem:(id)arg1;
- (id)services;
- (void)setActionBuilders:(id)arg1;
- (void)setActions:(id)arg1;
- (id)valueSource;

@end