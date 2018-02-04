/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureAccessFinder : NSObject {
    bool  _allowNetwork;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) bool allowNetwork;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (bool)_boundingCircle:(const struct Sphere<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; float x2; }*)arg1 intersectsFeature:(struct { struct { id x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; bool x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned char x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; }*)arg2;
- (bool)_boundingCircle:(const struct Sphere<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; float x2; }*)arg1 intersectsPoints:(struct { float x1; float x2; }*)arg2 pointCount:(unsigned long long)arg3;
- (bool)_boundingCircle:(const struct Sphere<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; float x2; }*)arg1 intersectsTransitLink:(struct { id x1; unsigned int x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; unsigned long long x6; unsigned long long x7; struct _NSRange { unsigned long long x_8_1_1; unsigned long long x_8_1_2; } x8; struct _NSRange { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; bool x10; struct _NSRange { unsigned long long x_11_1_1; unsigned long long x_11_1_2; } x11; struct _NSRange { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct _NSRange { unsigned long long x_13_1_1; unsigned long long x_13_1_2; } x13[2]; struct _NSRange { unsigned long long x_14_1_1; unsigned long long x_14_1_2; } x14[2]; }*)arg2;
- (struct Sphere<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; float x2; })_boundingCircleWithCenter:(struct { double x1; double x2; })arg1 radius:(double)arg2 inTile:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg3;
- (bool)allowNetwork;
- (id)init;
- (id)queue;
- (void)setAllowNetwork:(bool)arg1;
- (void)setQueue:(id)arg1;

@end