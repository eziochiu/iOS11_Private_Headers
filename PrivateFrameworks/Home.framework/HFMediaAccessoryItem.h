/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMediaAccessoryItem : HFItem <HFAccessorySettings, HFHomeKitItemProtocol, HFItemBuilderItem, HFServiceLikeBuilderCreating, HFServiceLikeItem> {
    HMAccessory * _accessory;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) HMMediaProfile *mediaProfile;
@property (nonatomic, readonly) HMAccessorySettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (void)_decorateOutcomeForPlaybackState:(id)arg1;
- (void)_decorateOutcomeWithAccessorySpecificKeys:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)accessory;
- (id)allControlItems;
- (id)controlPanelItems;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)homeKitObject;
- (id)incrementalStateControlItem;
- (id)init;
- (id)initWithValueSource:(id)arg1 accessory:(id)arg2;
- (id)mediaProfile;
- (id)primaryStateControlItem;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)services;
- (id)settings;
- (id)togglePlayState;
- (id)valueSource;

@end
