/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMediaContainerList : NSObject {
    NSArray * _containers;
    unsigned long long  _lastEvaluatedQuota;
    unsigned long long  _nominatedTracksSize;
    NSArray * _offPowerTrackList;
    NSArray * _onPowerTrackList;
    unsigned long long  _selectedTracksSizeForQuota;
    NSArray * _trackListForQuota;
}

@property (nonatomic, retain) NSArray *containers;
@property (nonatomic) unsigned long long lastEvaluatedQuota;
@property (nonatomic) unsigned long long nominatedTracksSize;
@property (nonatomic, retain) NSArray *offPowerTrackList;
@property (nonatomic, retain) NSArray *onPowerTrackList;
@property (nonatomic) unsigned long long selectedTracksSizeForQuota;
@property (nonatomic, retain) NSArray *trackListForQuota;

+ (id)containerListFromArray:(id)arg1;

- (void).cxx_destruct;
- (void)_evaluateContainersAgainstQuota:(unsigned long long)arg1;
- (void)_evaluateContainersAgainstQuotaIfNecessary:(unsigned long long)arg1;
- (id)containers;
- (id)containersEvaluatedAgainstQuota:(unsigned long long)arg1;
- (id)description;
- (id)identifiersForContainersOfType:(unsigned long long)arg1;
- (id)initWithArray:(id)arg1;
- (unsigned long long)lastEvaluatedQuota;
- (id)mediaContainerForIdentifierSet:(id)arg1;
- (unsigned long long)nominatedTracksSize;
- (unsigned long long)nominatedTracksSizeInQuota:(unsigned long long)arg1;
- (id)offPowerTrackList;
- (id)offPowerTrackListThatFitsInQuota:(unsigned long long)arg1;
- (id)onPowerTrackList;
- (id)onPowerTrackListThatFitsInQuota:(unsigned long long)arg1;
- (unsigned long long)selectedTracksSizeForQuota;
- (unsigned long long)selectedTracksSizeInQuota:(unsigned long long)arg1;
- (void)setContainers:(id)arg1;
- (void)setLastEvaluatedQuota:(unsigned long long)arg1;
- (void)setNominatedTracksSize:(unsigned long long)arg1;
- (void)setOffPowerTrackList:(id)arg1;
- (void)setOnPowerTrackList:(id)arg1;
- (void)setSelectedTracksSizeForQuota:(unsigned long long)arg1;
- (void)setTrackListForQuota:(id)arg1;
- (id)trackListForQuota;
- (id)trackListThatFitsInQuota:(unsigned long long)arg1;

@end
