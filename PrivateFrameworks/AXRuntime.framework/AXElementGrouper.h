/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXElementGrouper : NSObject {
    long long  _heuristics;
    double  _thresholdForDeterminingEqualSize;
}

@property (nonatomic) long long heuristics;
@property (nonatomic, readonly) unsigned long long maximumGroupSize;
@property (nonatomic, readonly) unsigned long long minimumGroupSize;
@property (nonatomic, readonly) unsigned long long preferredGroupSize;
@property (nonatomic, readonly) double thresholdForDeterminingEqualSize;

- (id)_buildHierarchyForGroup:(id)arg1 indexOfKeyboard:(unsigned long long*)arg2;
- (id)_flattenHierarchyForGroup:(id)arg1 rootLevel:(bool)arg2;
- (bool)_frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isApproximatelySameSizeAsFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_groupRemovingImpossibleGroups:(id)arg1 isRootLevel:(bool)arg2;
- (id)_groupablesForItems:(id)arg1;
- (id)groupElementsInRootGroup:(id)arg1;
- (long long)heuristics;
- (id)init;
- (id)initWithHeuristics:(long long)arg1;
- (unsigned long long)maximumGroupSize;
- (unsigned long long)minimumGroupSize;
- (unsigned long long)preferredGroupSize;
- (void)setHeuristics:(long long)arg1;
- (double)thresholdForDeterminingEqualSize;

@end