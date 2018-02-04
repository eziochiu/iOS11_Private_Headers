/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDGenericInteractionRanker : NSObject <_CDInteractionRanking> {
    NSSet * _allowedIdentifiers;
    NSSet * _allowedPersonIdType;
    NSSet * _allowedPersonIds;
    double  _c;
    double  _contactNameKeywordMatchWeight;
    NSString * _contactPrefix;
    double  _diffWeekPeriodWeight;
    double  _keywordWeight;
    double  _locationWeight;
    double  _outgoingWeight;
    unsigned long long  _rankAggregationMethod;
    NSDate * _referenceDate;
    NSSet * _referenceKeywords;
    NSString * _referenceLocationUUID;
    bool  _requireAllSeedContacts;
    double  _sameWeekPeriodWeight;
    NSArray * _seedContacts;
    double  _socialWeight;
    double  _timeHalfLife;
    double  _timeOfDayHalfLife;
    double  _timeOfDayWeight;
    double  _timeOfWeekHalfLife;
    double  _timeOfWeekWeight;
    double  _timeWeight;
}

@property (retain) NSSet *allowedIdentifiers;
@property (retain) NSSet *allowedPersonIdType;
@property (retain) NSSet *allowedPersonIds;
@property double c;
@property double contactNameKeywordMatchWeight;
@property (retain) NSString *contactPrefix;
@property double diffWeekPeriodWeight;
@property double keywordWeight;
@property double locationWeight;
@property double outgoingWeight;
@property (nonatomic) unsigned long long rankAggregationMethod;
@property (retain) NSDate *referenceDate;
@property (retain) NSSet *referenceKeywords;
@property (retain) NSString *referenceLocationUUID;
@property bool requireAllSeedContacts;
@property double sameWeekPeriodWeight;
@property (retain) NSArray *seedContacts;
@property double socialWeight;
@property double timeHalfLife;
@property double timeOfDayHalfLife;
@property double timeOfDayWeight;
@property double timeOfWeekHalfLife;
@property double timeOfWeekWeight;
@property double timeWeight;

+ (bool)isDateInWeekend:(id)arg1;

- (void).cxx_destruct;
- (id)allowedIdentifiers;
- (id)allowedPersonIdType;
- (id)allowedPersonIds;
- (double)c;
- (bool)canRankContacts;
- (bool)contactIsAllowed:(id)arg1;
- (double)contactNameKeywordMatchWeight;
- (id)contactPrefix;
- (double)diffWeekPeriodWeight;
- (id)init;
- (double)keywordWeight;
- (double)locationWeight;
- (double)outgoingWeight;
- (unsigned long long)rankAggregationMethod;
- (double)rankContact:(id)arg1;
- (id)rankInteraction:(id)arg1;
- (id)referenceDate;
- (id)referenceKeywords;
- (id)referenceLocationUUID;
- (bool)requireAllSeedContacts;
- (double)sameWeekPeriodWeight;
- (id)seedContacts;
- (void)setAllowedIdentifiers:(id)arg1;
- (void)setAllowedPersonIdType:(id)arg1;
- (void)setAllowedPersonIds:(id)arg1;
- (void)setC:(double)arg1;
- (void)setContactNameKeywordMatchWeight:(double)arg1;
- (void)setContactPrefix:(id)arg1;
- (void)setDiffWeekPeriodWeight:(double)arg1;
- (void)setKeywordWeight:(double)arg1;
- (void)setLocationWeight:(double)arg1;
- (void)setOutgoingWeight:(double)arg1;
- (void)setRankAggregationMethod:(unsigned long long)arg1;
- (void)setReferenceDate:(id)arg1;
- (void)setReferenceKeywords:(id)arg1;
- (void)setReferenceLocationUUID:(id)arg1;
- (void)setRequireAllSeedContacts:(bool)arg1;
- (void)setSameWeekPeriodWeight:(double)arg1;
- (void)setSeedContacts:(id)arg1;
- (void)setSocialWeight:(double)arg1;
- (void)setTimeHalfLife:(double)arg1;
- (void)setTimeOfDayHalfLife:(double)arg1;
- (void)setTimeOfDayWeight:(double)arg1;
- (void)setTimeOfWeekHalfLife:(double)arg1;
- (void)setTimeOfWeekWeight:(double)arg1;
- (void)setTimeWeight:(double)arg1;
- (double)socialWeight;
- (double)timeHalfLife;
- (double)timeOfDayHalfLife;
- (double)timeOfDayWeight;
- (double)timeOfWeekHalfLife;
- (double)timeOfWeekWeight;
- (double)timeWeight;

@end