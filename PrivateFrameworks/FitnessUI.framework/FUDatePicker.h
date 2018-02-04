/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUDatePicker : UIView <FUScrollWheelDataSource, FUScrollWheelDelegate> {
    NSDate * _date;
    NSDateFormatter * _dateFormatter;
    unsigned long long  _dateOffset;
    FUScrollWheel * _dateWheel;
    UILabel * _dayLabel;
    long long  _dayOrder;
    NSArray * _dayValues;
    <FUDatePickerDelegate> * _delegate;
    bool  _displayEra;
    bool  _firstResponderShouldChange;
    UILabel * _monthLabel;
    NSArray * _monthNames;
    unsigned long long  _monthOffset;
    long long  _monthOrder;
    FUScrollWheel * _monthWheel;
    unsigned long long  _numRowsDate;
    unsigned long long  _numRowsMonth;
    unsigned long long  _numRowsYear;
    UILabel * _yearLabel;
    long long  _yearOrder;
    FUScrollWheel * _yearWheel;
    NSMutableArray * _yearsWithNames;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) FUScrollWheel *dateWheel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FUDatePickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FUScrollWheel *monthWheel;
@property (readonly) Class superclass;
@property (nonatomic, retain) FUScrollWheel *yearWheel;

- (void).cxx_destruct;
- (id)_enumerateDayValues;
- (id)_enumerateDayValuesFromFormatter:(id)arg1;
- (void)_updateDateRange:(bool)arg1;
- (void)_updateSpinners;
- (id)date;
- (id)dateWheel;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)monthWheel;
- (unsigned long long)numberOfRowsInScrollWheel:(id)arg1;
- (void)scrollWheel:(id)arg1 didChangeCurrentIndexTo:(unsigned long long)arg2;
- (id)scrollWheel:(id)arg1 titleForItemAtIndex:(unsigned long long)arg2;
- (bool)scrollWheelShouldBecomeFirstResponder:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDateWheel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMonthWheel:(id)arg1;
- (void)setYearWheel:(id)arg1;
- (void)tappedScrollWheel:(id)arg1;
- (id)yearWheel;

@end