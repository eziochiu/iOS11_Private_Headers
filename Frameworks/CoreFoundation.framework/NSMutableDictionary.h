/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableDictionary : NSDictionary

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;
+ (id)dictionaryWithSharedKeySet:(id)arg1;

- (void)__addObject:(id)arg1 forKey:(id)arg2;
- (void)__setObject:(id)arg1 forKey:(id)arg2;
- (void)_mutate;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (void)addObjects:(id)arg1 forKeys:(id)arg2;
- (void)addObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)invert;
- (void)removeAllObjects;
- (void)removeEntriesInDictionary:(id)arg1;
- (void)removeEntriesPassingTest:(id /* block */)arg1;
- (void)removeEntriesWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (void)removeKeysForObject:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)replaceObject:(id)arg1 forKey:(id)arg2;
- (void)replaceObjects:(id)arg1 forKeys:(id)arg2;
- (void)replaceObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)setDictionary:(id)arg1;
- (void)setEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;

// Image: /System/Library/CoreServices/RawCamera.bundle/RawCamera

- (id)makeSerializable;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (void)_web_setBool:(bool)arg1 forKey:(id)arg2;
- (void)_web_setInt:(int)arg1 forKey:(id)arg2;
- (void)_web_setObject:(id)arg1 forUncopiedKey:(id)arg2;
- (Class)classForCoder;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_dictionaryWithContentsOfDictionaries:(id)arg1;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (void)un_safeSetObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (void)bs_setSafeObject:(id)arg1 forKey:(id)arg2;
- (id)bs_takeObjectForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport

- (void)logCounter_countLogTypes_internal:(id)arg1;
- (unsigned long long)logCounter_getForSubtype:(id)arg1;
- (void)logCounter_incrementForSubtype:(id)arg1;
- (void)logCounter_incrementForSubtype_internal:(id)arg1;
- (bool)logCounter_isLog:(id)arg1 byKey:(id)arg2 count:(unsigned long long*)arg3 withinLimit:(unsigned long long*)arg4 withOptions:(id)arg5;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

- (void)MCDeepCopyEntriesFromDictionary:(id)arg1;
- (void)MCDeepCopyMissingEntriesFromDictionary:(id)arg1;
- (void)MCDeleteBoolRestriction:(id)arg1;
- (void)MCFilterRestrictionPayloadKeys:(id)arg1;
- (void)MCFixUpRestrictionsDictionaryForMDMReporting;
- (id)MCMutableDictionaryContainingValidatedKeysAndClasses:(id)arg1 removeKeys:(bool)arg2 outError:(id*)arg3;
- (void)MCSetBoolRestriction:(id)arg1 value:(bool)arg2;
- (void)MCSetIntersectionRestriction:(id)arg1 values:(id)arg2;
- (void)MCSetIntersectionSetting:(id)arg1 values:(id)arg2;
- (void)MCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)MCSetUnionRestriction:(id)arg1 values:(id)arg2;
- (void)MCSetUnionSetting:(id)arg1 values:(id)arg2;
- (void)MCSetValueRestriction:(id)arg1 value:(id)arg2;
- (id)MCValidateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 allowZeroLengthString:(bool)arg4 outError:(id*)arg5;
- (id)MCValidateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 outError:(id*)arg4;
- (id)MCValidateAndRemoveNonZeroLengthStringWithKey:(id)arg1 isRequired:(bool)arg2 outError:(id*)arg3;
- (id)MCValidateAndRemoveObjectOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 outError:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (void)_web_setObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)_webkit_setBool:(bool)arg1 forKey:(id)arg2;
- (void)_webkit_setFloat:(float)arg1 forKey:(id)arg2;
- (void)_webkit_setInt:(int)arg1 forKey:(id)arg2;
- (void)_webkit_setLongLong:(long long)arg1 forKey:(id)arg2;
- (void)_webkit_setUnsignedInt:(unsigned int)arg1 forKey:(id)arg2;
- (void)_webkit_setUnsignedLongLong:(unsigned long long)arg1 forKey:(id)arg2;

@end
