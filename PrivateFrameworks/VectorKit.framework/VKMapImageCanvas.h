/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapImageCanvas : VKImageCanvas <MDSnapshotMap, VKMapModelDelegate> {
    VKMapModel * _mapModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showsBuildings;
@property (nonatomic) bool showsVenues;
@property (readonly) Class superclass;

- (void)cancelTileRequests;
- (void)clearScene;
- (void)dealloc;
- (id)initWithMapEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1;
- (id)initWithMapEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1 localizeLabels:(bool)arg2 mapType:(long long)arg3;
- (bool)isShowingNoDataPlaceholders;
- (struct LabelSettings { }*)labelSettings;
- (void)mapModel:(id)arg1 selectedLabelMarkerDidChangeState:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)mapModel:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(bool)arg2;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;
- (void)mapModelLabelsDidLayout:(id)arg1;
- (void)mapModelWillBecomeFullyDrawn:(id)arg1;
- (void)setEmphasis:(unsigned char)arg1;
- (void)setMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (void)setMapType:(long long)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsVenues:(bool)arg1;
- (bool)showsBuildings;
- (bool)showsVenues;
- (void)update;

@end
