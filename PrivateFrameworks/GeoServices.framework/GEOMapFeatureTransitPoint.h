/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureTransitPoint : NSObject {
    double  _boundingRadius;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _boundingRect;
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    struct GEOTransitNodeFeature { struct { struct { id x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; bool x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; } x_1_1_2; struct { float x_3_2_1; float x_3_2_2; } x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned long long x_1_1_7; short x_1_1_8; unsigned char x_1_1_9; struct { /* ? */ } *x_1_1_10; float x_1_1_11; float x_1_1_12; unsigned int x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; bool x_1_1_17; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct { /* ? */ } *x3; struct GEOTransitNodeFeature {} *x4; unsigned long long *x5; unsigned long long *x6; BOOL x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned short x11; unsigned long long x12; unsigned int x13; } * _feature;
    struct { double x1; double x2; } * _polygonPoints;
    unsigned long long  _polygonPointsCount;
}

@property (nonatomic, readonly) double boundingRadius;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, readonly) struct GEOTransitNodeFeature { struct { struct { id x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; bool x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; } x_1_1_2; struct { float x_3_2_1; float x_3_2_2; } x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned long long x_1_1_7; short x_1_1_8; unsigned char x_1_1_9; struct { /* ? */ } *x_1_1_10; float x_1_1_11; float x_1_1_12; unsigned int x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; bool x_1_1_17; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct { /* ? */ } *x3; struct GEOTransitNodeFeature {} *x4; unsigned long long *x5; unsigned long long *x6; BOOL x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned short x11; unsigned long long x12; unsigned int x13; }*feature;
@property (nonatomic, readonly) GEOMapFeatureTransitHall *hall;
@property (nonatomic, readonly) NSString *internalName;
@property (nonatomic, readonly) NSArray *internalSystemNames;
@property (nonatomic, readonly) struct { double x1; double x2; }*polygonPoints;
@property (nonatomic, readonly) unsigned long long polygonPointsCount;
@property (nonatomic, readonly) GEOMapFeatureTransitStation *station;
@property (nonatomic, readonly) GEOMapFeatureTransitStop *stop;
@property (nonatomic, readonly) struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; } tileKey;
@property (nonatomic, readonly) unsigned long long transitID;

- (double)boundingRadius;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)description;
- (struct GEOTransitNodeFeature { struct { struct { id x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; bool x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; } x_1_1_2; struct { float x_3_2_1; float x_3_2_2; } x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned long long x_1_1_7; short x_1_1_8; unsigned char x_1_1_9; struct { /* ? */ } *x_1_1_10; float x_1_1_11; float x_1_1_12; unsigned int x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; bool x_1_1_17; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct { /* ? */ } *x3; struct GEOTransitNodeFeature {} *x4; unsigned long long *x5; unsigned long long *x6; BOOL x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned short x11; unsigned long long x12; unsigned int x13; }*)feature;
- (id)hall;
- (id)initWithFeature:(struct GEOTransitNodeFeature { struct { struct { id x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; bool x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; } x_1_1_2; struct { float x_3_2_1; float x_3_2_2; } x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned long long x_1_1_7; short x_1_1_8; unsigned char x_1_1_9; struct { /* ? */ } *x_1_1_10; float x_1_1_11; float x_1_1_12; unsigned int x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; bool x_1_1_17; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct { /* ? */ } *x3; struct GEOTransitNodeFeature {} *x4; unsigned long long *x5; unsigned long long *x6; BOOL x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned short x11; unsigned long long x12; unsigned int x13; }*)arg1;
- (id)internalName;
- (id)internalSystemNames;
- (struct { double x1; double x2; }*)polygonPoints;
- (unsigned long long)polygonPointsCount;
- (id)station;
- (id)stop;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })tileKey;
- (unsigned long long)transitID;
- (void)updateWithGeometryFeature:(struct { struct { struct { id x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; bool x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; int x_1_1_4; int x_1_1_5; int x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; union { struct { struct { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_9_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_9_2_2; } x_1_1_9; struct { /* ? */ } *x_1_1_10; struct { unsigned short x_11_2_1[2]; unsigned short x_11_2_2[2]; } x_1_1_11; unsigned char x_1_1_12; bool x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; unsigned char x_1_1_17; bool x_1_1_18; unsigned char x_1_1_19; struct _NSRange { unsigned long long x_20_2_1; unsigned long long x_20_2_2; } x_1_1_20; bool x_1_1_21; } x1; }*)arg1;

@end