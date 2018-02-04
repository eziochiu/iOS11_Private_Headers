/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryCrypto : NSObject {
    NSData * _cryptographicKey;
    NSData * _salt;
}

@property (nonatomic, readonly) NSData *salt;

+ (void)upgradeKeychainIfNeeded;

- (void).cxx_destruct;
- (id)_createCryptographicKey;
- (id)_createOrLoadCryptographicKey;
- (id)decryptDictionary:(id)arg1;
- (id)encryptDictionary:(id)arg1;
- (id)init;
- (id)initWithCryptographicKey:(id)arg1 salt:(id)arg2;
- (id)salt;

@end
