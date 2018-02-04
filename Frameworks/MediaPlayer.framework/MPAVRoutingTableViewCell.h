/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingTableViewCell : UITableViewCell <MPAVRoutingThemeableCellView> {
    MPAVBatteryLevel * _batteryLevel;
    bool  _debugCell;
    <MPAVRoutingTableViewCellDelegate> * _delegate;
    bool  _displayIsPicked;
    UIImageView * _iconImageView;
    unsigned long long  _iconStyle;
    unsigned long long  _mirroringStyle;
    bool  _mirroringSwitchVisible;
    bool  _pendingSelection;
    bool  _provideOwnSeparator;
    UILabel * _routeNameLabel;
    UIImageView * _smartAudioImageView;
    UIActivityIndicatorView * _spinnerView;
    UILabel * _subtitleTextLabel;
    bool  _useSmartAudioCheckmarkStyle;
}

@property (nonatomic, retain) MPAVBatteryLevel *batteryLevel;
@property (getter=isDebugCell, nonatomic) bool debugCell;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPAVRoutingTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayIsPicked;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long iconStyle;
@property (nonatomic) unsigned long long mirroringStyle;
@property (nonatomic) bool mirroringSwitchVisible;
@property (getter=isPendingSelection, nonatomic) bool pendingSelection;
@property (nonatomic) bool provideOwnSeparator;
@property (readonly) Class superclass;
@property (nonatomic) bool useSmartAudioCheckmarkStyle;

- (void).cxx_destruct;
- (id)_checkmarkImageForSmartAudio;
- (void)_configureDetailLabel:(id)arg1;
- (void)_configureLabel:(id)arg1;
- (id)_detailTextForRoute:(id)arg1;
- (id)_iconImageForRoute:(id)arg1;
- (bool)_shouldShowSeparateBatteryPercentagesForBatteryLevel:(id)arg1;
- (void)_updateSmartAudioAccessory;
- (void)_updateSpinnerStyle;
- (id)batteryLevel;
- (id)delegate;
- (bool)displayIsPicked;
- (unsigned long long)iconStyle;
- (id)iconView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDebugCell;
- (bool)isPendingSelection;
- (void)layoutSubviews;
- (unsigned long long)mirroringStyle;
- (bool)mirroringSwitchVisible;
- (bool)provideOwnSeparator;
- (id)separatorView;
- (void)setAccessoryType:(long long)arg1;
- (void)setBatteryLevel:(id)arg1;
- (void)setDebugCell:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayIsPicked:(bool)arg1;
- (void)setIconStyle:(unsigned long long)arg1;
- (void)setMirroringStyle:(unsigned long long)arg1;
- (void)setMirroringSwitchVisible:(bool)arg1;
- (void)setPendingSelection:(bool)arg1;
- (void)setProvideOwnSeparator:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUseSmartAudioCheckmarkStyle:(bool)arg1;
- (id)subtitleView;
- (id)titleView;
- (void)updateForRoute:(id)arg1 inferLocalizedModelName:(bool)arg2;
- (bool)useSmartAudioCheckmarkStyle;

@end
