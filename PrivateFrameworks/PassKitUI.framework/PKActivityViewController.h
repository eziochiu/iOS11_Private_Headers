/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKActivityViewController : PKSectionTableViewController <CNUIObjectViewControllerDelegate, MFMessageComposeViewControllerDelegate, PKPeerPaymentContactResolverDelegate> {
    CNAvatarViewControllerSettings * _avatarViewControllerSettings;
    PKPeerPaymentContactResolver * _contactResolver;
    NSArray * _events;
    UIRefreshControl * _refreshControl;
    bool  _refreshing;
    bool  _visible;
}

@property (nonatomic, retain) CNAvatarViewControllerSettings *avatarViewControllerSettings;
@property (nonatomic, retain) PKPeerPaymentContactResolver *contactResolver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *events;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canCreatePeerPaymentMessage;
- (id)_contactKeysToFetch;
- (id)_detailViewControllerForPeerPaymentTransactionEvent:(id)arg1;
- (void)_didSelectEvent:(id)arg1;
- (void)_displayPeerPaymentComposeSheet;
- (id)_fetchEventsAndIncludeAdditionalEvents:(bool)arg1;
- (void)_handleMessageComposeAvailabilityDidChangeNotification:(id)arg1;
- (double)_heightForRowWithEvent:(id)arg1;
- (void)_mergeEvents:(id)arg1;
- (id)_mockPeerPaymentTransactionWithIdentifier:(id)arg1 amount:(id)arg2 currency:(id)arg3 counterpartHandle:(id)arg4 memo:(id)arg5 date:(id)arg6;
- (id)_tableViewCellForEvent:(id)arg1;
- (id)_tableViewCellForPeerPaymentTransaction:(id)arg1;
- (void)_updateCell:(id)arg1 withHandle:(id)arg2 contact:(id)arg3;
- (void)_updateCreatePeerPaymentNavigationBarItem;
- (void)_updateRefreshControl;
- (id)avatarViewControllerSettings;
- (id)contactResolver;
- (void)contactsDidChangeForContactResolver:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)events;
- (id)hostingViewControllerForController:(id)arg1;
- (id)init;
- (id)initWithStyle:(long long)arg1 numberOfSections:(unsigned long long)arg2;
- (void)loadView;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)refresh:(id)arg1;
- (void)setAvatarViewControllerSettings:(id)arg1;
- (void)setContactResolver:(id)arg1;
- (void)setEvents:(id)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)title;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
