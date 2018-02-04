/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAGrandSlamSigner : NSObject {
    ACAccountStore * _accountStore;
    NSString * _appTokenID;
    ACAccount * _grandSlamAccount;
    NSString * _headerFieldKey;
    bool  _useAltDSID;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) ACAccount *grandSlamAccount;
@property (nonatomic, retain) NSString *headerFieldKey;
@property (nonatomic) bool useAltDSID;

- (void).cxx_destruct;
- (id)accountStore;
- (id)grandSlamAccount;
- (id)headerFieldKey;
- (id)initWithAccountStore:(id)arg1 grandSlamAccount:(id)arg2 appTokenID:(id)arg3;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 appTokenID:(id)arg4;
- (void)setHeaderFieldKey:(id)arg1;
- (void)setUseAltDSID:(bool)arg1;
- (bool)signURLRequest:(id)arg1;
- (bool)signURLRequest:(id)arg1 isUserInitiated:(bool)arg2;
- (bool)useAltDSID;

@end