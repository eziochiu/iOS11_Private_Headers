/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSDictionary : NSObject <CSCoderEncoder, NSCopying, NSFastEnumeration, NSFetchRequestResult, NSMutableCopying, NSSecureCoding>

@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dictionary;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithDictionary:(id)arg1 copyItems:(bool)arg2;
+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2;
+ (id)dictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
+ (id)dictionaryWithObjectsAndKeys:(id)arg1;
+ (id)newDictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
+ (id)sharedKeySetForKeys:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)__apply:(int (*)arg1 context:(void*)arg2;
- (bool)__getValue:(id*)arg1 forKey:(id)arg2;
- (unsigned long long)_cfTypeID;
- (id)allKeys;
- (id)allKeysForObject:(id)arg1;
- (id)allObjects;
- (id)allValues;
- (bool)containsKey:(id)arg1;
- (bool)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForKey:(id)arg1;
- (unsigned long long)countForObject:(id)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getKeys:(id*)arg1;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(bool)arg2;
- (id)initWithObject:(id)arg1 forKey:(id)arg2;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)initWithObjectsAndKeys:(id)arg1;
- (id)invertedDictionary;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDictionary:(id)arg1;
- (bool)isNSDictionary__;
- (id)keyEnumerator;
- (id)keyOfEntryPassingTest:(id /* block */)arg1;
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)keysOfEntriesPassingTest:(id /* block */)arg1;
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)keysSortedByValueUsingComparator:(id /* block */)arg1;
- (id)keysSortedByValueUsingSelector:(SEL)arg1;
- (id)keysSortedByValueWithOptions:(unsigned long long)arg1 usingComparator:(id /* block */)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;

// Image: /System/Library/CoreServices/RawCamera.bundle/RawCamera

- (id)keypathValueDictionary;
- (id)keypathValueDictionary:(id)arg1;
- (id)makeSerializable;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

- (void)encodeKeysAndValuesWithCSCoder:(id)arg1 filterBlock:(id /* block */)arg2;
- (void)encodeWithCSCoder:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)dictionaryWithContentsOfFile:(id)arg1;
+ (id)dictionaryWithContentsOfURL:(id)arg1;
+ (id)dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)newWithContentsOf:(id)arg1 immutable:(bool)arg2;
+ (bool)supportsSecureCoding;

- (id)_stringToWrite;
- (int)_web_intForKey:(id)arg1;
- (id)_web_numberForKey:(id)arg1;
- (id)_web_objectForMIMEType:(id)arg1;
- (id)_web_stringForKey:(id)arg1;
- (Class)classForCoder;
- (id)descriptionInStringsFileFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)fileCreationDate;
- (bool)fileExtensionHidden;
- (id)fileGroupOwnerAccountID;
- (id)fileGroupOwnerAccountName;
- (unsigned long long)fileGroupOwnerAccountNumber;
- (unsigned int)fileHFSCreatorCode;
- (unsigned int)fileHFSTypeCode;
- (bool)fileIsAppendOnly;
- (bool)fileIsImmutable;
- (id)fileModificationDate;
- (id)fileOwnerAccountID;
- (id)fileOwnerAccountName;
- (unsigned long long)fileOwnerAccountNumber;
- (unsigned long long)filePosixPermissions;
- (unsigned long long)fileSize;
- (unsigned long long)fileSystemFileNumber;
- (long long)fileSystemNumber;
- (id)fileType;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

- (bool)_LS_BoolForKey:(id)arg1;
- (bool)_LS_containsKey:(id)arg1;
- (unsigned long long)_LS_integerForKey:(id)arg1;
- (id)_LS_safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (unsigned long long)_hashQuery;
- (id)_parseQueryForIdentifiers:(id)arg1;
- (id)ls_insertExtensionPointVersion:(id)arg1;
- (id)ls_resolvePlugInKitInfoPlistWithDictionary:(id)arg1;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (struct KeyValueArray { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3; struct Object {} *x4[1]; }*)CA_copyRenderKeyValueArray;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (bool)_boolForKey:(id)arg1;
- (id)_ui_attributesForDictionaryContainingUIStringDrawingKeys;
- (bool)_ui_dictionaryContainsUIStringDrawingKeys;
- (int)_web_messageLineNumber;
- (id)_web_messageSourceURL;
- (id)_web_messageText;
- (int)_web_messageType;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (id)un_nonEmptyCopy;
- (id)un_safeCastObjectForKey:(id)arg1 class:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (bool)bs_boolForKey:(id)arg1;
- (id)bs_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (void)bs_each:(id /* block */)arg1;
- (id)bs_filter:(id /* block */)arg1;
- (id)bs_safeArrayForKey:(id)arg1;
- (id)bs_safeDictionaryForKey:(id)arg1;
- (id)bs_safeNumberForKey:(id)arg1;
- (id)bs_safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (id)bs_safeStringForKey:(id)arg1;
- (id)bs_safeURLForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial

- (bool)bw_containsBuiltInMicAsAnInput;
- (id)bw_dataSourceDictionaryForDesiredMicOrientation:(unsigned int)arg1;
- (unsigned int)bw_optimalMicPolarPattern;
- (bool)matchesUID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration

+ (id)dmlmr_buildVersionKey;
+ (id)dmlmr_lastMigrationResultsWithSuccess:(bool)arg1 buildVersion:(id)arg2;
+ (id)dmlmr_successKey;

- (id)dmlmr_buildVersion;
- (id)dmlmr_success;

// Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences

- (id)invertedDictionary;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCShortenedArray:(id)arg1;
+ (id)MCShortenedData:(id)arg1;
+ (id)MCShortenedDictionary:(id)arg1;
+ (id)MCShortenedObject:(id)arg1;

- (id)MCDeepCopy;
- (id)MCDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MCMutableDeepCopy;
- (id)MCMutableDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MCRetainOptionalNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 invalidDataCode:(long long)arg3 invalidDataErrorString:(id)arg4 outError:(id*)arg5;
- (id)MCRetainOptionalObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 invalidDataCode:(long long)arg4 invalidDataErrorString:(id)arg5 outError:(id*)arg6;
- (id)MCRetainRequiredNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 missingDataCode:(long long)arg3 missingDataErrorString:(id)arg4 invalidDataCode:(long long)arg5 invalidDataErrorString:(id)arg6 outError:(id*)arg7;
- (id)MCRetainRequiredObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 missingDataCode:(long long)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(long long)arg6 invalidDataErrorString:(id)arg7 outError:(id*)arg8;
- (id)MCShortenedPlistDescription;

// Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit

- (id)dictionaryChanging:(id)arg1 to:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)_webkit_arrayForKey:(id)arg1;
- (bool)_webkit_boolForKey:(id)arg1;
- (int)_webkit_intForKey:(id)arg1;
- (id)_webkit_numberForKey:(id)arg1;
- (id)_webkit_objectForMIMEType:(id)arg1;
- (id)_webkit_stringForKey:(id)arg1;

@end
