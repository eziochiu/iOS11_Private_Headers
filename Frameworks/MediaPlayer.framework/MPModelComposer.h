/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelComposer : MPModelPerson {
    NSDate * _libraryAddedDate;
}

@property (nonatomic, copy) NSDate *libraryAddedDate;

+ (id)__MPModelPropertyComposerLibraryAddedDate__PROPERTY;
+ (id)__libraryAddedDate__KEY;
+ (id)kindWithAlbumKind:(id)arg1;

- (void).cxx_destruct;
- (id)libraryAddedDate;
- (void)setLibraryAddedDate:(id)arg1;

@end
