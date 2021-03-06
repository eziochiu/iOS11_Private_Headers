/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoControlsLayout : NSObject {
    bool  _autoHidingEnabled;
    bool  _controlsShouldBeVisible;
    bool  _displayAsPaused;
    bool  _muted;
    bool  _showLoadingIndicator;
    unsigned long long  _skipThreshold;
    NSArray * _upNextControls;
    NSString * _upNextSubtitle;
    NSString * _upNextTitle;
    NSArray * _upperRightControls;
}

@property (nonatomic) bool autoHidingEnabled;
@property (nonatomic) bool controlsShouldBeVisible;
@property (nonatomic) bool displayAsPaused;
@property (nonatomic) bool muted;
@property (nonatomic) bool showLoadingIndicator;
@property (nonatomic) unsigned long long skipThreshold;
@property (nonatomic, retain) NSArray *upNextControls;
@property (nonatomic, retain) NSString *upNextSubtitle;
@property (nonatomic, retain) NSString *upNextTitle;
@property (nonatomic, retain) NSArray *upperRightControls;

- (void).cxx_destruct;
- (bool)autoHidingEnabled;
- (bool)controlsShouldBeVisible;
- (bool)displayAsPaused;
- (bool)muted;
- (void)setAutoHidingEnabled:(bool)arg1;
- (void)setControlsShouldBeVisible:(bool)arg1;
- (void)setDisplayAsPaused:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setShowLoadingIndicator:(bool)arg1;
- (void)setSkipThreshold:(unsigned long long)arg1;
- (void)setUpNextControls:(id)arg1;
- (void)setUpNextSubtitle:(id)arg1;
- (void)setUpNextTitle:(id)arg1;
- (void)setUpperRightControls:(id)arg1;
- (bool)showLoadingIndicator;
- (unsigned long long)skipThreshold;
- (id)upNextControls;
- (id)upNextSubtitle;
- (id)upNextTitle;
- (id)upperRightControls;

@end
