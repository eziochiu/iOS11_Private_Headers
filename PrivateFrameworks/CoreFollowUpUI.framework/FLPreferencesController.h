/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

@interface FLPreferencesController : NSObject {
    bool  _activityIndicatorActive;
    FLPreferencesFollowUpItemListViewController * _controller;
    id /* block */  _itemChangeObserver;
    PSListController * _listViewController;
    NSSet * _spyglassWhitelist;
    <FLViewModel> * _topViewModel;
}

@property (nonatomic, copy) id /* block */ itemChangeObserver;
@property (nonatomic) PSListController *listViewController;

- (void).cxx_destruct;
- (id)_extensionSupportingSpecifierWithName:(id)arg1;
- (void)_handleEmptyRefreshResult:(id)arg1;
- (void)_presentSpecifier:(id)arg1;
- (void)_refreshItemsAndPresentDetailForSpecifier:(id)arg1;
- (id)_specifierForGroup:(id)arg1;
- (id)_specifierForItem:(id)arg1 group:(id)arg2;
- (void)_updateSpecifier:(id)arg1 withCommonPropertiesForGroup:(id)arg2;
- (id)_urlBasedSpecifierWithName:(id)arg1;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (id /* block */)itemChangeObserver;
- (id)listViewController;
- (void)loadSpecifier:(id)arg1;
- (void)setItemChangeObserver:(id /* block */)arg1;
- (void)setListViewController:(id)arg1;
- (id)spyglassSpecifiers;
- (void)startSpinnerForSpecifier:(id)arg1;
- (void)stopSpinnerForSpecifier:(id)arg1;
- (id)topLevelSpecifiers;

@end
