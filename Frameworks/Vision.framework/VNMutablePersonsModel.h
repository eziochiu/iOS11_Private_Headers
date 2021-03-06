/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNMutablePersonsModel : VNPersonsModel {
    NSMutableIndexSet * _availablePersonSerialNumbers;
    VNPersonsModelFaceModel * _faceModel_DO_NOT_ACCESS_DIRECTLY;
    NSDate * _lastModificationDate;
    NSMutableDictionary * _personUniqueIdentifierToSerialNumberMapping;
    NSMutableDictionary * _serialNumberToFaceprintsMapping;
}

+ (id)_version1ModelWithObjects:(id)arg1 error:(id*)arg2;
+ (id)_version2ModelWithObjects:(id)arg1 error:(id*)arg2;
+ (id)newModelFromVersion:(unsigned long long)arg1 objects:(id)arg2 error:(id*)arg3;
+ (id)supportedWriteVersions;

- (void).cxx_destruct;
- (bool)_addUniqueFaceprints:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_getModelWritingImplementation:(int (**)arg1 selector:(SEL*)arg2 forVersion:(unsigned long long)arg3 readOnly:(bool)arg4;
- (bool)_getModelWritingImplementation:(int (**)arg1 selector:(SEL*)arg2 version:(unsigned long long*)arg3 forOptions:(id)arg4;
- (void)_modelWasModified;
- (void)_removeAllFaceprintsFromIdentityWithSerialNumber:(id)arg1;
- (void)_removeExistingFaceprints:(id)arg1 fromIdentityWithSerialNumber:(id)arg2;
- (void)_removeExistingFaceprints:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2;
- (void)_removePersonWithUniqueIdentifier:(id)arg1;
- (id)_requestNewIdentitySerialNumberAndReturnError:(id*)arg1;
- (id)_uniqueFaceprintsWithRegistrationState:(bool)arg1 forFaceObservations:(id)arg2 ofPersonWithUniqueIdentifier:(id)arg3 error:(id*)arg4;
- (id)_uniqueFaceprintsWithRegistrationState:(bool)arg1 forFaceprints:(id)arg2 ofPersonWithUniqueIdentifier:(id)arg3 error:(id*)arg4;
- (bool)_writeReadOnlyVersion:(unsigned long long)arg1 toOutputStream:(id)arg2 options:(id)arg3 md5Context:(struct CC_MD5state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; }*)arg4 error:(id*)arg5;
- (bool)_writeToUnopenedStream:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)_writeVersion1ConfigurationToOutputStream:(id)arg1 md5Context:(struct CC_MD5state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; }*)arg2 error:(id*)arg3;
- (bool)_writeVersion1InformationToOutputStream:(id)arg1 md5Context:(struct CC_MD5state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; }*)arg2 error:(id*)arg3;
- (bool)addFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id*)arg3;
- (bool)addFaceprints:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id*)arg3;
- (id)dataWithOptions:(id)arg1 error:(id*)arg2;
- (id)description;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)faceCountsForAllPersons;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;
- (unsigned long long)faceprintCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)identitySerialNumberForPersonWithUniqueIdentifier:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (unsigned long long)personCount;
- (id)personUniqueIdentifiers;
- (void)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)arg1;
- (bool)removeFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2 error:(id*)arg3;
- (void)removePersonWithUniqueIdentifier:(id)arg1;
- (id)upToDateFaceModelWithCanceller:(id)arg1 error:(id*)arg2;
- (bool)writeReadOnlyVersion1ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; }*)arg3 error:(id*)arg4;
- (bool)writeReadOnlyVersion2ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; }*)arg3 error:(id*)arg4;
- (bool)writeToStream:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)writeToURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)writeVersion1ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; }*)arg3 error:(id*)arg4;
- (bool)writeVersion2ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; }*)arg3 error:(id*)arg4;

@end
