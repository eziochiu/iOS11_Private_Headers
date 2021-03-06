/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDateTimelineEntryModel : NTKTimelineEntryModel {
    bool  _lunar;
}

@property (nonatomic) bool lunar;

- (id)_newCircularTemplateMedium:(bool)arg1;
- (id)_newExtraLargeLunarTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newLargeUtilitarianTemplate;
- (id)_newModularLargeLunarTemplate;
- (id)_newModularLargeTemplate;
- (id)_newModularSmallLunarTemplate;
- (id)_newModularSmallTemplate;
- (id)_newSmallFlatUtilitarianTemplate;
- (bool)lunar;
- (void)setLunar:(bool)arg1;
- (id)templateForComplicationFamily:(long long)arg1;

@end
