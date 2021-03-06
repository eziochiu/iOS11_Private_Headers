/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSCapacityBarCell : PSTableCell {
    PSCapacityBarView * _barView;
    UIFont * _bigFont;
    UILabel * _calcLabel;
    NSMutableArray * _constraints;
    bool  _hideLegend;
    NSMutableDictionary * _legendColorCache;
    NSMutableArray * _legendConstraints;
    UIFont * _legendFont;
    NSMutableDictionary * _legendTextCache;
    NSMutableArray * _legendViews;
    UILabel * _otherLabel;
    PSLegendColorView * _otherLegend;
    bool  _showOtherLegend;
    NSString * _sizeFormat;
    UILabel * _sizeLabel;
    bool  _sizesAreMem;
    UILabel * _titleLabel;
}

+ (double)defaultCellHeight;
+ (id)specifierWithTitle:(id)arg1;
+ (id)specifierWithTitle:(id)arg1 useStandardFontSizeForSizeLabel:(bool)arg2;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)initializeViews;
- (id)legendColorForCategory:(id)arg1;
- (id)legendTextForCategory:(id)arg1;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)updateConstraints;
- (void)updateLegends;
- (id)usageString:(id)arg1;

@end
