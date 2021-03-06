/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSPicker : UIView <PTSHUDControl, UITableViewDataSource, UITableViewDelegate, _UISettingsKeyPathObserver> {
    int  _alignment;
    NSArray * _choices;
    _UISettings * _settings;
    NSArray * _subviewConstraints;
    UITableView * _tableView;
    UILabel * _titleLabel;
    NSString * _valueKeyPath;
}

@property (nonatomic) int alignment;
@property (nonatomic, copy) NSArray *choices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) _UISettings *settings;
@property (nonatomic, retain) NSArray *subviewConstraints;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, copy) NSString *valueKeyPath;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFrame;
+ (id)picker;
+ (id)pickerForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3 choices:(id)arg4;

- (void).cxx_destruct;
- (int)alignment;
- (id)choices;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isEnabled;
- (void)layoutSubviews;
- (id)makeTableView;
- (id)makeTitleLabel;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAlignment:(int)arg1;
- (void)setChoices:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSelection:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void)setSubviewConstraints:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setValueKeyPath:(id)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)subviewConstraints;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)titleLabel;
- (id)valueKeyPath;

@end
