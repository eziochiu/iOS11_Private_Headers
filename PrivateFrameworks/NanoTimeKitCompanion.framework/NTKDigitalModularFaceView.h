/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDigitalModularFaceView : NTKFaceView <NTKTimeModuleViewTapClient> {
    CLKTimeFormatter * _dateFormatter;
    NSDateComponentsFormatter * _dayOffsetDateFormatter;
    unsigned long long  _faceColor;
    bool  _is24HourMode;
    NSDateComponentsFormatter * _subdayOffsetDateFormatter;
    NTKLayoutRule * _timeLayoutRuleEditing;
    NTKLayoutRule * _timeLayoutRuleNormal;
    NTKTimeModuleView * _timeModuleView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_swatchImageForColorOption:(id)arg1;

- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyFaceColor:(unsigned long long)arg1 toModuleView:(id)arg2;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_cleanupAfterZoom;
- (id)_complicationSlotsForRow:(unsigned long long)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_enumerateModuleViewsWithBlock:(id /* block */)arg1;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_layoutForegroundContainerView;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (void)_loadLayoutRules;
- (void)_loadLayoutRulesForState:(long long)arg1 withTopGap:(double)arg2 largeModuleHeight:(double)arg3;
- (void)_loadSnapshotContentViews;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (id)_moduleViewForComplicationSlot:(id)arg1;
- (bool)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_scrubToDate:(id)arg1 animated:(bool)arg2;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)_supportsTimeScrubbing;
- (double)_timeTravelStatusModuleCaptionConstraintPadding;
- (void)_unloadSnapshotContentViews;
- (void)_updateLocale;
- (bool)_wantsTimeTravelStatusModule;
- (void)dealloc;
- (void)layoutSubviews;
- (void)performTapAction;

@end