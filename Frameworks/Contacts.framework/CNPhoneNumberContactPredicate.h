/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPhoneNumberContactPredicate : CNPredicate <CNSuggestedContactPredicate> {
    CNPhoneNumber * _phoneNumber;
    NSString * _prefixHint;
    bool  _returnsMultipleResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CNPhoneNumber *phoneNumber;
@property (nonatomic, readonly, copy) NSString *prefixHint;
@property (nonatomic, readonly) bool returnsMultipleResults;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1 returnMultipleResults:(bool)arg2;
- (id)initWithPhoneNumber:(id)arg1 returnMultipleResults:(bool)arg2 prefixHint:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)phoneNumber;
- (id)prefixHint;
- (bool)returnsMultipleResults;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(bool)arg2 service:(id)arg3 error:(id*)arg4;

@end
