/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanionFeaturedComplicationsAppLibrary : NSObject <NTKCompanionAppLibraryObserver> {
    NSMutableArray * _allGalleryFeaturedComplicationApps;
    NTKCompanionAppLibrary * _appLibrary;
    NSHashTable * _changeObservers;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSObject<OS_dispatch_queue> * _observerCallbackQueue;
}

@property (nonatomic, retain) NSMutableArray *allGalleryFeaturedComplicationApps;
@property (nonatomic, retain) NTKCompanionAppLibrary *appLibrary;
@property (nonatomic, retain) NSHashTable *changeObservers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observerCallbackQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *topGalleryFeaturedComplicationApps;

+ (id)sharedAppLibrary;

- (void).cxx_destruct;
- (void)_iterateObserversWithBlock:(id /* block */)arg1;
- (void)_queue_notifyAppAdded:(id)arg1;
- (void)_queue_notifyAppIconUpdated:(id)arg1;
- (void)_queue_notifyAppRemoved:(id)arg1;
- (void)_queue_notifyAppUpdated:(id)arg1;
- (id)_queue_thirdPartyAppsWithComplicationBundle;
- (void)_queue_updateAllGalleryFeaturedComplicationApps;
- (void)addObserver:(id)arg1;
- (id)allGalleryFeaturedComplicationApps;
- (id)appLibrary;
- (void)appLibrary:(id)arg1 didAddApp:(id)arg2;
- (void)appLibrary:(id)arg1 didRemoveApp:(id)arg2;
- (void)appLibrary:(id)arg1 didUpdateApp:(id)arg2;
- (void)appLibrary:(id)arg1 didUpdateAppIcon:(id)arg2;
- (id)changeObservers;
- (void)dealloc;
- (id)init;
- (id)internalQueue;
- (id)observerCallbackQueue;
- (void)removeObserver:(id)arg1;
- (void)setAllGalleryFeaturedComplicationApps:(id)arg1;
- (void)setAppLibrary:(id)arg1;
- (void)setChangeObservers:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setObserverCallbackQueue:(id)arg1;
- (id)topGalleryFeaturedComplicationApps;

@end
