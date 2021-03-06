/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInlineColorPicker : UIView <UIScrollViewDelegate> {
    NSArray * _buttonItems;
    unsigned long long  _colorSet;
    NSArray * _colors;
    <PKInlineColorPickerDelegate> * _delegate;
    bool  _isUsedOnDarkBackground;
    UIView * _leftOverflowView;
    UIView * _rightOverflowView;
    UIScrollView * _scrollView;
    unsigned long long  _selectedColorIndex;
    unsigned long long  _selectionState;
    bool  _shouldEmboss;
    unsigned long long  _sizeState;
}

@property (nonatomic, retain) NSArray *buttonItems;
@property (nonatomic) unsigned long long colorSet;
@property (nonatomic, retain) NSArray *colors;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKInlineColorPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isUsedOnDarkBackground;
@property (nonatomic, retain) UIView *leftOverflowView;
@property (nonatomic, retain) UIView *rightOverflowView;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIColor *selectedColor;
@property (nonatomic) unsigned long long selectedColorIndex;
@property (nonatomic) unsigned long long selectionState;
@property (nonatomic) bool shouldEmboss;
@property (nonatomic) unsigned long long sizeState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_axHandleLongPressOnColorButtonForLargeTextHUD:(id)arg1;
- (id)_axLabelForColorButton:(id)arg1;
- (void)_commonInit;
- (id)buttonItems;
- (unsigned long long)colorIndexClosestToColor:(id)arg1;
- (void)colorPressed:(id)arg1;
- (unsigned long long)colorSet;
- (void)colorTappedInCompactChooseColorState:(id)arg1;
- (void)colorTappedInCompactChooseToolState:(id)arg1;
- (void)colorTappedInRegularState:(id)arg1;
- (void)colorUnpressed:(id)arg1;
- (id)colors;
- (id)colorsForColorSet:(unsigned long long)arg1;
- (id)createColorButtonItemWithColor:(id)arg1 shouldEmboss:(bool)arg2;
- (id)delegate;
- (id)initWithEmbossing:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isUsedOnDarkBackground;
- (void)layoutSubviews;
- (id)leftOverflowView;
- (id)rightOverflowView;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectedColor;
- (unsigned long long)selectedColorIndex;
- (unsigned long long)selectionState;
- (void)setButtonItems:(id)arg1;
- (void)setColorSet:(unsigned long long)arg1;
- (void)setColors:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsUsedOnDarkBackground:(bool)arg1;
- (void)setLeftOverflowView:(id)arg1;
- (void)setRightOverflowView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setSelectedColorIndex:(unsigned long long)arg1;
- (void)setSelectionState:(unsigned long long)arg1;
- (void)setShouldEmboss:(bool)arg1;
- (void)setSizeState:(unsigned long long)arg1;
- (bool)shouldEmboss;
- (void)showOverflowViewsIfNeeded;
- (unsigned long long)sizeState;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 sizeState:(unsigned long long)arg2 selectionState:(unsigned long long)arg3;

@end
