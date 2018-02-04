/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUFixedRegionPolicy : NSObject <NURegionPolicy> {
    NURegion * _region;
    long long  _roundingPolicy;
    struct { 
        long long numerator; 
        long long denominator; 
    }  _scale;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NURegion *region;
@property long long roundingPolicy;
@property struct { long long x1; long long x2; } scale;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)initWithRegion:(id)arg1;
- (id)region;
- (id)regionForGeometry:(id)arg1;
- (long long)roundingPolicy;
- (struct { long long x1; long long x2; })scale;
- (void)setRoundingPolicy:(long long)arg1;
- (void)setScale:(struct { long long x1; long long x2; })arg1;

@end