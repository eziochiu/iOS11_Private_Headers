/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMovieCardSectionUpNextButtonView : SearchUIMovieCardSectionBuyButtonView {
    bool  _isInUpNext;
}

@property bool isInUpNext;

- (void)buttonPressed;
- (id)initIsInUpNext:(bool)arg1 cardSectionView:(id)arg2;
- (bool)isInUpNext;
- (void)setIsInUpNext:(bool)arg1;
- (void)updateUpNextStatus:(bool)arg1;

@end
