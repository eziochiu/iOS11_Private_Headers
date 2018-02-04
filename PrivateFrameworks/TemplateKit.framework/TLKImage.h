/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKImage : TLKObject {
    double  _cornerRadius;
    bool  _isTemplate;
    bool  _shouldCropToCircle;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    UIImage * _uiImage;
}

@property double cornerRadius;
@property bool isTemplate;
@property bool shouldCropToCircle;
@property struct CGSize { double x1; double x2; } size;
@property (retain) UIImage *uiImage;

- (void).cxx_destruct;
- (double)cornerRadius;
- (id)init;
- (id)initWithImage:(id)arg1;
- (bool)isTemplate;
- (id)observableProperties;
- (void)setCornerRadius:(double)arg1;
- (void)setIsTemplate:(bool)arg1;
- (void)setShouldCropToCircle:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUiImage:(id)arg1;
- (bool)shouldCropToCircle;
- (struct CGSize { double x1; double x2; })size;
- (id)uiImage;

@end
