/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPlaneData : NSObject <ARResultData> {
    struct CovariantVector<acv::tracking::detection::IAlignedSurface<float>, acv::CovariantVectorInterface<acv::tracking::detection::IAlignedSurface<float>, acv::CovariantVectorInterface<acv::geometry::ISurface<float>, acv::ICovariantVector<acv::geometry::ISurface<float> > > > > { 
        int (**_vptr$ICovariantVectorBase)(); 
        struct shared_ptr<std::__1::vector<std::__1::shared_ptr<acv::tracking::detection::IAlignedSurface<float> >, std::__1::allocator<std::__1::shared_ptr<acv::tracking::detection::IAlignedSurface<float> > > > > { 
            struct vector<std::__1::shared_ptr<acv::tracking::detection::IAlignedSurface<float> >, std::__1::allocator<std::__1::shared_ptr<acv::tracking::detection::IAlignedSurface<float> > > > {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } m_vector; 
        struct shared_ptr<acv::CovariantVectorInterface<acv::tracking::detection::IAlignedSurface<float>, acv::CovariantVectorInterface<acv::geometry::ISurface<float>, acv::ICovariantVector<acv::geometry::ISurface<float> > > > > { 
            struct CovariantVectorInterface<acv::tracking::detection::IAlignedSurface<float>, acv::CovariantVectorInterface<acv::geometry::ISurface<float>, acv::ICovariantVector<acv::geometry::ISurface<float> > > > {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } m_originalInterface; 
    }  _detectedSurfaces;
    unsigned long long  _detectionTypeMask;
    unsigned long long  _techniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{CovariantVector<acv::tracking::detection::IAlignedSurface<float>' */ struct  detectedSurfaces; /* unknown property attribute:  acv::ICovariantVector<acv::geometry::ISurface<float> > > >}^{__shared_weak_count}}} */
@property (nonatomic, readonly) unsigned long long detectionTypeMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long techniqueIdentifier;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_alignmentRotationForAnchorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 planeAlignment:(long long)arg2;
- (id)_anchorForSurface:(const struct IAlignedSurface<float> { int (**x1)(); }*)arg1 identifier:(id)arg2 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (struct { })_boundsFromSurfaceExtent:(const struct SurfaceExtent<float> { struct Matrix<float, 3, 3> { float x_1_1_1[9]; } x1; struct vector<acv::geometry::BoundingBox2<float, acv::geometry::BoundingBoxFlags::Safe>, std::__1::allocator<acv::geometry::BoundingBox2<float, acv::geometry::BoundingBoxFlags::Safe> > > { struct BoundingBox2<float, acv::geometry::BoundingBoxFlags::Safe> {} *x_2_1_1; struct BoundingBox2<float, acv::geometry::BoundingBoxFlags::Safe> {} *x_2_1_2; struct __compressed_pair<acv::geometry::BoundingBox2<float, acv::geometry::BoundingBoxFlags::Safe> *, std::__1::allocator<acv::geometry::BoundingBox2<float, acv::geometry::BoundingBoxFlags::Safe> > > { struct BoundingBox2<float, acv::geometry::BoundingBoxFlags::Safe> {} *x_3_2_1; } x_2_1_3; } x2; struct SE3GroupStorage<float, cva::Matrix<float, 4, 4> > { float x_3_1_1[16]; } x3; float x4; }*)arg1 planeToAnchorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 alignmentRotation:(int)arg3;
- (id)_gridExtentFromSurfaceExtent:(const struct SurfaceExtent<float> { struct Matrix<float, 3, 3> { float x_1_1_1[9]; } x1; struct vector<acv::geometry::BoundingBox2<float, acv::geometry::BoundingBoxFlags::Safe>, std::__1::allocator<acv::geometry::BoundingBox2<float, acv::geometry::BoundingBoxFlags::Safe> > > { struct BoundingBox2<float, acv::geometry::BoundingBoxFlags::Safe> {} *x_2_1_1; struct BoundingBox2<float, acv::geometry::BoundingBoxFlags::Safe> {} *x_2_1_2; struct __compressed_pair<acv::geometry::BoundingBox2<float, acv::geometry::BoundingBoxFlags::Safe> *, std::__1::allocator<acv::geometry::BoundingBox2<float, acv::geometry::BoundingBoxFlags::Safe> > > { struct BoundingBox2<float, acv::geometry::BoundingBoxFlags::Safe> {} *x_3_2_1; } x_2_1_3; } x2; struct SE3GroupStorage<float, cva::Matrix<float, 4, 4> > { float x_3_1_1[16]; } x3; float x4; }*)arg1 planeToAnchorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 alignmentRotation:(int)arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_planeToWorldTransformForSurface:(const struct IAlignedSurface<float> { int (**x1)(); }*)arg1;
- (id)_updatedAnchor:(id)arg1 forSurface:(const struct IAlignedSurface<float> { int (**x1)(); }*)arg2 identifier:(id)arg3 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (struct CovariantVector<acv::tracking::detection::IAlignedSurface<float>, acv::CovariantVectorInterface<acv::tracking::detection::IAlignedSurface<float>, acv::CovariantVectorInterface<acv::geometry::ISurface<float>, acv::ICovariantVector<acv::geometry::ISurface<float> > > > > { int (**x1)(); struct shared_ptr<std::__1::vector<std::__1::shared_ptr<acv::tracking::detection::IAlignedSurface<float> >, std::__1::allocator<std::__1::shared_ptr<acv::tracking::detection::IAlignedSurface<float> > > > > { struct vector<std::__1::shared_ptr<acv::tracking::detection::IAlignedSurface<float> >, std::__1::allocator<std::__1::shared_ptr<acv::tracking::detection::IAlignedSurface<float> > > > {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct shared_ptr<acv::CovariantVectorInterface<acv::tracking::detection::IAlignedSurface<float>, acv::CovariantVectorInterface<acv::geometry::ISurface<float>, acv::ICovariantVector<acv::geometry::ISurface<float> > > > > { struct CovariantVectorInterface<acv::tracking::detection::IAlignedSurface<float>, acv::CovariantVectorInterface<acv::geometry::ISurface<float>, acv::ICovariantVector<acv::geometry::ISurface<float> > > > {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; })detectedSurfaces;
- (unsigned long long)detectionTypeMask;
- (id)hitTestFromOriginwithDirection;
- (id)initWithDetectedSurfaces:(struct CovariantVector<acv::tracking::detection::IAlignedSurface<float>, acv::CovariantVectorInterface<acv::tracking::detection::IAlignedSurface<float>, acv::CovariantVectorInterface<acv::geometry::ISurface<float>, acv::ICovariantVector<acv::geometry::ISurface<float> > > > > { int (**x1)(); struct shared_ptr<std::__1::vector<std::__1::shared_ptr<acv::tracking::detection::IAlignedSurface<float> >, std::__1::allocator<std::__1::shared_ptr<acv::tracking::detection::IAlignedSurface<float> > > > > { struct vector<std::__1::shared_ptr<acv::tracking::detection::IAlignedSurface<float> >, std::__1::allocator<std::__1::shared_ptr<acv::tracking::detection::IAlignedSurface<float> > > > {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct shared_ptr<acv::CovariantVectorInterface<acv::tracking::detection::IAlignedSurface<float>, acv::CovariantVectorInterface<acv::geometry::ISurface<float>, acv::ICovariantVector<acv::geometry::ISurface<float> > > > > { struct CovariantVectorInterface<acv::tracking::detection::IAlignedSurface<float>, acv::CovariantVectorInterface<acv::geometry::ISurface<float>, acv::ICovariantVector<acv::geometry::ISurface<float> > > > {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; })arg1 detectionTypeMask:(unsigned long long)arg2 techniqueIdentifier:(unsigned long long)arg3;
- (unsigned long long)techniqueIdentifier;

@end
