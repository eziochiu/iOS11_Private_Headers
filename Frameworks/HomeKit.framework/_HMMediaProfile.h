/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMMediaProfile : _HMAccessoryProfile {
    HMAccessorySettings * _accessorySettings;
    <_HMMediaProfileDelegate> * _delegate;
    HMMediaSession * _mediaSession;
    _HMAccessorySettingGroup * _rootGroup;
}

@property HMAccessorySettings *accessorySettings;
@property <_HMMediaProfileDelegate> *delegate;
@property (retain) HMMediaSession *mediaSession;
@property (readonly) _HMAccessorySettingGroup *rootGroup;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleRootSettingsUpdated:(id)arg1;
- (void)_notifyDelegateOfUpdatedMediaSession:(id)arg1;
- (void)_registerNotificationHandlers;
- (id)accessorySettings;
- (void)configureWithAccessory:(id)arg1 home:(id)arg2 context:(id)arg3;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mediaSession;
- (void)notifyDelegateOfUpdatedRootGroup:(id)arg1;
- (id)rootGroup;
- (void)setAccessorySettings:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMediaSession:(id)arg1;
- (void)setRootGroup:(id)arg1;

@end
