/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextThumbnailCell : NTKUpNextBaseCell {
    CLKFont * _boldFont;
    NTKColoringLabel * _descriptionLine1Label;
    NTKColoringLabel * _descriptionLine2Label;
    NTKColoringLabel * _headerLabel;
    NSLayoutConstraint * _imageHeightConstraint;
    UIImageView * _imageView;
    NSLayoutConstraint * _imageWidthConstraint;
    CLKFont * _italicFont;
    UILayoutGuide * _labelLayoutGuide;
    bool  _showingHeader;
    bool  _showingThreeLineLayout;
    CLKFont * _standardFont;
    NSArray * _withDescription2Constraints;
    NSArray * _withHeaderConstraints;
    NSArray * _withoutDescription2Constraints;
    NSArray * _withoutHeaderConstraints;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)configureWithContent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateConstraints;

@end
