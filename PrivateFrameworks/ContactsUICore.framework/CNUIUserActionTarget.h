/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIUserActionTarget : NSObject {
    NSString * _actionType;
    NSString * _bundleIdentifier;
    <CNTUCallProvider> * _callProvider;
    NSString * _name;
    NSString * _teamIdentifier;
}

@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (retain) <CNTUCallProvider> *callProvider;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *teamIdentifier;

+ (id)descriptorForRequiredKeysForActionDiscovering;
+ (id)targetForEmailWithMail;
+ (id)targetForPayWithWallet;
+ (id)targetForSendMessageIntentWithAppProxy:(id)arg1;
+ (id)targetForStartAudioCallIntentWithAppProxy:(id)arg1;
+ (id)targetForStartVideoCallIntentWithAppProxy:(id)arg1;
+ (id)targetForTextWithMessages;
+ (id)targetForTextWithSkype;
+ (id)targetForVideoWithCallProvider:(id)arg1;
+ (id)targetForVideoWithFaceTime;
+ (id)targetForVideoWithSkype;
+ (id)targetForVoiceWithCallProvider:(id)arg1;
+ (id)targetForVoiceWithFaceTime;
+ (id)targetForVoiceWithSkype;
+ (id)targetForVoiceWithTelephony;

- (void).cxx_destruct;
- (id)actionType;
- (id)actionsForContact:(id)arg1 discoveringEnvironment:(id)arg2;
- (id)actionsForEmailAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForInstantMessageAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForSocialProfiles:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)bundleIdentifier;
- (id)callProvider;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1 bundleIdentifier:(id)arg2 teamIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCallProvider:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTeamIdentifier:(id)arg1;
- (id)teamIdentifier;

@end