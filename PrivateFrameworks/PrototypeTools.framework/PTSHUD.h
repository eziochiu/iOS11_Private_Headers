/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSHUD : UIView <UIGestureRecognizerDelegate, _UISettingsGroupObserver, _UISettingsKeyPathObserver> {
    NSDictionary * _configuration;
    bool  _enteringModalEditingSavedModeTableViewCell;
    bool  _exitingModalEditingSavedModeTableViewCell;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialPoint;
    NSString * _mode;
    UIView * _panView;
    NSArray * _savedModeRows;
    unsigned long long  _savedSettingsIndex;
    _UISettings * _settings;
    _UISettingsGroup * _settingsGroup;
    bool  _showing;
}

@property (nonatomic, copy) NSDictionary *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enteringModalEditingSavedModeTableViewCell;
@property (nonatomic) bool exitingModalEditingSavedModeTableViewCell;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialPoint;
@property (nonatomic, copy) NSString *mode;
@property (nonatomic, retain) UIView *panView;
@property (nonatomic, retain) NSArray *savedModeRows;
@property (nonatomic) unsigned long long savedSettingsIndex;
@property (nonatomic, retain) _UISettings *settings;
@property (nonatomic, retain) _UISettingsGroup *settingsGroup;
@property (nonatomic) bool showing;
@property (readonly) Class superclass;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFrame;
+ (id)sharedInstance;
+ (id)window;

- (void).cxx_destruct;
- (void)addSavedSettings;
- (void)addSettingsAction:(id)arg1;
- (id)configuration;
- (void)configureForSettings:(id)arg1;
- (void)configureForSettings:(id)arg1 settingsGroup:(id)arg2;
- (void)editSavedModeTableAction:(id)arg1;
- (bool)enteringModalEditingSavedModeTableViewCell;
- (bool)exitingModalEditingSavedModeTableViewCell;
- (void)handleVerticalPanGesture:(id)arg1;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })initialPoint;
- (id)mode;
- (void)moveSavedSettingsAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)panView;
- (void)removeSavedSettingsAtIndex:(unsigned long long)arg1;
- (void)restoreDefaultValuesAction:(id)arg1;
- (void)saveSettingsAction:(id)arg1;
- (void)saveSettingsGroupWithReason:(id)arg1;
- (id)savedModeRows;
- (unsigned long long)savedSettingsIndex;
- (void)setConfiguration:(id)arg1;
- (void)setEnteringModalEditingSavedModeTableViewCell:(bool)arg1;
- (void)setExitingModalEditingSavedModeTableViewCell:(bool)arg1;
- (void)setInitialPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setModalEditingSavedModeTableViewCell:(bool)arg1;
- (void)setMode:(id)arg1;
- (void)setPanView:(id)arg1;
- (void)setSavedModeRows:(id)arg1;
- (void)setSavedSettingsIndex:(unsigned long long)arg1;
- (void)setSettings:(id)arg1;
- (void)setSettingsGroup:(id)arg1;
- (void)setShowing:(bool)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)settingsGroup;
- (void)settingsGroup:(id)arg1 didInsertSettings:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)settingsGroup:(id)arg1 didMoveSettings:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)settingsGroup:(id)arg1 didRemoveSettings:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)show;
- (void)showControlsModeAction:(id)arg1;
- (void)showInMode:(id)arg1;
- (void)showInModeForKeyPath:(id)arg1;
- (void)showMessage:(id)arg1;
- (void)showSavedModeAction:(id)arg1;
- (void)showSavedSettingsAtIndex:(unsigned long long)arg1;
- (bool)showing;
- (void)updateControlsModeInterface;
- (void)updateInterface;
- (void)updateSavedModeInterface;

@end