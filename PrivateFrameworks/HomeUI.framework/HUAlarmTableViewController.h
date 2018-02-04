/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAlarmTableViewController : UITableViewController <HUAlarmDataDelegate, HUAlarmEditViewControllerDelegate, HUAlarmTableViewCellDelegate> {
    UIBarButtonItem * _addButtonItem;
    MTAlarm * _alarmToEdit;
    NSArray * _alarms;
    <HUAlarmDataSource> * _dataSource;
    bool  _didScrollToCurrentTime;
    UIBarButtonItem * _doneButtonItem;
    UIBarButtonItem * _editDoneButtonItem;
    _UIContentUnavailableView * _noItemsView;
    bool  _viewVisible;
}

@property (nonatomic, retain) UIBarButtonItem *addButtonItem;
@property (nonatomic, retain) MTAlarm *alarmToEdit;
@property (nonatomic, retain) NSArray *alarms;
@property (nonatomic, retain) <HUAlarmDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didScrollToCurrentTime;
@property (nonatomic, retain) UIBarButtonItem *doneButtonItem;
@property (nonatomic, retain) UIBarButtonItem *editDoneButtonItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIContentUnavailableView *noItemsView;
@property (readonly) Class superclass;
@property (nonatomic) bool viewVisible;

- (void).cxx_destruct;
- (void)_dismissAddViewController:(id)arg1;
- (void)_editDoneAction:(id)arg1;
- (void)_layoutNoItemsLabel;
- (void)_numberOfItemsDidChangeAnimated:(bool)arg1;
- (void)_showAddView:(id)arg1;
- (void)_showEditViewForRow:(long long)arg1;
- (void)_submitDataModelChange:(id)arg1 editController:(id)arg2 operationType:(id)arg3 retryBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (id)_tableView:(id)arg1 templateLayoutCellForCellsWithReuseIdentifier:(id)arg2;
- (void)_updateNavigationItems:(bool)arg1;
- (void)adapter:(id)arg1 didUpdateAlarms:(id)arg2;
- (id)addButtonItem;
- (void)alarmEditController:(id)arg1 didAddAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didDeleteAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didEditAlarm:(id)arg2;
- (void)alarmEditControllerDidCancel:(id)arg1;
- (id)alarmToEdit;
- (id)alarms;
- (id)backgroundView;
- (id)contentScrollView;
- (id)dataSource;
- (bool)didScrollToCurrentTime;
- (id)doneButtonItem;
- (id)editDoneButtonItem;
- (id)editViewControllerForAlarm:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (void)loadView;
- (id)noItemsView;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)reloadData;
- (void)reloadDataAnimated:(bool)arg1;
- (void)reloadDataWithAlarms:(id)arg1;
- (void)reloadDataWithAlarms:(id)arg1 animated:(bool)arg2;
- (void)setAddButtonItem:(id)arg1;
- (void)setAlarmEnabled:(bool)arg1 forCell:(id)arg2;
- (void)setAlarmToEdit:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDataSource:(id)arg1 reloadData:(bool)arg2;
- (void)setDidScrollToCurrentTime:(bool)arg1;
- (void)setDoneButtonItem:(id)arg1;
- (void)setEditDoneButtonItem:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setNoItemsView:(id)arg1;
- (void)setViewVisible:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (bool)viewVisible;
- (void)viewWillAppear:(bool)arg1;

@end
