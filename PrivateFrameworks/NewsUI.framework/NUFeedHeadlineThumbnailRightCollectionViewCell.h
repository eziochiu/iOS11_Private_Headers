/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUFeedHeadlineThumbnailRightCollectionViewCell : NUFeedHeadlineCollectionViewCell {
    NUCanvas * _canvas;
}

@property (nonatomic, readonly) NUCanvas *canvas;

- (void).cxx_destruct;
- (id)buildCanvas;
- (id)canvas;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
