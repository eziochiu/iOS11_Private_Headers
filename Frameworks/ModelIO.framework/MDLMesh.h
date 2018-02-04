/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLMesh : MDLObject {
    <MDLMeshBufferAllocator> * _allocator;
    struct MDLAABB { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*maxBounds; 
    }  _bounds;
    NSArray * _controlNodes;
    NSMutableArray * _submeshes;
    NSMutableArray * _vertexBuffers;
    unsigned long long  _vertexCount;
    MDLVertexDescriptor * _vertexDescriptor;
}

@property (nonatomic, readonly, retain) <MDLMeshBufferAllocator> *allocator;
@property (nonatomic, readonly) struct { } boundingBox;
@property (nonatomic, copy) NSMutableArray *submeshes;
@property (nonatomic, retain) NSArray *vertexBuffers;
@property (nonatomic) unsigned long long vertexCount;
@property (nonatomic, copy) MDLVertexDescriptor *vertexDescriptor;

// Image: /System/Library/Frameworks/ModelIO.framework/ModelIO

+ (id)newBoxWithDimensions:(void *)arg1 segments:(void *)arg2 geometryType:(void *)arg3 inwardNormals:(void *)arg4 allocator:(void *)arg5; // needs 5 arg types, found 3: long long, bool, id
+ (id)newCapsuleWithHeight:(void *)arg1 radii:(void *)arg2 radialSegments:(void *)arg3 verticalSegments:(void *)arg4 hemisphereSegments:(void *)arg5 geometryType:(void *)arg6 inwardNormals:(void *)arg7 allocator:(void *)arg8; // needs 8 arg types, found 7: float, unsigned long long, unsigned long long, unsigned long long, long long, bool, id
+ (id)newCylinderWithHeight:(void *)arg1 radii:(void *)arg2 radialSegments:(void *)arg3 verticalSegments:(void *)arg4 geometryType:(void *)arg5 inwardNormals:(void *)arg6 allocator:(void *)arg7; // needs 7 arg types, found 6: float, unsigned long long, unsigned long long, long long, bool, id
+ (id)newEllipsoidWithRadii:(void *)arg1 radialSegments:(void *)arg2 verticalSegments:(void *)arg3 geometryType:(void *)arg4 inwardNormals:(void *)arg5 hemisphere:(void *)arg6 allocator:(void *)arg7; // needs 7 arg types, found 6: unsigned long long, unsigned long long, long long, bool, bool, id
+ (id)newEllipticalConeWithHeight:(void *)arg1 radii:(void *)arg2 radialSegments:(void *)arg3 verticalSegments:(void *)arg4 geometryType:(void *)arg5 inwardNormals:(void *)arg6 allocator:(void *)arg7; // needs 7 arg types, found 6: float, unsigned long long, unsigned long long, long long, bool, id
+ (id)newIcosahedronWithRadius:(float)arg1 inwardNormals:(bool)arg2 allocator:(id)arg3;
+ (id)newIcosahedronWithRadius:(float)arg1 inwardNormals:(bool)arg2 geometryType:(long long)arg3 allocator:(id)arg4;
+ (id)newPlaneWithDimensions:(void *)arg1 segments:(void *)arg2 geometryType:(void *)arg3 allocator:(void *)arg4; // needs 4 arg types, found 2: long long, id
+ (id)newSubdividedMesh:(id)arg1 submeshIndex:(unsigned long long)arg2 subdivisionLevels:(unsigned long long)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_calculateFaceNormalsFromPositions:(float*)arg1 positionStride:(long long)arg2 normals:(float*)arg3 normalStride:(long long)arg4 creaseThreshold:(float)arg5;
- (void)_calculateTangentBasisFromPositions:(float*)arg1 positionStride:(long long)arg2 normals:(float*)arg3 normalStride:(long long)arg4 uvs:(float*)arg5 uvStride:(long long)arg6 tangents:(float*)arg7 tangentsStride:(long long)arg8 bitagents:(float*)arg9 bitangentStride:(long long)arg10 tangentFormat:(unsigned long long)arg11;
- (void)_createWithVertexBuffer:(id)arg1 vertexCount:(unsigned long long)arg2 descriptor:(id)arg3 submeshes:(id)arg4;
- (void)_enumerateSubmeshesUsingBlock:(id /* block */)arg1 stopPointer:(bool*)arg2;
- (void)addAttributeWithName:(id)arg1 format:(unsigned long long)arg2;
- (void)addAttributeWithName:(id)arg1 format:(unsigned long long)arg2 type:(id)arg3 data:(id)arg4 stride:(long long)arg5;
- (void)addAttributeWithName:(id)arg1 format:(unsigned long long)arg2 type:(id)arg3 data:(id)arg4 stride:(long long)arg5 time:(double)arg6;
- (void)addNormalsWithAttributeNamed:(id)arg1 creaseThreshold:(float)arg2;
- (void)addOrthTanBasisForTextureCoordinateAttributeNamed:(id)arg1 normalAttributeNamed:(id)arg2 tangentAttributeNamed:(id)arg3;
- (void)addTangentBasisForTextureCoordinateAttributeNamed:(id)arg1 normalAttributeNamed:(id)arg2 tangentAttributeNamed:(id)arg3;
- (void)addTangentBasisForTextureCoordinateAttributeNamed:(id)arg1 tangentAttributeNamed:(id)arg2 bitangentAttributeNamed:(id)arg3;
- (void)addUnwrappedTextureCoordinatesForAttributeNamed:(id)arg1;
- (long long)addVertexBuffer:(id)arg1;
- (id)allocator;
- (struct { })boundingBox;
- (id)controlNodeForINdex:(unsigned long long)arg1;
- (void)copyDataVector:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg1 toAttr:(id)arg2;
- (void)createSourceDataVector:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg1 attr:(id)arg2 srcElementCount:(int)arg3 dstElementCount:(int)arg4;
- (void)debugPrintToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)enumerateSubmeshesUsingBlock:(id /* block */)arg1;
- (void)flipTextureCoordinatesInAttributeNamed:(id)arg1;
- (bool)generateAmbientOcclusionTextureWithQuality:(float)arg1 attenuationFactor:(float)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 materialPropertyNamed:(id)arg5;
- (bool)generateAmbientOcclusionTextureWithSize:(void *)arg1 raysPerSample:(void *)arg2 attenuationFactor:(void *)arg3 objectsToConsider:(void *)arg4 vertexAttributeNamed:(void *)arg5 materialPropertyNamed:(void *)arg6; // needs 6 arg types, found 5: long long, float, id, id, id
- (bool)generateAmbientOcclusionVertexColorsWithQuality:(float)arg1 attenuationFactor:(float)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4;
- (bool)generateAmbientOcclusionVertexColorsWithRaysPerSample:(long long)arg1 attenuationFactor:(float)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4;
- (bool)generateLightMapTextureWithQuality:(float)arg1 lightsToConsider:(id)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 materialPropertyNamed:(id)arg5;
- (bool)generateLightMapTextureWithTextureSize:(void *)arg1 lightsToConsider:(void *)arg2 objectsToConsider:(void *)arg3 vertexAttributeNamed:(void *)arg4 materialPropertyNamed:(void *)arg5; // needs 5 arg types, found 4: id, id, id, id
- (bool)generateLightMapVertexColorsWithLightsToConsider:(id)arg1 objectsToConsider:(id)arg2 vertexAttributeNamed:(id)arg3;
- (id)initBoxWithExtent:(void *)arg1 segments:(void *)arg2 inwardNormals:(void *)arg3 geometryType:(void *)arg4 allocator:(void *)arg5; // needs 5 arg types, found 3: bool, long long, id
- (id)initCapsuleWithExtent:(void *)arg1 cylinderSegments:(void *)arg2 hemisphereSegments:(void *)arg3 inwardNormals:(void *)arg4 geometryType:(void *)arg5 allocator:(void *)arg6; // needs 6 arg types, found 4: unsigned long long, bool, long long, id
- (id)initConeWithExtent:(void *)arg1 segments:(void *)arg2 inwardNormals:(void *)arg3 cap:(void *)arg4 geometryType:(void *)arg5 allocator:(void *)arg6; // needs 6 arg types, found 4: bool, bool, long long, id
- (id)initCylinderWithExtent:(void *)arg1 segments:(void *)arg2 inwardNormals:(void *)arg3 topCap:(void *)arg4 bottomCap:(void *)arg5 geometryType:(void *)arg6 allocator:(void *)arg7; // needs 7 arg types, found 5: bool, bool, bool, long long, id
- (id)initHemisphereWithExtent:(void *)arg1 segments:(void *)arg2 inwardNormals:(void *)arg3 cap:(void *)arg4 geometryType:(void *)arg5 allocator:(void *)arg6; // needs 6 arg types, found 4: bool, bool, long long, id
- (id)initIcosahedronWithExtent:(void *)arg1 inwardNormals:(void *)arg2 geometryType:(void *)arg3 allocator:(void *)arg4; // needs 4 arg types, found 3: bool, long long, id
- (id)initMeshBySubdividingMesh:(id)arg1 submeshIndex:(int)arg2 subdivisionLevels:(unsigned int)arg3 allocator:(id)arg4;
- (id)initPlaneWithExtent:(void *)arg1 segments:(void *)arg2 geometryType:(void *)arg3 allocator:(void *)arg4; // needs 4 arg types, found 2: long long, id
- (id)initSphereWithExtent:(void *)arg1 segments:(void *)arg2 inwardNormals:(void *)arg3 geometryType:(void *)arg4 allocator:(void *)arg5; // needs 5 arg types, found 3: bool, long long, id
- (id)initWithBufferAllocator:(id)arg1;
- (id)initWithVertexBuffer:(id)arg1 vertexCount:(unsigned long long)arg2 descriptor:(id)arg3 submeshes:(id)arg4;
- (id)initWithVertexBuffers:(id)arg1 vertexCount:(unsigned long long)arg2 descriptor:(id)arg3 submeshes:(id)arg4;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })inverseBasePoseForIndex:(unsigned long long)arg1;
- (void)makeVerticesUnique;
- (bool)makeVerticesUniqueAndReturnError:(id*)arg1;
- (void)removeAttributeNamed:(id)arg1;
- (void)replaceAttributeNamed:(id)arg1 withData:(id)arg2;
- (void)setSubmeshes:(id)arg1;
- (void)setVertexBuffers:(id)arg1;
- (void)setVertexCount:(unsigned long long)arg1;
- (void)setVertexDescriptor:(id)arg1;
- (int)submeshCount;
- (id)submeshes;
- (void)updateAttributeNamed:(id)arg1 withData:(id)arg2;
- (id)vertexAttributeDataForAttributeNamed:(id)arg1;
- (id)vertexAttributeDataForAttributeNamed:(id)arg1 asFormat:(unsigned long long)arg2;
- (id)vertexBuffers;
- (unsigned long long)vertexCount;
- (id)vertexDescriptor;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)meshWithSCNGeometry:(id)arg1;
+ (id)meshWithSCNGeometry:(id)arg1 bufferAllocator:(id)arg2;

@end