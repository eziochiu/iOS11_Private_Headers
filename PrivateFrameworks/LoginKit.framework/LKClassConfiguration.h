/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

@interface LKClassConfiguration : NSObject <LKClassConfigurationProviding, NSSecureCoding> {
    NSArray * _classGroups;
    NSDictionary * _classRosterInformationDictionary;
    NSArray * _classes;
    NSMutableDictionary * _classesByClassGroupName;
    NSMutableDictionary * _classesByClassID;
    NSArray * _instructors;
    NSData * _payloadCertificatePersistentID;
    NSString * _schoolName;
    NSArray * _students;
    NSMutableDictionary * _usersByUsername;
    NSMutableDictionary * _usersWithAppleIDByIdentifier;
}

@property (nonatomic, retain) NSArray *classGroups;
@property (retain) NSDictionary *classRosterInformationDictionary;
@property (nonatomic, readonly, copy) NSArray *classes;
@property (retain) NSMutableDictionary *classesByClassGroupName;
@property (retain) NSMutableDictionary *classesByClassID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *instructors;
@property (nonatomic, readonly) NSData *payloadCertificatePersistentID;
@property (nonatomic, readonly, copy) NSString *schoolName;
@property (nonatomic, copy) NSArray *students;
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *usersByUsername;
@property (retain) NSMutableDictionary *usersWithAppleIDByIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)classGroups;
- (id)classInfoForClassID:(id)arg1;
- (id)classRosterInformationDictionary;
- (id)classes;
- (id)classesByClassGroupName;
- (id)classesByClassGroupNameDictionary;
- (id)classesByClassID;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)instructors;
- (id)payloadCertificatePersistentID;
- (id)schoolName;
- (void)setClassGroups:(id)arg1;
- (void)setClassRosterInformationDictionary:(id)arg1;
- (void)setClassesByClassGroupName:(id)arg1;
- (void)setClassesByClassID:(id)arg1;
- (void)setStudents:(id)arg1;
- (void)setUsersByUsername:(id)arg1;
- (void)setUsersWithAppleIDByIdentifier:(id)arg1;
- (id)studentForStudentIdentifier:(id)arg1;
- (id)studentForStudentIdentifier:(id)arg1 inClass:(id)arg2;
- (id)studentForUsername:(id)arg1;
- (id)studentForUsername:(id)arg1 inClass:(id)arg2;
- (id)students;
- (id)usersByUsername;
- (id)usersWithAppleIDByIdentifier;

@end