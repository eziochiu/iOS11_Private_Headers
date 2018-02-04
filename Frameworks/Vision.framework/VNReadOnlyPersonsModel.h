/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNReadOnlyPersonsModel : VNPersonsModel {
    VNPersonsModelFaceModel * _faceModel_DO_NOT_ACCESS_DIRECTLY;
}

+ (id)newModelFromVersion:(unsigned long long)arg1 objects:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)faceCountsForAllPersons;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;
- (unsigned long long)faceprintCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)identitySerialNumberForPersonWithUniqueIdentifier:(id)arg1;
- (id)initWithConfiguration:(id)arg1 faceModel:(id)arg2;
- (unsigned long long)personCount;
- (id)personUniqueIdentifiers;
- (id)upToDateFaceModelWithCanceller:(id)arg1 error:(id*)arg2;

@end