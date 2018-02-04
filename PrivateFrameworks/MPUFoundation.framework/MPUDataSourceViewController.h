/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUDataSourceViewController : UIViewController <UIStateRestoring, UIViewControllerRestoration> {
    MPUDataSource * _dataSource;
    bool  _hasEverReloadedData;
    bool  _shouldReloadWhenVisible;
    bool  _visible;
}

@property (nonatomic, retain) MPUDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class objectRestorationClass;
@property (nonatomic, readonly) MPUQueryDataSource *queryDataSource;
@property (nonatomic, readonly) <UIStateRestoring> *restorationParent;
@property (nonatomic) bool shouldReloadWhenVisible;
@property (readonly) Class superclass;
@property (getter=isVisible, nonatomic) bool visible;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (void)_MPUStandardViewController_dataSourceDidInvalidateNotification:(id)arg1;
- (void)_MPUStandardViewController_dataSourceWillInvalidateNotification:(id)arg1;
- (void)_setDataSource:(id)arg1 shouldReloadData:(bool)arg2;
- (id)dataSource;
- (void)dataSourceDidInvalidate;
- (void)dataSourceWillInvalidate;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (bool)isVisible;
- (id)queryDataSource;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)setShouldReloadWhenVisible:(bool)arg1;
- (void)setVisible:(bool)arg1;
- (bool)shouldReloadWhenVisible;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end