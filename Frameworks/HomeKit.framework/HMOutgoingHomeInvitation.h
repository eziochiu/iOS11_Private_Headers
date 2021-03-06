/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMOutgoingHomeInvitation : HMHomeInvitation <HFPrettyDescription, HFStateDumpSerializable> {
    HMThreadSafeMutableArrayCollection * _accessoryInvitations;
    HMUser * _invitee;
}

@property (nonatomic, readonly) NSArray *accessoryInvitations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMUser *invitee;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)homeInvitationsFromData:(id)arg1 home:(id)arg2;
+ (id)homeInvitationsFromEncodedData:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_cancelInviteWithCompletionHandler:(id /* block */)arg1;
- (void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3;
- (bool)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)accessoryInvitations;
- (void)cancelInviteWithCompletionHandler:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvitationData:(id)arg1 home:(id)arg2;
- (id)invitee;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;

@end
