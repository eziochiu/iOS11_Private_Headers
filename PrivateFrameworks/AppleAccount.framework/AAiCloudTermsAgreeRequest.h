/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAiCloudTermsAgreeRequest : AARequest {
    ACAccount * _account;
    ACAccountStore * _accountStore;
}

@property (nonatomic, retain) ACAccount *account;

- (void).cxx_destruct;
- (id)account;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (void)setAccount:(id)arg1;
- (id)urlRequest;

@end
