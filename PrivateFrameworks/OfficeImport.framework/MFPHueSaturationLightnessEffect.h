/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPHueSaturationLightnessEffect : MFPEffect {
    int  mHueChange;
    int  mLightnessChange;
    int  mSaturationChange;
}

+ (id)GUID;

- (id)initWithHueChange:(int)arg1 saturationChange:(int)arg2 lightnessChange:(int)arg3;

@end
