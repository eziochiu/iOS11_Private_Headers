/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBHeadlineResultOperationFetchInfo : PBCodable <NSCopying> {
    long long  _appConfigTreatmentIDInteger;
    long long  _cellularRadioAccessTechnology;
    NSData * _clickThroughRateByPersonalizationFeatureIDData;
    NSString * _contentStoreFrontID;
    struct { 
        unsigned int appConfigTreatmentIDInteger : 1; 
        unsigned int cellularRadioAccessTechnology : 1; 
        unsigned int inputSlotsLimit : 1; 
        unsigned int onboardingVersion : 1; 
        unsigned int reachabilityStatus : 1; 
        unsigned int wifiReachable : 1; 
    }  _has;
    NSString * _headlineSourceIdentifier;
    double  _inputSlotsLimit;
    long long  _onboardingVersion;
    long long  _reachabilityStatus;
    NSString * _userID;
    NTPBTodayWidgetConfig * _widgetConfig;
    bool  _wifiReachable;
}

@property (nonatomic) long long appConfigTreatmentIDInteger;
@property (nonatomic) long long cellularRadioAccessTechnology;
@property (nonatomic, retain) NSData *clickThroughRateByPersonalizationFeatureIDData;
@property (nonatomic, retain) NSString *contentStoreFrontID;
@property (nonatomic) bool hasAppConfigTreatmentIDInteger;
@property (nonatomic) bool hasCellularRadioAccessTechnology;
@property (nonatomic, readonly) bool hasClickThroughRateByPersonalizationFeatureIDData;
@property (nonatomic, readonly) bool hasContentStoreFrontID;
@property (nonatomic, readonly) bool hasHeadlineSourceIdentifier;
@property (nonatomic) bool hasInputSlotsLimit;
@property (nonatomic) bool hasOnboardingVersion;
@property (nonatomic) bool hasReachabilityStatus;
@property (nonatomic, readonly) bool hasUserID;
@property (nonatomic, readonly) bool hasWidgetConfig;
@property (nonatomic) bool hasWifiReachable;
@property (nonatomic, retain) NSString *headlineSourceIdentifier;
@property (nonatomic) double inputSlotsLimit;
@property (nonatomic) long long onboardingVersion;
@property (nonatomic) long long reachabilityStatus;
@property (nonatomic, retain) NSString *userID;
@property (nonatomic, retain) NTPBTodayWidgetConfig *widgetConfig;
@property (nonatomic) bool wifiReachable;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (void).cxx_destruct;
- (long long)appConfigTreatmentIDInteger;
- (long long)cellularRadioAccessTechnology;
- (id)clickThroughRateByPersonalizationFeatureIDData;
- (id)contentStoreFrontID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppConfigTreatmentIDInteger;
- (bool)hasCellularRadioAccessTechnology;
- (bool)hasClickThroughRateByPersonalizationFeatureIDData;
- (bool)hasContentStoreFrontID;
- (bool)hasHeadlineSourceIdentifier;
- (bool)hasInputSlotsLimit;
- (bool)hasOnboardingVersion;
- (bool)hasReachabilityStatus;
- (bool)hasUserID;
- (bool)hasWidgetConfig;
- (bool)hasWifiReachable;
- (unsigned long long)hash;
- (id)headlineSourceIdentifier;
- (double)inputSlotsLimit;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)onboardingVersion;
- (long long)reachabilityStatus;
- (bool)readFrom:(id)arg1;
- (void)setAppConfigTreatmentIDInteger:(long long)arg1;
- (void)setCellularRadioAccessTechnology:(long long)arg1;
- (void)setClickThroughRateByPersonalizationFeatureIDData:(id)arg1;
- (void)setContentStoreFrontID:(id)arg1;
- (void)setHasAppConfigTreatmentIDInteger:(bool)arg1;
- (void)setHasCellularRadioAccessTechnology:(bool)arg1;
- (void)setHasInputSlotsLimit:(bool)arg1;
- (void)setHasOnboardingVersion:(bool)arg1;
- (void)setHasReachabilityStatus:(bool)arg1;
- (void)setHasWifiReachable:(bool)arg1;
- (void)setHeadlineSourceIdentifier:(id)arg1;
- (void)setInputSlotsLimit:(double)arg1;
- (void)setOnboardingVersion:(long long)arg1;
- (void)setReachabilityStatus:(long long)arg1;
- (void)setUserID:(id)arg1;
- (void)setWidgetConfig:(id)arg1;
- (void)setWifiReachable:(bool)arg1;
- (id)userID;
- (id)widgetConfig;
- (bool)wifiReachable;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)CTRByPersonalizationFeatureID;
- (id)appConfigTreatmentID;
- (void)setAppConfigTreatmentID:(id)arg1;
- (void)setCTRByPersonalizationFeatureID:(id)arg1;

@end
