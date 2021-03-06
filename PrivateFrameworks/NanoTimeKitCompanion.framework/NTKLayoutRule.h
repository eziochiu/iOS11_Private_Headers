/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKLayoutRule : NSObject <NSCopying> {
    bool  _clipsToReferenceFrame;
    long long  _horizontalLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceFrame;
    long long  _verticalLayout;
}

@property (nonatomic) bool clipsToReferenceFrame;
@property (nonatomic) long long horizontalLayout;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceFrame;
@property (nonatomic) long long verticalLayout;

+ (id)layoutRuleWithReferenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 horizontalLayout:(long long)arg2 verticalLayout:(long long)arg3;
+ (id)layoutRuleWithReferenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 horizontalLayout:(long long)arg2 verticalLayout:(long long)arg3 clip:(bool)arg4;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateLayoutFrameForBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (double)calculateLayoutFrameHeightForBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (double)calculateLayoutFrameWidthForBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (double)calculateLayoutFrameXOriginForBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (double)calculateLayoutFrameYOriginForBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)clipsToReferenceFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (long long)horizontalLayout;
- (bool)isEqual:(id)arg1;
- (id)layoutRuleByConvertingToCoordinateSpaceWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })maximumSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceFrame;
- (void)setClipsToReferenceFrame:(bool)arg1;
- (void)setHorizontalLayout:(long long)arg1;
- (void)setReferenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVerticalLayout:(long long)arg1;
- (void)validate;
- (long long)verticalLayout;

@end
