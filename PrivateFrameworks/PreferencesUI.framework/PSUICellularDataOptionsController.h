/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICellularDataOptionsController : PSListController {
    bool  _3GOverrideTo4G;
    bool  _LTEOverrideTo4G;
    PSListItemsController * _RATModeDrilldownController;
    int  _RATSwitchKind;
    PSSpecifier * _enableRATSpecifier;
    PSSpecifier * _mobileDataGroup;
}

- (void).cxx_destruct;
- (void)_setRATModeConfirmed:(int)arg1;
- (void)_setRATModeStateIsOn:(bool)arg1;
- (bool)_updateMobileDataGroupContentShowingRAT:(bool)arg1;
- (void)acceptedRATSwitch:(id)arg1;
- (void)canceledRATSwitch:(id)arg1;
- (id)controllerForSpecifier:(id)arg1;
- (id)getCDMARoamingStatus:(id)arg1;
- (id)getDataRoamingStatus:(id)arg1;
- (id)getEUInternetStatus:(id)arg1;
- (id)getLTEService:(id)arg1;
- (id)getRATModeState:(id)arg1;
- (id)getRATSwitchIsOn:(id)arg1;
- (id)isMobileDataEnabled:(id)arg1;
- (id)localizableRATModeStringKeyForKey:(id)arg1 targetMode:(int)arg2;
- (void)reloadRATStatus:(id)arg1;
- (void)roamingOptionsDidChange;
- (id)roamingSettingsDescription:(id)arg1;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetCancelled:(id)arg1;
- (void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetEnabledConfirmed:(id)arg1;
- (void)setLTEService:(id)arg1 specifier:(id)arg2;
- (void)setRATModeState:(id)arg1 specifier:(id)arg2;
- (void)setRATSwitchIsOn:(id)arg1 specifier:(id)arg2;
- (bool)shouldShowLTEOptions;
- (bool)shouldShowLegacyRATOptions;
- (id)specifiers;
- (bool)supportsVoLTE;
- (void)updateRATSpecifiers;
- (void)updateRATStateWithDictionary:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
