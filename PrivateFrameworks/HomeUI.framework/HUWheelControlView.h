/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWheelControlView : UIView <HUControlView, UIPickerViewDataSource, UIPickerViewDelegate> {
    bool  _canBeHighlighted;
    <HUControlViewDelegate> * _delegate;
    NSString * _identifier;
    NSNumber * _maxValue;
    NSNumber * _minValue;
    UIPickerView * _pickerView;
    NSNumber * _stepValue;
    NSFormatter * _valueFormatter;
    <HUWheelControlViewDelegate> * _wheelDelegate;
}

@property (nonatomic) bool canBeHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUControlViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSNumber *maxValue;
@property (nonatomic, copy) NSNumber *minValue;
@property (nonatomic, retain) UIPickerView *pickerView;
@property (nonatomic, copy) NSNumber *stepValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) id value;
@property (nonatomic, retain) NSFormatter *valueFormatter;
@property (nonatomic) <HUWheelControlViewDelegate> *wheelDelegate;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_defaultMaxValue;
- (id)_defaultMinValue;
- (id)_defaultStepValue;
- (id)_defaultValueFormatter;
- (id)_formatValue:(id)arg1;
- (void)_setupConstraints;
- (long long)_wheelRowForValue:(id)arg1;
- (id)_wheelValueForRow:(long long)arg1;
- (bool)canBeHighlighted;
- (id)delegate;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisabled;
- (id)maxValue;
- (id)minValue;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)setCanBeHighlighted:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMaxValue:(id)arg1;
- (void)setMinValue:(id)arg1;
- (void)setPickerView:(id)arg1;
- (void)setStepValue:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueFormatter:(id)arg1;
- (void)setWheelDelegate:(id)arg1;
- (id)stepValue;
- (id)value;
- (id)valueFormatter;
- (id)wheelDelegate;

@end