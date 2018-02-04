/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAEmailLookupRequest : AARequest {
    ACAccount * _account;
    NSArray * _emailAddresses;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSArray *emailAddresses;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)account;
- (id)emailAddresses;
- (id)initWithAccount:(id)arg1 emailAddresses:(id)arg2;
- (id)initWithURLString:(id)arg1 account:(id)arg2 emailAddresses:(id)arg3;
- (void)setAccount:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (id)urlCredential;
- (id)urlRequest;
- (id)urlString;

@end
