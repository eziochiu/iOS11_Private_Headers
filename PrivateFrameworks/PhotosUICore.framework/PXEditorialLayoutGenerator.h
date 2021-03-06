/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXEditorialLayoutGenerator : PXLayoutGenerator {
    struct CGSize { 
        double width; 
        double height; 
    }  _actualSize;
    bool  _isPrepared;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _rectBuffer;
    unsigned long long  _rectBufferCount;
    PXMagazineLayoutTileMaker * _tileMaker;
}

@property (nonatomic, readonly, copy) PXEditorialLayoutMetrics *metrics;

- (void).cxx_destruct;
- (struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; })_geometryFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 index:(unsigned long long)arg2;
- (void)_prepareIfNeeded;
- (void)_prepareRectBufferForCount:(unsigned long long)arg1;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })estimatedSize;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withKind:(long long)arg3;
- (id)init;
- (id)initWithMetrics:(id)arg1;
- (void)invalidate;
- (struct CGSize { double x1; double x2; })size;

@end
