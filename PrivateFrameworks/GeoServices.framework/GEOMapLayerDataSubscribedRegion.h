/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapLayerDataSubscribedRegion : NSObject <NSSecureCoding> {
    int  _coordinateCount;
    struct { double x1; double x2; } * _coordinates;
    bool  _isRectangle;
}

+ (bool)supportsSecureCoding;

- (bool)containsCoordinate:(struct { double x1; double x2; })arg1;
- (id)createMapRegion;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMapRegion:(id)arg1;
- (id)initWithRectangleC1:(struct { double x1; double x2; })arg1 c2:(struct { double x1; double x2; })arg2;
- (id)initWithVertices:(id)arg1;
- (id)initWithXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
