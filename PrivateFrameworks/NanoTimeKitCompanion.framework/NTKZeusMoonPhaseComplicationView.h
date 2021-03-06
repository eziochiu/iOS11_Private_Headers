/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKZeusMoonPhaseComplicationView : NTKZeusComplicationView <NTKMoonPhaseComplicationDisplay> {
    UIImageView * _imageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setPhaseNumber:(unsigned long long)arg1 hemisphere:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
