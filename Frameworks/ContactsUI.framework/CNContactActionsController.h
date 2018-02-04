/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactActionsController : NSObject <CNAvatarCardActionListController, CNUINavigationListViewControllerDelegate, CNUIUserActionListConsumer> {
    NSArray * _actionTypes;
    <CNUIUserActionListDataSource> * _actionsDataSource;
    long long  _actionsOrder;
    <CNContactActionsControllerDelegate> * _delegate;
    NSArray * _modelCancelables;
    NSDictionary * _modelsByActionTypes;
    UIViewController * _viewController;
}

@property (nonatomic, copy) NSArray *actionTypes;
@property (nonatomic, retain) <CNUIUserActionListDataSource> *actionsDataSource;
@property (nonatomic) long long actionsOrder;
@property (nonatomic) bool actionsReversed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactActionsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *modelCancelables;
@property (nonatomic, copy) NSDictionary *modelsByActionTypes;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;

+ (id)descriptorForRequiredKeysForActionTypes:(id)arg1;
+ (id)supportedActionTypes;

- (void).cxx_destruct;
- (id)actionTypes;
- (id)actionsDataSource;
- (long long)actionsOrder;
- (bool)actionsReversed;
- (void)cancelModels;
- (void)dealloc;
- (id)delegate;
- (id)displayedController;
- (id)imageForActionType:(id)arg1;
- (id)initWithContact:(id)arg1 actionTypes:(id)arg2;
- (id)initWithDataSource:(id)arg1 actionTypes:(id)arg2;
- (id)modelCancelables;
- (id)modelForActionType:(id)arg1;
- (id)modelsByActionTypes;
- (void)navigationListController:(id)arg1 didSelectItem:(id)arg2;
- (id)navigationListItemForUserActionType:(id)arg1;
- (void)prepareNavigationListItems;
- (void)retrieveModels;
- (void)setActionTypes:(id)arg1;
- (void)setActionsDataSource:(id)arg1;
- (void)setActionsOrder:(long long)arg1;
- (void)setActionsReversed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setModelCancelables:(id)arg1;
- (void)setModelsByActionTypes:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end