/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedObject : NSManagedObject

@property (nonatomic, readonly) bool isRegisteredWithUserInterfaceContext;
@property (nonatomic, readonly, retain) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly, copy) NSString *shortObjectIDURI;

- (bool)isRegisteredWithUserInterfaceContext;
- (bool)isSyncableChange;
- (id)photoLibrary;
- (id)pointerDescription;
- (id)shortObjectIDURI;
- (bool)supportsCloudUpload;
- (id)truncatedDescriptionWithPropertyKeys:(id)arg1;
- (void)willSave;

@end
