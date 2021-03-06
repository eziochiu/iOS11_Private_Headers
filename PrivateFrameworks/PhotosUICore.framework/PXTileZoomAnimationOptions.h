/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTileZoomAnimationOptions : NSObject <NSCopying> {
    unsigned long long  _flags;
    bool  _shouldCrossfade;
    long long  _transformType;
}

@property (nonatomic) unsigned long long flags;
@property (nonatomic) bool shouldCrossfade;
@property (nonatomic) long long transformType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)flags;
- (id)init;
- (void)setFlags:(unsigned long long)arg1;
- (void)setShouldCrossfade:(bool)arg1;
- (void)setTransformType:(long long)arg1;
- (bool)shouldCrossfade;
- (long long)transformType;

@end
