/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSpatialCollider : NSObject <NSFastEnumeration> {
    bool  _isVertical;
    double  _maxLength;
    long long  _options;
    _MKSpatialColliderPairSet * _previousCollisionPairs;
    _MKSpatialColliderPairSet * _registeredCollisonPairs;
    /* Warning: unhandled struct encoding: '{vector<MKAnnotationView *, std::__1::allocator<MKAnnotationView *> >="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<MKAnnotationView **, std::__1::allocator<MKAnnotationView *> >="__first_"^@}}' */ struct vector<MKAnnotationView *, std::__1::allocator<MKAnnotationView *> > { 
        __end_ **__begin_; 
    }  _sortedAnnotationViews;
    unsigned long long  mutator;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)annotationViewAtIndex:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithAnnotationViews:(id)arg1 previousCollissions:(id)arg2 options:(long long)arg3;
- (unsigned long long)insertAnnotationView:(id)arg1;
- (id)registeredCollissions;
- (unsigned long long)viewCount;
- (id)viewsCollidingWithAnnotationView:(id)arg1;
- (id)viewsCollidingWithAnnotationView:(id)arg1 fromIndex:(long long)arg2 length:(double)arg3;
- (id)viewsCollidingWithAnnotationViewAtIndex:(unsigned long long)arg1;

@end