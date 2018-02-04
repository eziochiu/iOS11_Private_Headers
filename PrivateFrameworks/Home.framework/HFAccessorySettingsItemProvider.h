/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingsItemProvider : HFItemProvider {
    HMAccessoryProfile<HFAccessorySettings> * _accessoryProfile;
    id /* block */  _filter;
    NATreeNode * _parentNode;
    HMAccessorySettingGroup * _settingGroup;
    NSMutableSet * _settingItems;
    NSMutableDictionary * _tupleCache;
}

@property (nonatomic, readonly) HMAccessoryProfile<HFAccessorySettings> *accessoryProfile;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) NATreeNode *parentNode;
@property (nonatomic, readonly) HMAccessorySettingGroup *settingGroup;
@property (nonatomic, retain) NSMutableSet *settingItems;
@property (nonatomic, retain) NSMutableDictionary *tupleCache;

- (void).cxx_destruct;
- (id)accessoryProfile;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)initWithAccessoryProfile:(id)arg1;
- (id)initWithAccessoryProfile:(id)arg1 settingGroup:(id)arg2;
- (id)initWithSettingGroupItem:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)parentNode;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setSettingItems:(id)arg1;
- (void)setTupleCache:(id)arg1;
- (id)settingGroup;
- (id)settingItems;
- (id)tupleCache;

@end
