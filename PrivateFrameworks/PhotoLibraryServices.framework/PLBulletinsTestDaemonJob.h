/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBulletinsTestDaemonJob : PLDaemonJob {
    NSArray * _addedAssetUUIDs;
    NSString * _albumUUID;
    long long  _bulletinType;
    PLPhotoLibrary * _photoLibrary;
}

@property (nonatomic, retain) NSArray *addedAssetUUIDs;
@property (nonatomic, retain) NSString *albumUUID;
@property long long bulletinType;
@property (nonatomic, retain) PLPhotoLibrary *photoLibrary;

+ (void)notifyAssets:(id)arg1 wereAddedToAlbum:(id)arg2;
+ (void)notifyCommentWasReceivedForAssets:(id)arg1;
+ (void)notifyInvitationWasReceivedForAlbum:(id)arg1;
+ (void)notifyLikeWasReceivedForAssets:(id)arg1;

- (id)addedAssetUUIDs;
- (id)albumUUID;
- (long long)bulletinType;
- (long long)daemonOperation;
- (void)dealloc;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (id)photoLibrary;
- (void)run;
- (void)runDaemonSide;
- (void)setAddedAssetUUIDs:(id)arg1;
- (void)setAlbumUUID:(id)arg1;
- (void)setBulletinType:(long long)arg1;
- (void)setPhotoLibrary:(id)arg1;

@end
