/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTIcon : UIView {
    _UILegibilityView * _iconLegibilityView;
    PTIconSettings * _iconSettings;
    UIImage * _image;
    struct { 
        double meanRed; 
        double meanGreen; 
        double meanBlue; 
        double meanHue; 
        double meanSaturation; 
        double meanBrightness; 
        double meanAlpha; 
        double standardDeviationBrightness; 
        double standardDeviationSaturation; 
    }  _imageStatistics;
    UIImageView * _imageView;
    _UILegibilityLabel * _label;
    struct __CFRunLoopObserver { } * _runLoopObserver;
    NSString * _title;
}

@property (nonatomic, retain) _UILegibilityView *iconLegibilityView;
@property (nonatomic, retain) PTIconSettings *iconSettings;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; } imageStatistics;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) _UILegibilityLabel *label;
@property (nonatomic) struct __CFRunLoopObserver { }*runLoopObserver;
@property (nonatomic, copy) NSString *title;

+ (id)iconWithImage:(id)arg1 title:(id)arg2;
+ (id)iconWithImageName:(id)arg1 title:(id)arg2;

- (void).cxx_destruct;
- (id)iconLegibilityView;
- (id)iconSettings;
- (id)image;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })imageStatistics;
- (id)imageView;
- (id)init;
- (id)label;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelFrame;
- (void)layoutSubviews;
- (struct __CFRunLoopObserver { }*)runLoopObserver;
- (void)setIconLegibilityView:(id)arg1;
- (void)setIconSettings:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageStatistics:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1;
- (void)setImageView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setRunLoopObserver:(struct __CFRunLoopObserver { }*)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
