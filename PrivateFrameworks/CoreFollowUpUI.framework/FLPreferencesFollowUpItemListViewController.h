/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

@interface FLPreferencesFollowUpItemListViewController : PSListController {
    bool  _extensionActive;
    UIViewController * _presentationContext;
    <FLViewModel> * _topViewModel;
}

@property (nonatomic, retain) UIViewController *presentationContext;

- (void).cxx_destruct;
- (void)_dismissFlowWithError:(id)arg1;
- (void)_showRadarPromptForItem:(id)arg1 action:(id)arg2;
- (id)_topViewModel;
- (void)actionTapped:(id)arg1;
- (id)detailSpecifiersForFollowUpItem:(id)arg1;
- (id)followUpItemSpecifiers;
- (void)handleActionForItem:(id)arg1 fromSpecifier:(id)arg2;
- (void)handleURL:(id)arg1;
- (id)presentationContext;
- (void)setPresentationContext:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)specifiers;
- (void)startSpinnerForSpecifier:(id)arg1;
- (void)stopSpinnerForSpecifier:(id)arg1;

@end
