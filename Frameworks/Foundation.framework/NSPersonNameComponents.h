/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPersonNameComponents : NSObject <NSCopying, NSSecureCoding> {
    id  _private;
}

@property (copy) NSString *familyName;
@property (copy) NSString *givenName;
@property (copy) NSString *middleName;
@property (copy) NSString *namePrefix;
@property (copy) NSString *nameSuffix;
@property (copy) NSString *nickname;
@property (copy) NSPersonNameComponents *phoneticRepresentation;

+ (id)__componentsRequiredForScriptDetectionWithPhoneticDesired:(bool)arg1;
+ (id)_allComponents;
+ (id)_allProperties;
+ (bool)supportsSecureCoding;

- (bool)_isEmpty;
- (id)_scriptDeterminingStringRepresentationWithPhoneticDesired:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)givenName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToComponents:(id)arg1;
- (id)middleName;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)phoneticRepresentation;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNamePrefix:(id)arg1;
- (void)setNameSuffix:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setPhoneticRepresentation:(id)arg1;

@end
