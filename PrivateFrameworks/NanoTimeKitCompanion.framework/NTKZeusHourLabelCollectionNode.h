/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKZeusHourLabelCollectionNode : NTKHourLabelCollectionNode {
    unsigned long long  _density;
    NSArray * _visibleNodesForCurrentDensity;
}

@property (nonatomic) unsigned long long density;
@property (nonatomic, retain) NSArray *visibleNodesForCurrentDensity;

- (void).cxx_destruct;
- (bool)_hourNumberAtIndex:(unsigned long long)arg1 isVisibleWithDensity:(unsigned long long)arg2;
- (void)_setupPositions;
- (void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3;
- (void)createSubNodes;
- (unsigned long long)density;
- (id)initWithFont:(long long)arg1;
- (void)setDensity:(unsigned long long)arg1;
- (void)setVisibleNodesForCurrentDensity:(id)arg1;
- (id)visibleNodesForCurrentDensity;

@end
