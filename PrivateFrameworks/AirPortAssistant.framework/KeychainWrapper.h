/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface KeychainWrapper : NSObject {
    NSString * _accountName;
    NSLock * _lock;
    NSString * _serviceName;
}

@property (nonatomic, copy) NSString *accountName;
@property (nonatomic, retain) NSLock *lock;
@property (nonatomic, copy) NSString *serviceName;

+ (id)keychainPasswordForMACAddress:(id)arg1;
+ (id)keychainWrapperWithMACAddress:(id)arg1;
+ (void)removeKeychainPasswordForMACAddress:(id)arg1;

- (id)accountName;
- (int)addGenericPassword:(id)arg1 withLabel:(id)arg2 andDescription:(id)arg3;
- (void)dealloc;
- (id)genericPassword;
- (id)genericPasswordQuery;
- (id)getGenericPassword;
- (id)getPasswordFromQuery:(id)arg1;
- (id)initWithAccountName:(id)arg1 serviceName:(id)arg2;
- (id)lock;
- (void)removeGenericPassword;
- (id)serviceName;
- (void)setAccountName:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setServiceName:(id)arg1;

@end