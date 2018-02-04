/* made by EzioChiu.
 */

@protocol VKTileSourceClient <NSObject>

@required

- (void)didStopLoadingTilesWithError:(NSError *)arg1;
- (void)dirtyTilesFromTileSource:(VKTileSource *)arg1;
- (void)invalidateTilesFromTileSource:(VKTileSource *)arg1;
- (void)tileSource:(VKTileSource *)arg1 didFailToDecodeTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(VKTileSource *)arg1 didFailToLoadTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2 error:(NSError *)arg3;
- (void)tileSource:(VKTileSource *)arg1 didFetchTile:(VKTile *)arg2 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (void)tileSource:(VKTileSource *)arg1 dirtyTilesWithinRect:(const struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; }*)arg2 level:(long long)arg3;
- (void)tileSource:(VKTileSource *)arg1 invalidateKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(VKTileSource *)arg1 invalidateKeys:(VKTileKeyList *)arg2;
- (void)tileSource:(VKTileSource *)arg1 invalidateTilesWithState:(unsigned long long)arg2;
- (bool)tileSource:(VKTileSource *)arg1 keyIsNeeded:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (long long)tileSource:(VKTileSource *)arg1 overrideForMaximumZoomLevel:(long long)arg2;
- (void)willStartLoadingTiles;

@optional

- (void)dirtyTile:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 source:(VKTileSource *)arg2;
- (void)expireTilesForTileSource:(VKTileSource *)arg1;

@end