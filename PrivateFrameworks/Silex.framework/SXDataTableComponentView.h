/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableComponentView : SXComponentView <SXDataTableComponentControllerDataSource, SXDataTableViewDataSource, SXTangierControllerDelegate, SXViewportChangeListener, UIGestureRecognizerDelegate> {
    SXDataTableBlueprint * _blueprint;
    SXDataTableComponentController * _dataTableComponentController;
    SXDataTableDictionary * _imageViews;
    CALayer * _leftShadow;
    CALayer * _rightShadow;
    STScrollView * _scrollView;
    SXDataTableView * _tableView;
    SXTangierController * _tangierController;
    SXDataTableDictionary * _textViews;
}

@property (nonatomic, retain) SXDataTableBlueprint *blueprint;
@property (nonatomic, retain) SXDataTableComponentController *dataTableComponentController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXDataTableDictionary *imageViews;
@property (nonatomic, retain) CALayer *leftShadow;
@property (nonatomic, retain) CALayer *rightShadow;
@property (nonatomic, retain) STScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, retain) SXDataTableView *tableView;
@property (nonatomic, retain) SXTangierController *tangierController;
@property (nonatomic, retain) SXDataTableDictionary *textViews;

- (void).cxx_destruct;
- (void)addTextStorageForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1 toCollectior:(id)arg2;
- (id)blueprint;
- (id)componentForDataTableComponentController:(id)arg1;
- (id)contentSizeCategoryForDataTableComponentController:(id)arg1;
- (id)contentViewForBehavior:(id)arg1;
- (id)dataTableComponentController;
- (id)dataTableView:(id)arg1 viewForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg2 constraintToSize:(struct CGSize { double x1; double x2; })arg3;
- (id)descriptorForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)documentColumnLayoutForDataTableComponentController:(id)arg1;
- (id)documentControllerForDataTableComponentController:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)imageViews;
- (id)leftShadow;
- (void)presentComponent;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (id)rightShadow;
- (id)scrollView;
- (void)setBlueprint:(id)arg1;
- (void)setDataTableComponentController:(id)arg1;
- (void)setImageViews:(id)arg1;
- (void)setLeftShadow:(id)arg1;
- (void)setRightShadow:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTangierController:(id)arg1;
- (void)setTextViews:(id)arg1;
- (void)setupShadowsIfNeeded;
- (id)tableView;
- (id)tangierController;
- (void)tangierControllerDidScroll:(id)arg1;
- (id)textComponentLayoutHostingForDataTableComponentController:(id)arg1;
- (id)textViews;
- (void)updateShadowOpacity;
- (void)updateTangierController;
- (double)widthForDataTableComponentController:(id)arg1;

@end
