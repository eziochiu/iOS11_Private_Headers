/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVTemplateController : _TVBgImageLoadingViewController {
    UIImageView * _backgroundImageView;
    UIView * _contentView;
    TVImageProxy * _imageProxy;
    IKViewElement * _viewElement;
}

@property (nonatomic, retain) UIImageView *backgroundImageView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) TVImageProxy *imageProxy;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (void)_addNewContentView:(id)arg1;
- (id)_backgroundImageProxy;
- (struct CGSize { double x1; double x2; })_backgroundImageProxySize;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (id)_imageProxyFromTemplateViewElement:(id)arg1;
- (id)backgroundImageView;
- (id)contentView;
- (id)imageProxy;
- (void)loadView;
- (void)setBackgroundImageView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setImageProxy:(id)arg1;
- (void)setViewElement:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)viewElement;

@end