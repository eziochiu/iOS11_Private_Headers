/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWallpaperThumbnailCell : UITableViewCell {
    NSLayoutConstraint * _imageHeightConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    UIImageView * _imageThumbnailView;
    NSLayoutConstraint * _imageWidthConstraint;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSLayoutConstraint *imageHeightConstraint;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) UIImageView *imageThumbnailView;
@property (nonatomic, retain) NSLayoutConstraint *imageWidthConstraint;

- (void).cxx_destruct;
- (id)image;
- (id)imageHeightConstraint;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageThumbnailView;
- (id)imageWidthConstraint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setImage:(id)arg1;
- (void)setImageHeightConstraint:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageThumbnailView:(id)arg1;
- (void)setImageWidthConstraint:(id)arg1;

@end
