/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLFollowUpItem : NSObject <NSSecureCoding> {
    NSArray * _actions;
    NSString * _clientIdentifier;
    NSString * _delegateMachServiceName;
    unsigned long long  _displayStyle;
    NSString * _extensionIdentifier;
    NSString * _groupIdentifier;
    NSString * _informativeText;
    FLFollowUpNotification * _notification;
    bool  _shouldPersistWhenActivated;
    bool  _shouldPersistWhenDismissed;
    bool  _showInSettings;
    unsigned long long  _sqlID;
    NSString * _title;
    NSString * _uniqueIdentifier;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSData *_userInfoData;
@property (copy) NSArray *actions;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, copy) NSString *delegateMachServiceName;
@property unsigned long long displayStyle;
@property (copy) NSString *extensionIdentifier;
@property (nonatomic, copy) NSString *groupIdentifier;
@property (nonatomic, copy) NSString *informativeText;
@property (nonatomic, retain) FLFollowUpNotification *notification;
@property bool shouldPersistWhenActivated;
@property bool shouldPersistWhenDismissed;
@property (nonatomic) bool showInSettings;
@property (nonatomic) unsigned long long sqlID;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (copy) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_userInfoData;
- (id)actions;
- (id)clientIdentifier;
- (id)delegateMachServiceName;
- (id)description;
- (unsigned long long)displayStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionIdentifier;
- (id)groupIdentifier;
- (id)informativeText;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isHSA2LoginItem;
- (bool)isHSA2PasswordResetItem;
- (id)notification;
- (id)redirectURLWithAction:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setDelegateMachServiceName:(id)arg1;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (void)setExtensionIdentifier:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setInformativeText:(id)arg1;
- (void)setNotification:(id)arg1;
- (void)setShouldPersistWhenActivated:(bool)arg1;
- (void)setShouldPersistWhenDismissed:(bool)arg1;
- (void)setShowInSettings:(bool)arg1;
- (void)setSqlID:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)set_userInfoData:(id)arg1;
- (bool)shouldPersistWhenActivated;
- (bool)shouldPersistWhenDismissed;
- (bool)showInSettings;
- (unsigned long long)sqlID;
- (id)title;
- (id)uniqueIdentifier;
- (id)userInfo;

@end
