/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLUnmanagedAdjustment : PLManagedObject

@property (nonatomic, retain) NSNumber *adjustmentBaseImageFormat;
@property (nonatomic, retain) NSString *adjustmentFormatIdentifier;
@property (nonatomic, retain) NSString *adjustmentFormatVersion;
@property (nonatomic) unsigned int adjustmentRenderTypes;
@property (nonatomic, retain) NSDate *adjustmentTimestamp;
@property (nonatomic, retain) PLAdditionalAssetAttributes *assetAttributes;
@property (nonatomic, retain) NSString *editorLocalizedName;
@property (nonatomic, retain) NSString *otherAdjustmentsFingerprint;
@property (nonatomic, retain) NSString *similarToOriginalAdjustmentsFingerprint;
@property (nonatomic, retain) NSString *uuid;

+ (id)_convertRedEyeCorrection:(id)arg1 withOrientation:(long long)arg2;
+ (id)_convertRedEyeCorrections:(id)arg1 withOrientation:(long long)arg2;
+ (id)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:(id)arg1;

- (bool)isSyncableChange;
- (bool)supportsCloudUpload;
- (void)willSave;

@end
