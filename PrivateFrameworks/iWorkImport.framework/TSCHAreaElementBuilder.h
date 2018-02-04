/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHAreaElementBuilder : TSCHLineElementBuilder

- (bool)needsSeparateHitTestingPaths;
- (bool)p_addBottomStroke:(struct { id x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; id x3; }*)arg1 toPath:(struct CGPath { }*)arg2 seriesIndex:(unsigned long long)arg3 valuesStart:(unsigned long long)arg4 valuesEnd:(unsigned long long)arg5 withPointsArray:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; unsigned long long x4; }*)arg6 withCount:(unsigned long long)arg7;
- (void)p_addTopStroke:(struct { id x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; id x3; }*)arg1 toPath:(struct CGPath { }*)arg2 withPointsArray:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; unsigned long long x4; }*)arg3 withCount:(unsigned long long)arg4 lineType:(int)arg5;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; unsigned long long x4; }*)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 valueStart:(long long)arg3 valueEnd:(long long)arg4 outCount:(unsigned long long*)arg5;

@end