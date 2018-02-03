/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSUserDefaults : NSObject {
    struct __CFString { } * _container_;
    struct __CFString { } * _identifier_;
    id  _kvo_;
    void * _reserved;
}

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

- (struct __CFString { }*)_container;
- (struct __CFString { }*)_identifier;
- (bool)_observingCFPreferences;
- (void)_setContainer:(struct __CFURL { }*)arg1;
- (void)_setIdentifier:(struct __CFString { }*)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_copyStandardUserDefaultsIfPresent;
+ (void)_ensureAndLockPreferredLanguageLock;
+ (void)_web_addDefaultsChangeObserver;
+ (void)_web_defaultsDidChange;
+ (id)_web_preferredLanguageCode;
+ (void)resetStandardUserDefaults;
+ (void)setStandardUserDefaults:(id)arg1;
+ (id)standardUserDefaults;

- (id)URLForKey:(id)arg1;
- (id)_initWithSuiteName:(id)arg1 container:(id)arg2;
- (void)addSuiteNamed:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (double)doubleForKey:(id)arg1;
- (void)finalize;
- (float)floatForKey:(id)arg1;
- (id)init;
- (id)initWithSuiteName:(id)arg1;
- (id)initWithUser:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (long long)longForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 inDomain:(id)arg2;
- (bool)objectIsForcedForKey:(id)arg1;
- (bool)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2;
- (id)persistentDomainForName:(id)arg1;
- (id)persistentDomainNames;
- (void)registerDefaults:(id)arg1;
- (oneway void)release;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 inDomain:(id)arg2;
- (void)removePersistentDomainForName:(id)arg1;
- (void)removeSuiteNamed:(id)arg1;
- (void)removeVolatileDomainForName:(id)arg1;
- (id)searchList;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setLong:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (void)setObservationInfo:(void*)arg1;
- (void)setPersistentDomain:(id)arg1 forName:(id)arg2;
- (void)setSearchList:(id)arg1;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setVolatileDomain:(id)arg1 forName:(id)arg2;
- (id)stringArrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (bool)synchronize;
- (id)valueForKey:(id)arg1;
- (id)volatileDomainForName:(id)arg1;
- (id)volatileDomainNames;

// Image: /System/Library/Frameworks/UIKit.framework/Frameworks/DocumentManager.framework/DocumentManager

- (id)DOC_roleSpecificKeyForKey:(id)arg1 configuration:(id)arg2;
- (void)DOC_setObject:(id)arg1 forRoleKey:(id)arg2 configuation:(id)arg3;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (bool)bs_defaultExists:(id)arg1;
- (id)bs_domain;
- (void)bs_setDomain:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_webkit_preferredLanguageCode;

@end
