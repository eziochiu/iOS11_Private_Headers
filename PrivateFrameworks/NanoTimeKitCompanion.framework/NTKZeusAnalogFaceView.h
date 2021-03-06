/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKZeusAnalogFaceView : NTKSpriteKitAnalogFaceView {
    bool  _isEditing;
    bool  _showHandsInColorEditing;
}

@property (nonatomic, readonly) NTKZeusAnalogScene *analogScene;

+ (id)_swatchColorForColorOption:(id)arg1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1;

- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureReusableTimeView:(id)arg1;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_handAlphaForEditing:(bool)arg1;
- (id)_handInlayColorForFaceColor:(unsigned long long)arg1;
- (id)_handStrokeColorForFaceColor:(unsigned long long)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadScene;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (double)_numbersAlphaForEditMode:(long long)arg1;
- (void)_prepareForStatusChange:(bool)arg1;
- (void)_prepareTimeViewForReuse:(id)arg1;
- (double)_secondHandAlphaForDensity:(unsigned long long)arg1 isEditing:(bool)arg2;
- (id)_secondHandColorForFaceColor:(unsigned long long)arg1;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (struct CGPoint { double x1; double x2; })_timeTravelStatusModuleCenter;
- (bool)_timeViewBehindContentForEditMode:(long long)arg1;
- (void)_updateDateComplicationPositionIfNecessary;
- (double)_verticalPaddingForStatusBar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
