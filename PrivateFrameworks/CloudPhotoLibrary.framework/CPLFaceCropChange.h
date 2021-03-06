/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLFaceCropChange : CPLRecordChange {
    long long  _faceCropType;
    NSString * _personIdentifier;
    NSString * _rejectedPersonIdentifier;
    NSData * _resourceData;
}

@property (nonatomic) long long faceCropType;
@property (nonatomic, copy) NSString *personIdentifier;
@property (nonatomic, copy) NSString *rejectedPersonIdentifier;
@property (nonatomic, copy) NSData *resourceData;

- (void).cxx_destruct;
- (long long)faceCropType;
- (id)personIdentifier;
- (id)propertiesDescription;
- (id)rejectedPersonIdentifier;
- (id)relatedIdentifier;
- (id)resourceData;
- (void)setFaceCropType:(long long)arg1;
- (void)setPersonIdentifier:(id)arg1;
- (void)setRejectedPersonIdentifier:(id)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (void)setResourceData:(id)arg1;
- (bool)supportsDeletion;
- (bool)supportsDirectDeletion;
- (bool)validateChangeWithError:(id*)arg1;
- (bool)validateFullRecord;

@end
