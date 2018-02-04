/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingsValueManager : NSObject {
    HMHome * _home;
    HMAccessorySettings * _settings;
    NSMutableArray * _transactionStack;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSSet *pendingWrites;
@property (nonatomic, retain) HMAccessorySettings *settings;
@property (nonatomic, retain) NSMutableArray *transactionStack;

- (void).cxx_destruct;
- (void)_dispatchDidWriteValueForSettings:(id)arg1 failedSettings:(id)arg2;
- (void)_dispatchWillWriteValueForSettings:(id)arg1;
- (id)changeValueForSetting:(id)arg1 toValue:(id)arg2;
- (id)home;
- (id)initWithSettings:(id)arg1;
- (id)pendingWrites;
- (void)setSettings:(id)arg1;
- (void)setTransactionStack:(id)arg1;
- (id)settings;
- (id)transactionStack;
- (id)valueForSetting:(id)arg1;

@end
