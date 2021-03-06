/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFUserSuppliedNetwork : NSObject {
    struct __SecIdentity { } * _TLSIdentity;
    NSString * _password;
    long long  _security;
    NSString * _ssid;
    NSString * _username;
}

@property (nonatomic) struct __SecIdentity { }*TLSIdentity;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) long long security;
@property (nonatomic, copy) NSString *ssid;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (struct __SecIdentity { }*)TLSIdentity;
- (id)password;
- (long long)security;
- (void)setPassword:(id)arg1;
- (void)setSecurity:(long long)arg1;
- (void)setSsid:(id)arg1;
- (void)setTLSIdentity:(struct __SecIdentity { }*)arg1;
- (void)setUsername:(id)arg1;
- (id)ssid;
- (id)username;

@end
