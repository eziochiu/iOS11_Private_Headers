/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKTimePeriodNumberFormatter : NSObject <HKNumberFormatter> {
    bool  _shouldRoundToHours;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldRoundToHours;
@property (readonly) Class superclass;

- (bool)returnsUnitWithValueForDisplay;
- (void)setShouldRoundToHours:(bool)arg1;
- (bool)shouldRoundToHours;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;

@end