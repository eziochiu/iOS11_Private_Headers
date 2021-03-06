/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumListSettings : PXSettings {
    bool  _allowMemoriesAlbum;
    bool  _allowNavigationTitleEditing;
    bool  _allowPeopleAlbum;
    bool  _allowPlacesAlbum;
    bool  _allowScenesAlbum;
}

@property (nonatomic) bool allowMemoriesAlbum;
@property (nonatomic) bool allowNavigationTitleEditing;
@property (nonatomic) bool allowPeopleAlbum;
@property (nonatomic) bool allowPlacesAlbum;
@property (nonatomic) bool allowScenesAlbum;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)allowMemoriesAlbum;
- (bool)allowNavigationTitleEditing;
- (bool)allowPeopleAlbum;
- (bool)allowPlacesAlbum;
- (bool)allowScenesAlbum;
- (id)parentSettings;
- (void)setAllowMemoriesAlbum:(bool)arg1;
- (void)setAllowNavigationTitleEditing:(bool)arg1;
- (void)setAllowPeopleAlbum:(bool)arg1;
- (void)setAllowPlacesAlbum:(bool)arg1;
- (void)setAllowScenesAlbum:(bool)arg1;
- (void)setDefaultValues;

@end
