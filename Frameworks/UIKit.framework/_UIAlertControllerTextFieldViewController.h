/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerTextFieldViewController : UICollectionViewController {
    UICollectionViewFlowLayout * _collectionViewLayout;
    <_UIAlertControllerTextFieldViewControllerContaining> * _container;
    bool  _hidden;
    bool  _textFieldsCanBecomeFirstResponder;
    UIAlertControllerVisualStyle * _visualStyle;
    NSMutableArray * textFieldViews;
    NSMutableArray * textFields;
}

@property (nonatomic) <_UIAlertControllerTextFieldViewControllerContaining> *container;
@property (getter=isHidden, nonatomic) bool hidden;
@property (readonly) NSArray *textFields;
@property (nonatomic) bool textFieldsCanBecomeFirstResponder;
@property (nonatomic) UIAlertControllerVisualStyle *visualStyle;

- (void).cxx_destruct;
- (double)_bottomMarginForTextFields;
- (void)_returnKeyPressedInTextField:(id)arg1;
- (void)_updatePreferredContentSize;
- (id)addTextFieldWithPlaceholder:(id)arg1 isSecure:(bool)arg2;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)container;
- (id)init;
- (bool)isHidden;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)numberOfTextFields;
- (void)removeAllTextFields;
- (bool)resignFirstResponder;
- (void)setContainer:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setTextFieldsCanBecomeFirstResponder:(bool)arg1;
- (void)setVisualStyle:(id)arg1;
- (id)textFieldAtIndex:(long long)arg1;
- (id)textFields;
- (bool)textFieldsCanBecomeFirstResponder;
- (void)updateTextFieldStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)visualStyle;

@end