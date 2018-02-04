/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFFindOnPageToolbar : UIInputView <UISearchBarDelegate> {
    UIBarButtonItem * _doneBarButtonItem;
    bool  _editing;
    <_SFFindOnPageToolbarDelegate> * _findDelegate;
    UILabel * _inFieldMatchLabel;
    _SFFindOnPageInputBarContainer * _inputBarContainer;
    UILabel * _matchLabel;
    NSLayoutConstraint * _matchLabelZeroWidthConstraint;
    UIBarButtonItem * _nextButtonItem;
    UIBarButtonItem * _previousButtonItem;
    NSString * _searchText;
    NSTimer * _textChangedUpdateTimer;
    UIToolbar * _toolbar;
    NSArray * _toolbarItems;
    bool  _usesNarrowLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UITextField *inputField;
@property (nonatomic, copy) NSString *searchText;
@property (readonly) Class superclass;
@property (nonatomic) bool usesNarrowLayout;

- (void).cxx_destruct;
- (void)_doUpdateSearchText;
- (void)_done;
- (void)_initializeToolbarItems;
- (bool)_keyboardIsSplit;
- (void)_orientationDidChange:(id)arg1;
- (bool)_updateEditing:(bool)arg1;
- (void)dealloc;
- (void)dismiss:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)inputField;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })leftContentViewSize;
- (void)next:(id)arg1;
- (void)previous:(id)arg1;
- (struct CGSize { double x1; double x2; })rightContentViewSize;
- (void)safeAreaInsetsDidChange;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (void)setUsesNarrowLayout:(bool)arg1;
- (void)updateUI;
- (bool)usesNarrowLayout;

@end