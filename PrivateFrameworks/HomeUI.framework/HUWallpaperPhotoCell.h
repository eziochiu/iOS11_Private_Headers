/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWallpaperPhotoCell : UICollectionViewCell {
    NSString * _assetIdentifier;
    bool  _busy;
    UIImageView * _imageView;
    UIActivityIndicatorView * _spinnerView;
}

@property (nonatomic, copy) NSString *assetIdentifier;
@property (nonatomic) bool busy;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIActivityIndicatorView *spinnerView;

- (void).cxx_destruct;
- (id)assetIdentifier;
- (bool)busy;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAssetIdentifier:(id)arg1;
- (void)setBusy:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setSpinnerView:(id)arg1;
- (id)spinnerView;

@end
