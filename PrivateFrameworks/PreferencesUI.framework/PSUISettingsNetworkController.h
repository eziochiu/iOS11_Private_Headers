/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUISettingsNetworkController : PSListController {
    PSUIAppCellularUsageGroupController * _appUsageGroupController;
    NSArray * _appUsageSpecifierCache;
    CHManager * _callHistoryManager;
    PSUICarrierSpaceGroupController * _carrierSpace;
    NSMutableArray * _carrierSpaceBundleControllers;
    PSUICellularAccountListGroupController * _cellularAccountListGroupController;
    PSUICellularAccountGroupController * _cellularGroupController;
    PSSpecifier * _currentSpecifier;
    bool  _disabled;
    PSSpecifier * _facetimeSetupButton;
    PSSpecifier * _facetimeSetupGroup;
    bool  _ignoreNextEntitlementStatusChange;
    PSSpecifier * _lastResetSpecifier;
    PSSpecifier * _lifetimeSpecifier;
    PSSpecifier * _viewAccount;
    PSSpecifier * _viewAccountGroup;
    NSArray * _wifiCallingSpecifiers;
    WirelessDataUsageWorkspace * _workspace;
}

@property (nonatomic, retain) PSUIAppCellularUsageGroupController *appUsageGroupController;
@property (nonatomic, retain) CHManager *callHistoryManager;
@property (nonatomic, retain) PSUICarrierSpaceGroupController *carrierSpace;
@property (nonatomic, retain) PSUICellularAccountListGroupController *cellularAccountListGroupController;
@property (nonatomic, retain) PSUICellularAccountGroupController *cellularGroupController;
@property (nonatomic, retain) WirelessDataUsageWorkspace *workspace;

+ (bool)isConnectedOverWiFi;

- (void).cxx_destruct;
- (id)_lastUpdateDate;
- (void)_setMobileDataSwitch:(bool)arg1;
- (void)_updateLastResetText;
- (void)acceptedDataSwitch:(id)arg1;
- (void)airplaneModeChanged;
- (void)airplaneModeOrSIMStatusChanged;
- (id)appUsageGroupController;
- (id)callHistoryManager;
- (id)callTime:(id)arg1;
- (id)callTimeDurationRestrictedToCurrentPeriod:(bool)arg1;
- (void)canceledDataSwitch:(id)arg1;
- (id)carrierSpace;
- (id)cellularAccountListGroupController;
- (id)cellularDataOptionsDetailText:(id)arg1;
- (id)cellularGroupController;
- (void)cellularPlanChanged;
- (void)clearStats:(id)arg1;
- (void)dataRegistrationChangedWithUserInfo:(id)arg1;
- (void)dealloc;
- (void)entitlementStatusChanged;
- (void)handleCallTimersChanged;
- (void)handleURL:(id)arg1;
- (id)init;
- (bool)isCellularDisabled;
- (id)isMobileDataEnabled:(id)arg1;
- (id)lifetimeCallTime:(id)arg1;
- (void)newCarrierNotification;
- (void)setAppUsageGroupController:(id)arg1;
- (void)setCallHistoryManager:(id)arg1;
- (void)setCarrierSpace:(id)arg1;
- (void)setCellularAccountListGroupController:(id)arg1;
- (void)setCellularGroupController:(id)arg1;
- (void)setMobileDataIsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setWorkspace:(id)arg1;
- (void)setupCellularFaceTime:(id)arg1;
- (bool)shouldShowFaceTimeSetup;
- (bool)shouldShowViewAccount;
- (bool)showDataPlanOnly;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)totalBytesUsedChangedNotification;
- (id)totalDataUsageForSpecifier:(id)arg1;
- (id)totalRoamingDataUsageForSpecifier:(id)arg1;
- (void)updateAppUsageGroupEnabledState;
- (void)updatePaneWithCellularDataState:(bool)arg1;
- (void)viewAccountPressed:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)wirelessDataUsageChangedNotification;
- (id)workspace;

@end
