/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKColorCircularUtilitarianFaceLayoutContentProvider : NTKFaceLayoutContentProvider {
    NTKUtilityComplicationFactory * _complicationFactory;
}

- (void).cxx_destruct;
- (id)_colorComplicationSlots;
- (id)_complicationSlots;
- (double)_edgeGapForState:(long long)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (double)_lisaGapForState:(long long)arg1;
- (id)_utilityComplicationSlots;
- (long long)_utilitySlotForSlot:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)init;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;

@end
