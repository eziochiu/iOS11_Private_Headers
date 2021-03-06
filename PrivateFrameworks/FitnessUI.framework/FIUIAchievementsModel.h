/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIAchievementsModel : NSObject {
    <FIUIAchievementsModelDelegate> * _delegate;
    HKExtendedHealthStore * _extendedHealthStore;
}

@property (nonatomic) <FIUIAchievementsModelDelegate> *delegate;

+ (long long)compareAchievement:(id)arg1 toAchievement:(id)arg2;

- (void).cxx_destruct;
- (id)delegate;
- (void)fetchAchievementsOnDay:(id)arg1 inCalendar:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
