/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchHistogramManager : NSObject {
    long long  _SSIDPruningMethod;
    long long  _aprConfirmsRejectsPruningMethod;
    long long  _aprIntentDonationPruningMethod;
    NSMutableDictionary * _categoricalHistograms;
    NSMutableDictionary * _histograms;
    int  _maxAprConfirmsRejectsIntentCount;
    int  _maxIntentDonationIntentCount;
    int  _maxSSIDCount;
    NSDictionary * _parameters;
    bool  _persistentStore;
}

+ (void)releaseTemporarySharedInstance;
+ (void)resetSharedInstance;
+ (id)sharedInstance;
+ (void)useTemporarySharedInstance:(id)arg1;

- (void).cxx_destruct;
- (id)categoricalHistogramForLaunchType:(long long)arg1;
- (id)histogramForLaunchType:(long long)arg1;
- (id)init;
- (id)initAndPersist:(bool)arg1;
- (id)initWithInMemoryStore;
- (id)initWithPersistentStore;

@end
