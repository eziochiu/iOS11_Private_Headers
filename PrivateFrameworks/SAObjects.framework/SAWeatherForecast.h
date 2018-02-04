/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherForecast : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSNumber *chanceOfPrecipitation;
@property (nonatomic, retain) SAWeatherCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *isUserRequested;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *timeIndex;

+ (id)forecast;
+ (id)forecastWithDictionary:(id)arg1 context:(id)arg2;

- (id)chanceOfPrecipitation;
- (id)condition;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)isUserRequested;
- (void)setChanceOfPrecipitation:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setIsUserRequested:(id)arg1;
- (void)setTimeIndex:(id)arg1;
- (id)timeIndex;

@end