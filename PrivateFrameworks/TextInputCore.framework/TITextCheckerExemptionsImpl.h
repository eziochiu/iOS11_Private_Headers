/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TITextCheckerExemptionsImpl : NSObject {
    NSSet * _addressBookTokens;
    id /* block */  _contactObserver;
    unsigned long long  _observerAssertionCount;
    id  _userDictionaryObserver;
    NSSet * _userDictionaryTokens;
    NSUUID * _userDictionaryUUID;
}

@property (retain) NSSet *addressBookTokens;
@property (retain) NSSet *userDictionaryTokens;
@property (nonatomic, copy) NSUUID *userDictionaryUUID;

+ (id)sharedTextCheckerExemptionsImpl;

- (void)addObserverAssertion;
- (id)addressBookTokens;
- (void)dealloc;
- (void)removeObserverAssertion;
- (void)setAddressBookTokens:(id)arg1;
- (void)setUserDictionaryTokens:(id)arg1;
- (void)setUserDictionaryUUID:(id)arg1;
- (bool)stringIsExemptFromChecker:(id)arg1;
- (id)userDictionaryTokens;
- (id)userDictionaryUUID;

@end
