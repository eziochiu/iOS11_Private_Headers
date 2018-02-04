/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKObjectBoundsContext : NSObject {
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _edgePadding;
    struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { 
        struct Matrix<double, 2, 1> {} *__begin_; 
        struct Matrix<double, 2, 1> {} *__end_; 
        struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { 
            struct Matrix<double, 2, 1> {} *__first_; 
        } __end_cap_; 
    }  _points;
}

@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgePadding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoints:(const struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x1; struct Matrix<double, 2, 1> {} *x2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_1_1; } x3; }*)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgePadding;
- (bool)isEmpty;
- (void)setEdgePadding:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;

@end