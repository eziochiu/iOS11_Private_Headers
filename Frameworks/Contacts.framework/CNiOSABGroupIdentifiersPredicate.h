/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABGroupIdentifiersPredicate : CNPredicate <CNiOSGroupPredicate> {
    NSArray * _identifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *identifiers;
@property (readonly) Class superclass;

+ (id)descriptionOfIdentifiers:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __CFArray { }*)cn_copyGroupsInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifiers:(id)arg1;

@end