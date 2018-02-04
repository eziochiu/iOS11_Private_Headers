/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMediaProfile : HMAccessoryProfile <HFAccessorySettings, _HMMediaProfileDelegate> {
    <HMMediaProfileDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMAccessorySettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMMediaProfileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HMMediaSession *mediaSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) HMAccessorySettings *settings;
@property (readonly) HMAccessorySettings *settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_notifyDelegateOfUpdatedSettings:(id)arg1;
- (id)delegate;
- (id)init;
- (id)initWithAccessoryProfile:(id)arg1;
- (void)mediaProfile:(id)arg1 didUpdateMediaSession:(id)arg2;
- (void)mediaProfile:(id)arg1 didUpdateRootGroup:(id)arg2;
- (id)mediaSession;
- (id)propertyQueue;
- (void)setDelegate:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
