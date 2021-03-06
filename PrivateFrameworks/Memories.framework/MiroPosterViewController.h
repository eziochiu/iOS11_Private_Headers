/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroPosterViewController : UIViewController {
    PHAsset * _asset;
    UIImage * _image;
    UIImageView * _imageView;
    bool  _isRotating;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _landscapeFraming;
    MiroMemory * _memory;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _portraitFraming;
    bool  _preventRotation;
    NSString * _subtitleText;
    NSString * _titleFontName;
    double  _titleScale;
    MiroTitleSubtitleView * _titleSubtitleView;
    NSString * _titleText;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) bool isRotating;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } landscapeFraming;
@property (nonatomic) MiroMemory *memory;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } portraitFraming;
@property (nonatomic) bool preventRotation;
@property (nonatomic, retain) NSString *subtitleText;
@property (nonatomic, retain) NSString *titleFontName;
@property (nonatomic) double titleScale;
@property (nonatomic, retain) MiroTitleSubtitleView *titleSubtitleView;
@property (nonatomic, retain) NSString *titleText;

+ (double)biggestScreenPixelDimension;
+ (id)newPosterViewControllerWithTextFieldSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (id)asset;
- (void)assignImageFraming;
- (void)fetchImageAsynchronously;
- (id)image;
- (id)imageView;
- (bool)isRotating;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })landscapeFraming;
- (id)memory;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })portraitFraming;
- (bool)preventRotation;
- (void)setAsset:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setIsRotating:(bool)arg1;
- (void)setLandscapeFraming:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMemory:(id)arg1;
- (void)setPortraitFraming:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreventRotation:(bool)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleFontName:(id)arg1;
- (void)setTitleScale:(double)arg1;
- (void)setTitleSubtitleView:(id)arg1;
- (void)setTitleText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForImage;
- (id)subtitleText;
- (id)titleFontName;
- (double)titleScale;
- (id)titleSubtitleView;
- (id)titleText;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
