/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLFaceRegionMap : NSObject <NSCoding> {
    bool  mDeallocateBuffer;
    struct _Geometry2D_rect2D_ { 
        struct _Geometry2D_point2D_ { 
            float x; 
            float y; 
        } origin; 
        struct _Geometry2D_size2D_ { 
            float height; 
            float width; 
        } size; 
    }  mInternalAlignedBBox;
    NSDictionary * mPixelValueToRegionLabelMap;
    struct vImage_Buffer { 
        void *data; 
        unsigned long long height; 
        unsigned long long width; 
        unsigned long long rowBytes; 
    }  mRegionMap;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mUserBBox;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)getRegionLabels;
- (id)getRegionNameAtImageCoordinate:(struct CGPoint { double x1; double x2; })arg1 andImageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)getRegionNameAtNormalizedAlignedFaceCoordinate:(struct CGPoint { double x1; double x2; })arg1;
- (id)getRegionNameAtNormalizedFaceCoordinate:(struct CGPoint { double x1; double x2; })arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setRegionMap:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 deallocateBuffer:(bool)arg2 withUserBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 andAlignedBBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })arg4 andValueToLabelMap:(id)arg5;

@end
