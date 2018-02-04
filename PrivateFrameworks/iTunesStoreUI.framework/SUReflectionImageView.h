/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUReflectionImageView : UIView {
    UIImageView * _imageView;
    unsigned int  _nonSquareImage;
    SUReflectionView * _reflection;
    double  _reflectionAlpha;
    double  _reflectionHeight;
    double  _spacing;
    bool  _useImageSize;
}

@property (nonatomic) bool nonSquareImage;
@property (nonatomic) double reflectionSpacing;

- (void)dealloc;
- (id)init;
- (id)initWithReflectionHeight:(double)arg1 spacing:(double)arg2;
- (bool)nonSquareImage;
- (double)reflectionSpacing;
- (void)setImage:(id)arg1;
- (void)setNonSquareImage:(bool)arg1;
- (void)setReflectionAlphaWhenVisible:(double)arg1;
- (void)setReflectionSpacing:(double)arg1;
- (void)setReflectionVisible:(bool)arg1;
- (void)setUseImageSize:(bool)arg1;

@end