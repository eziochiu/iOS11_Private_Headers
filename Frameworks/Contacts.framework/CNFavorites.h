/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNFavorites : NSObject {
    bool  _autoUpdating;
    bool  _dirty;
    NSMutableArray * _entries;
    bool  _needsReload;
    bool  _postCount;
    CNContactStore * _store;
    NSMutableDictionary * _uidToEntry;
}

@property (nonatomic, readonly) bool autoUpdating;
@property (nonatomic) bool dirty;
@property (nonatomic, readonly) NSArray *entries;
@property (getter=isFull, readonly) bool full;
@property (nonatomic) bool needsReload;
@property (nonatomic) bool postCount;
@property (nonatomic, retain) CNContactStore *store;
@property (nonatomic, retain) NSMutableDictionary *uidToEntry;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)favoritesPath;
+ (void)flushSingleton;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addEntryToMap:(id)arg1;
- (void)_delayedLookup;
- (void)_entriesChangedExternally;
- (id)_entryDictionaries;
- (void)_entryIdentityChanged:(id)arg1;
- (bool)_isValueForEntry:(id)arg1 equalToValue:(id)arg2;
- (void)_postChangeNotification;
- (void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2;
- (void)_scheduleSave;
- (bool)_writeFavoritesToFile:(id)arg1;
- (void)addEntry:(id)arg1;
- (bool)addEntryForContact:(id)arg1 propertyKey:(id)arg2 withIdentifier:(id)arg3;
- (bool)autoUpdating;
- (void)clearState;
- (bool)containsEntryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4;
- (void)dealloc;
- (bool)dirty;
- (id)entries;
- (id)entriesForContact:(id)arg1;
- (id)entriesForContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5;
- (id)entriesForContacts:(id)arg1;
- (id)entriesWithRecaching:(bool)arg1;
- (bool)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2;
- (id)entryWithIdentifier:(id)arg1 forContact:(id)arg2;
- (id)entryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4;
- (id)init;
- (id)initNonUpdatingReadonlyInstanceWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1 autoUpdating:(bool)arg2;
- (bool)isFull;
- (void)loadEntriesIfNecessaryAndRecache:(bool)arg1;
- (void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (bool)needsReload;
- (bool)postCount;
- (void)recacheIdentitiesSoon;
- (void)removeAllEntries;
- (void)removeEntryAtIndex:(long long)arg1;
- (void)save;
- (void)saveImmediately;
- (void)setDirty:(bool)arg1;
- (void)setNeedsReload:(bool)arg1;
- (void)setPostCount:(bool)arg1;
- (void)setStore:(id)arg1;
- (void)setUidToEntry:(id)arg1;
- (id)store;
- (id)synchronousRemoteObjectProxyForContactsXPCService;
- (id)uidToEntry;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

- (id)entriesMatchingPredicate:(id)arg1;

@end