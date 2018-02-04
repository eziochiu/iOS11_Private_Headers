/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKStackedBarSeries : HKBarSeries {
    NSArray * _selectedFillStyles;
    NSArray * _unselectedFillStyles;
}

@property (nonatomic, copy) NSArray *selectedFillStyles;
@property (nonatomic, copy) NSArray *unselectedFillStyles;

- (void).cxx_destruct;
- (void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 context:(struct CGContext { }*)arg5;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { long long x1; long long x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 context:(struct CGContext { }*)arg4 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (id)selectedFillStyles;
- (void)setSelectedFillStyles:(id)arg1;
- (void)setUnselectedFillStyles:(id)arg1;
- (id)unselectedFillStyles;

@end