/* made by EzioChiu.
 */

@protocol NTKCompanionFeaturedComplicationsAppLibraryObserver <NSObject>

@optional

- (void)appLibrary:(NTKCompanionFeaturedComplicationsAppLibrary *)arg1 didAddApp:(NTKCompanionApp *)arg2;
- (void)appLibrary:(NTKCompanionFeaturedComplicationsAppLibrary *)arg1 didRemoveApp:(NTKCompanionApp *)arg2;
- (void)appLibrary:(NTKCompanionFeaturedComplicationsAppLibrary *)arg1 didUpdateApp:(NTKCompanionApp *)arg2;
- (void)appLibrary:(NTKCompanionFeaturedComplicationsAppLibrary *)arg1 didUpdateAppIcon:(NTKCompanionApp *)arg2;

@end
