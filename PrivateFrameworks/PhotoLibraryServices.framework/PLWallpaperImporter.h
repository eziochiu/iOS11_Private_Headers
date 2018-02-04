/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLWallpaperImporter : NSObject {
    NSArray * _allWallpaperURLs;
    NSData * _wallpaperFileHash;
    PLPhotoLibrary * photoLibrary;
}

@property (nonatomic, readonly, retain) NSArray *allWallpaperURLs;
@property (nonatomic, readonly, retain) PLManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) PLPhotoLibrary *photoLibrary;

+ (void)importWallpaperAssetsIntoPhotoLibrary:(id)arg1;
+ (id)posterImageURL;

- (void)addWallpaperURLsForModel:(id)arg1 toURLs:(id)arg2;
- (id)allExistingWallpaperAssets;
- (id)allWallpaperURLs;
- (void)dealloc;
- (void)deleteAll;
- (void)importAll;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)managedObjectContext;
- (id)photoLibrary;
- (void)setPhotoLibrary:(id)arg1;
- (void)updateAsNeeded;
- (id)wallpaperFileHash;

@end
