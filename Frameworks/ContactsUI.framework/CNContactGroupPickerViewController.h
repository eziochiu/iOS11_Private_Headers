/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactGroupPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    <CNContactGroupPickerDelegate> * _groupPickerDelegate;
    NSArray * _pickableGroups;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CNContactGroupPickerDelegate> *groupPickerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)pickableGroupsWithPickedGroups:(id)arg1 policy:(id)arg2;
+ (bool)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2;
+ (id)propertySections;

- (void).cxx_destruct;
- (id)_loadPickableGroupsWithPickedGroups:(id)arg1 policy:(id)arg2;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)groupPickerDelegate;
- (id)initWithGroups:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setGroupPickerDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)viewWillAppear:(bool)arg1;

@end