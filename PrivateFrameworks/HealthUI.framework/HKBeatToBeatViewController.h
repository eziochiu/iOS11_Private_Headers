/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKBeatToBeatViewController : HKTableViewController {
    NSArray * _bpmPoints;
    HKDisplayTypeController * _displayTypeController;
    HKHealthStore * _healthStore;
    HKQuantitySample * _hrvSample;
    HKUnitPreferenceController * _unitController;
}

- (void).cxx_destruct;
- (void)_addHeartbeatSequenceSample:(id)arg1;
- (id)_displayStringForInstantaneousBPM:(double)arg1;
- (id)_displayStringForTime:(double)arg1;
- (void)_queryForBeatToBeatDataForHRVSample:(id)arg1 healthStore:(id)arg2;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
