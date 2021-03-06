/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNMedicalIDAction : CNPropertyAction <HKMedicalIDViewControllerDelegate> {
    _HKMedicalIDData * _healthData;
    HKHealthStore * _healthStore;
    long long  _medicalIDActionType;
}

@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _HKMedicalIDData *healthData;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic) long long medicalIDActionType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)healthData;
- (id)healthStore;
- (long long)medicalIDActionType;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)medicalIDViewControllerDidFinish:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)performActionWithSender:(id)arg1;
- (void)setHealthData:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setMedicalIDActionType:(long long)arg1;

@end
