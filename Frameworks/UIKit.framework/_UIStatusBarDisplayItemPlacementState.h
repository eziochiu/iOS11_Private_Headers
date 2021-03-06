/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarDisplayItemPlacementState : NSObject <_UIStatusBarPrioritized> {
    NSMutableSet * _exclusions;
    _UIStatusBarDisplayItemPlacement * _placement;
    _UIStatusBarRegion * _region;
}

@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (getter=isExcluded, nonatomic, readonly) bool excluded;
@property (nonatomic, retain) NSMutableSet *exclusions;
@property (nonatomic, readonly) _UIStatusBarDisplayItemPlacement *placement;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) _UIStatusBarRegion *region;

+ (id)stateForDisplayItemPlacement:(id)arg1 region:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)exclusions;
- (bool)isEnabled;
- (bool)isExcluded;
- (id)placement;
- (long long)priority;
- (id)region;
- (void)setExclusions:(id)arg1;

@end
