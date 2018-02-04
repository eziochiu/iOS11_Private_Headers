/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGGLDebugTileData : NSObject {
    unsigned long long  _coastLineCount;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    }  _coastLineMesh;
    unsigned long long  _coastLineVertCount;
    unsigned long long  _junctionCount;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    }  _junctionsPointsMesh;
    unsigned long long  _namedLineCount;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    }  _namedLineMesh;
    unsigned long long  _namedLineVertCount;
    unsigned long long  _overpassCount;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    }  _overpassPointsMesh;
    unsigned long long  _poiCount;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    }  _poiPointsMesh;
    unsigned long long  _polygonCount;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    }  _polygonLineMesh;
    unsigned long long  _polygonVertCount;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    }  _realTransitNodesMesh;
    unsigned long long  _unnamedLineCount;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    }  _unnamedLineMesh;
    unsigned long long  _unnamedLineVertCount;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    }  _venueBuildingOutlineMesh;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    }  _venueOutlineMesh;
    unsigned long long  _venueOutlinesCount;
    unsigned long long  _vertexCount;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    }  _verticesPointsMesh;
}

@property (nonatomic, readonly) unsigned long long coastLineCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*coastLineMesh; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > >=^{shared_ptr<ggl::VertexData>}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long coastLineVertCount;
@property (nonatomic, readonly) unsigned long long junctionCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*junctionsPointsMesh; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > >=^{shared_ptr<ggl::VertexData>}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long namedLineCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*namedLineMesh; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > >=^{shared_ptr<ggl::VertexData>}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long namedLineVertCount;
@property (nonatomic, readonly) unsigned long long overpassCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*overpassPointsMesh; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > >=^{shared_ptr<ggl::VertexData>}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long poiCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*poiPointsMesh; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > >=^{shared_ptr<ggl::VertexData>}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long polygonCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*polygonLineMesh; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > >=^{shared_ptr<ggl::VertexData>}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long polygonVertCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*realTransitNodesMesh; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > >=^{shared_ptr<ggl::VertexData>}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long unnamedLineCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*unnamedLineMesh; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > >=^{shared_ptr<ggl::VertexData>}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long unnamedLineVertCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*venueBuildingOutlineMesh; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > >=^{shared_ptr<ggl::VertexData>}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*venueOutlineMesh; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > >=^{shared_ptr<ggl::VertexData>}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long venueOutlinesCount;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::VertexData>' */ struct x7; }*verticesPointsMesh; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > >=^{shared_ptr<ggl::VertexData>}}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_fillInDebugData:(id)arg1;
- (unsigned long long)coastLineCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)coastLineMesh;
- (unsigned long long)coastLineVertCount;
- (id)initWithTile:(id)arg1;
- (unsigned long long)junctionCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)junctionsPointsMesh;
- (unsigned long long)namedLineCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)namedLineMesh;
- (unsigned long long)namedLineVertCount;
- (unsigned long long)overpassCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)overpassPointsMesh;
- (unsigned long long)poiCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)poiPointsMesh;
- (unsigned long long)polygonCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)polygonLineMesh;
- (unsigned long long)polygonVertCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)realTransitNodesMesh;
- (unsigned long long)unnamedLineCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)unnamedLineMesh;
- (unsigned long long)unnamedLineVertCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)venueBuildingOutlineMesh;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)venueOutlineMesh;
- (unsigned long long)venueOutlinesCount;
- (unsigned long long)vertexCount;
- (struct BaseMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)verticesPointsMesh;

@end