/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCUIConfiguration : NSObject <NSCopying> {
    double  _acousticAnnotationVerticalMargin;
    UIColor * _acousticGradientMaskEndColor;
    UIColor * _acousticValueColor;
    UIColor * _backgroundColor;
    NSString * _debugIdentifier;
    float  _maximumDecibelDisplayRange;
    float  _minimumDecibelDisplayRange;
    UIColor * _playbackPositionBarColor;
    UIColor * _playbackPositionTimeColor;
    UIColor * _selectionOverlayColor;
    UIColor * _selectionOverlayEndpointBarColor;
    UIColor * _selectionOverlayEndpointTimeColor;
    bool  _showsWaveformCenterline;
    UIColor * _timeLineMarkerColor;
    UIColor * _timeLineTimeColor;
    UIColor * _waveformBackgroundColor;
    UIColor * _waveformBoundaryLineColor;
    bool  _waveformBoundaryLineDimInSelectionMode;
    UIColor * _waveformColor;
    UIColor * _waveformHighlightColor;
}

@property (nonatomic) double acousticAnnotationVerticalMargin;
@property (nonatomic, retain) UIColor *acousticGradientMaskEndColor;
@property (nonatomic, retain) UIColor *acousticValueColor;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) NSString *debugIdentifier;
@property (nonatomic) float maximumDecibelDisplayRange;
@property (nonatomic) float minimumDecibelDisplayRange;
@property (nonatomic, retain) UIColor *playbackPositionBarColor;
@property (nonatomic, retain) UIColor *playbackPositionTimeColor;
@property (nonatomic, retain) UIColor *selectionOverlayColor;
@property (nonatomic, retain) UIColor *selectionOverlayEndpointBarColor;
@property (nonatomic, retain) UIColor *selectionOverlayEndpointTimeColor;
@property (nonatomic) bool showsWaveformCenterline;
@property (nonatomic, retain) UIColor *timeLineMarkerColor;
@property (nonatomic, retain) UIColor *timeLineTimeColor;
@property (nonatomic, retain) UIColor *waveformBackgroundColor;
@property (nonatomic, retain) UIColor *waveformBoundaryLineColor;
@property (nonatomic) bool waveformBoundaryLineDimInSelectionMode;
@property (nonatomic, retain) UIColor *waveformColor;
@property (nonatomic, retain) UIColor *waveformHighlightColor;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (double)acousticAnnotationVerticalMargin;
- (id)acousticGradientMaskEndColor;
- (id)acousticValueColor;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugIdentifier;
- (id)description;
- (float)maximumDecibelDisplayRange;
- (float)minimumDecibelDisplayRange;
- (id)playbackPositionBarColor;
- (id)playbackPositionTimeColor;
- (id)selectionOverlayColor;
- (id)selectionOverlayEndpointBarColor;
- (id)selectionOverlayEndpointTimeColor;
- (void)setAcousticAnnotationVerticalMargin:(double)arg1;
- (void)setAcousticGradientMaskEndColor:(id)arg1;
- (void)setAcousticValueColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDebugIdentifier:(id)arg1;
- (void)setMaximumDecibelDisplayRange:(float)arg1;
- (void)setMinimumDecibelDisplayRange:(float)arg1;
- (void)setPlaybackPositionBarColor:(id)arg1;
- (void)setPlaybackPositionTimeColor:(id)arg1;
- (void)setSelectionOverlayColor:(id)arg1;
- (void)setSelectionOverlayEndpointBarColor:(id)arg1;
- (void)setSelectionOverlayEndpointTimeColor:(id)arg1;
- (void)setShowsWaveformCenterline:(bool)arg1;
- (void)setTimeLineMarkerColor:(id)arg1;
- (void)setTimeLineTimeColor:(id)arg1;
- (void)setWaveformBackgroundColor:(id)arg1;
- (void)setWaveformBoundaryLineColor:(id)arg1;
- (void)setWaveformBoundaryLineDimInSelectionMode:(bool)arg1;
- (void)setWaveformColor:(id)arg1;
- (void)setWaveformHighlightColor:(id)arg1;
- (bool)showsWaveformCenterline;
- (id)timeLineMarkerColor;
- (id)timeLineTimeColor;
- (id)waveformBackgroundColor;
- (id)waveformBoundaryLineColor;
- (bool)waveformBoundaryLineDimInSelectionMode;
- (id)waveformColor;
- (id)waveformHighlightColor;

@end
