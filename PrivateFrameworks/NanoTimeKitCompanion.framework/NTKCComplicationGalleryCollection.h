/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCComplicationGalleryCollection : NTKCFacesArrayGalleryCollection <NTKCompanionFeaturedComplicationsAppLibraryObserver> {
    NTKCompanionFeaturedComplicationsAppLibrary * _appLibrary;
    NSArray * _apps;
}

@property (nonatomic, retain) NTKCompanionFeaturedComplicationsAppLibrary *appLibrary;
@property (nonatomic, readonly) NSArray *apps;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_availableFaceStyles;
- (void)_updateApps;
- (void)_updateAppsSuppressingNotification:(bool)arg1;
- (id)appLibrary;
- (void)appLibrary:(id)arg1 didAddApp:(id)arg2;
- (void)appLibrary:(id)arg1 didRemoveApp:(id)arg2;
- (void)appLibrary:(id)arg1 didUpdateApp:(id)arg2;
- (void)appLibrary:(id)arg1 didUpdateAppIcon:(id)arg2;
- (id)apps;
- (void)dealloc;
- (id)init;
- (void)setAppLibrary:(id)arg1;

@end
