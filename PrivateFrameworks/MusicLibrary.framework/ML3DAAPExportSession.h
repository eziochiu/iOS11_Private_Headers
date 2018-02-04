/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DAAPExportSession : ML3ExportSession {
    unsigned int  _currentListingContainerCode;
    unsigned int  _currentSongsContainerCode;
    int  _updateType;
}

- (void)_endCurrentListingContainer;
- (void)_endCurrentSongsContainer;
- (id)_playlistExportItemForPersistentId:(long long)arg1;
- (void)_setListingContainer:(unsigned int)arg1;
- (void)_setSongsContainer:(unsigned int)arg1;
- (id)_trackExportItemForPersistendId:(long long)arg1;
- (id)begin:(unsigned int)arg1;
- (id)end;
- (id)exportPlaylistAdded:(unsigned long long)arg1;
- (id)exportPlaylistDeleted:(unsigned long long)arg1;
- (id)exportTrackAdded:(unsigned long long)arg1;
- (id)exportTrackDeleted:(unsigned long long)arg1;
- (id)initWithLibrary:(id)arg1 outputStream:(id)arg2 updateType:(int)arg3;

@end
