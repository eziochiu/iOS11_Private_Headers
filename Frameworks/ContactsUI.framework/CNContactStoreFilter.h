/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactStoreFilter : CNContactFilter {
    NSSet * _containerIdentifiers;
    NSSet * _groupIdentifiers;
    bool  _isServerFilter;
}

@property (nonatomic, retain) NSSet *containerIdentifiers;
@property (nonatomic, retain) NSSet *groupIdentifiers;
@property (nonatomic) bool isServerFilter;
@property (nonatomic, readonly) bool showsEverything;

+ (id)contactStoreFilterFromPreferencesWithContactStore:(id)arg1;
+ (bool)getContainerIdentifiers:(id*)arg1 groupIdentifiers:(id*)arg2 serverFilter:(bool*)arg3 fromLegacyDictionary:(id)arg4 contactStore:(id)arg5;
+ (bool)getContainerIdentifiers:(id*)arg1 groupIdentifiers:(id*)arg2 serverFilter:(bool*)arg3 fromPreSundanceDictionary:(id)arg4 contactStore:(id)arg5;
+ (bool)getContainerIdentifiers:(id*)arg1 groupIdentifiers:(id*)arg2 serverFilter:(bool*)arg3 fromSundanceToOkemoAndAddressBookUIDictionary:(id)arg4 contactStore:(id)arg5;

- (void).cxx_destruct;
- (void)addAddressBookUIKeysToDictionaryRepresentation:(id)arg1 withAllContainers:(id)arg2 excludedContainers:(id)arg3 excludedGroups:(id)arg4;
- (id)containerIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithContactStore:(id)arg1;
- (id)groupIdentifiers;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 contactStore:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isServerFilter;
- (id)predicate;
- (void)saveToPreferencesWithContactStore:(id)arg1;
- (void)setContainerIdentifiers:(id)arg1;
- (void)setGroupIdentifiers:(id)arg1;
- (void)setIsServerFilter:(bool)arg1;
- (bool)showsEverything;
- (bool)supportsSections;

@end