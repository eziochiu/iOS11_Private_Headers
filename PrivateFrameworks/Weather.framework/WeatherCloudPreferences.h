/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WeatherCloudPreferences : NSObject <WeatherCloudPersistenceDelegate> {
    <WeatherPreferencesPersistence> * _cloudStore;
    WeatherPreferences * _localPreferences;
    <SynchronizedDefaultsDelegate> * _syncDelegate;
}

@property (retain) <WeatherPreferencesPersistence> *cloudStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) WeatherPreferences *localPreferences;
@property (readonly) Class superclass;
@property (nonatomic) <SynchronizedDefaultsDelegate> *syncDelegate;

- (void).cxx_destruct;
- (bool)areCloudCities:(id)arg1 equalToLocalCities:(id)arg2;
- (id)citiesByEnforcingSizeLimitOnResults:(id)arg1;
- (void)cloudCitiesChangedExternally:(id)arg1;
- (id)cloudCitiesFromLegacyCloudCities:(id)arg1;
- (id)cloudCityFromALCity:(id)arg1 name:(id)arg2;
- (id)cloudCityRepresentationsFromLegacyRepresentations;
- (void)cloudPersistenceDidSynchronize:(id)arg1;
- (id)cloudRepresentationFromCities:(id)arg1;
- (id)cloudStore;
- (void)forceSync;
- (id)initWithLocalPreferences:(id)arg1;
- (id)initWithLocalPreferences:(id)arg1 persistence:(id)arg2;
- (bool)legacyCloudCity:(id)arg1 isEqualToALCity:(id)arg2;
- (id)localPreferences;
- (id)prepareLocalCitiesForReconciliation:(id)arg1 isInitialSync:(bool)arg2;
- (id)reconcileCloudCities:(id)arg1 withLocal:(id)arg2 isInitialSync:(bool)arg3;
- (void)saveCitiesToCloud:(id)arg1;
- (void)setCloudStore:(id)arg1;
- (void)setCloudStoreCities:(id)arg1;
- (void)setLocalPreferences:(id)arg1;
- (void)setSyncDelegate:(id)arg1;
- (bool)shouldWriteCitiesToCloud:(id)arg1;
- (id)syncDelegate;
- (void)updateLocalStoreWithRemoteChanges:(id)arg1;

@end