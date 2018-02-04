/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNCommuteDestinationLocationHistoryScore : MNCommuteDestinationScore <MNCommuteDestinationLocationHistoryScore> {
    bool  _destinationInvalid;
    NSArray * _locationHistory;
    int  _score;
}

@property (nonatomic, copy) NSArray *locationHistory;

+ (double)weight;

- (void).cxx_destruct;
- (int)_scoreForDistance:(double)arg1 timeInterval:(double)arg2;
- (id)descriptionExtras;
- (bool)destinationInvalid;
- (id)locationHistory;
- (int)score;
- (void)setLocationHistory:(id)arg1;
- (void)updateLocationHistory:(id)arg1;
- (void)updateScoreIfPossible;

@end
