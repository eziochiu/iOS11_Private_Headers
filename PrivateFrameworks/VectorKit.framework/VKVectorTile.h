/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKVectorTile : VKTile {
    double  _contentScale;
    VKMapTileList * _fragments;
    float  _maximumStyleZ;
    GEOVectorTile * _modelTile;
    VKSharedResources * _sharedResources;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleManager;
    float  _textureScale;
}

@property (nonatomic) double contentScale;
@property (nonatomic, readonly) VKMapTileList *fragments;
@property (nonatomic) float maximumStyleZ;
@property (nonatomic, retain) GEOVectorTile *modelTile;
@property (nonatomic, retain) VKSharedResources *sharedResources;
@property (nonatomic) struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; } styleManager;
@property (nonatomic) float textureScale;
@property (nonatomic, readonly) long long vectorType;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)contentScale;
- (void)dealloc;
- (id)fragments;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 modelTile:(id)arg2 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg3 sharedResources:(id)arg4 contentScale:(double)arg5 device:(struct Device { }*)arg6;
- (float)maximumStyleZ;
- (id)modelTile;
- (void)setContentScale:(double)arg1;
- (void)setMaximumStyleZ:(float)arg1;
- (void)setModelTile:(id)arg1;
- (void)setSharedResources:(id)arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setTextureScale:(float)arg1;
- (id)sharedResources;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (float)textureScale;
- (long long)vectorType;

@end
