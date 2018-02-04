/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingAdapterManager : NSObject {
    HMAccessoryProfile<HFAccessorySettings> * _accessoryProfile;
    NSMutableDictionary * _adaptersByID;
}

@property (nonatomic, readonly) HMAccessoryProfile<HFAccessorySettings> *accessoryProfile;
@property (nonatomic, readonly) NSMutableDictionary *adaptersByID;

- (void).cxx_destruct;
- (id)_createAdapterForIdentifier:(id)arg1;
- (id)accessoryProfile;
- (id)adapterForIdentifier:(id)arg1;
- (id)adaptersByID;
- (id)initWithAccessoryProfile:(id)arg1;

@end
