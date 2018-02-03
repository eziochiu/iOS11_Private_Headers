/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIBatteryViewAXHUDImageCacheInfo : NSObject {
    UIImage * _cachedImage;
    double  _capacity;
    UIColor * _fillColor;
    bool  _reverseLayoutDirection;
    double  _scale;
    bool  _showBolt;
}

@property (nonatomic, retain) UIImage *cachedImage;
@property (nonatomic) double capacity;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic) bool reverseLayoutDirection;
@property (nonatomic) double scale;
@property (nonatomic) bool showBolt;

- (void).cxx_destruct;
- (bool)cacheMatchesCapacity:(double)arg1 fillColor:(id)arg2 showingBolt:(bool)arg3 reverseLayout:(bool)arg4 scale:(double)arg5;
- (id)cachedImage;
- (double)capacity;
- (id)fillColor;
- (bool)reverseLayoutDirection;
- (double)scale;
- (void)setCachedImage:(id)arg1;
- (void)setCapacity:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setReverseLayoutDirection:(bool)arg1;
- (void)setScale:(double)arg1;
- (void)setShowBolt:(bool)arg1;
- (bool)showBolt;

@end