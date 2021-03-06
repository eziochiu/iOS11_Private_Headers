/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeCorecipientViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    MFComposeRecipientTextView * _recipientView;
    NSMutableArray * _recipients;
    NSMutableIndexSet * _selectedIndexes;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MFComposeRecipientTextView *recipientView;
@property (nonatomic, readonly) NSArray *recipients;
@property (readonly) Class superclass;

- (void)_didTapDoneButton:(id)arg1;
- (void)_dismissAndAddSelectedContacts;
- (void)dealloc;
- (id)initWithRecentComposeRecipients:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)recipientView;
- (id)recipients;
- (void)setRecipientView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
