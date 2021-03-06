/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarDisplayItemState : NSObject <_UIStatusBarPrioritized> {
    _UIStatusBarAnimation * _addingAnimation;
    NSMutableSet * _animations;
    long long  _currentPlacementStateIndex;
    bool  _dataEnabled;
    long long  _enabilityStatus;
    bool  _floating;
    NSString * _identifier;
    NSMutableArray * _placementStates;
    long long  _previousPlacementStateIndex;
    _UIStatusBarAnimation * _removingAnimation;
    _UIStatusBar * _statusBar;
    bool  _updated;
    long long  _visibilityStatus;
    bool  _wasEnabled;
    bool  _wasVisible;
}

@property (nonatomic, retain) _UIStatusBarAnimation *addingAnimation;
@property (getter=_animationType, nonatomic, readonly) long long animationType;
@property (nonatomic, readonly) NSMutableSet *animations;
@property (nonatomic, readonly) _UIStatusBarDisplayItemPlacementState *currentPlacementState;
@property (nonatomic) long long currentPlacementStateIndex;
@property (nonatomic) bool dataEnabled;
@property (nonatomic) long long enabilityStatus;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (getter=isEnabledIgnoringAnimations, nonatomic, readonly) bool enabledIgnoringAnimations;
@property (nonatomic) bool floating;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *placementStates;
@property (nonatomic, readonly, copy) NSSet *potentialPlacementRegionIdentifiers;
@property (nonatomic) long long previousPlacementStateIndex;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, retain) _UIStatusBarAnimation *removingAnimation;
@property (nonatomic) _UIStatusBar *statusBar;
@property (nonatomic) bool updated;
@property (nonatomic) long long visibilityStatus;
@property (nonatomic) bool wasEnabled;
@property (nonatomic) bool wasVisible;

+ (void)setupExclusionsBetweenDisplayItemStates:(id)arg1 visualProvider:(id)arg2;
+ (id)stateForDisplayItemWithIdentifier:(id)arg1 statusBar:(id)arg2;

- (void).cxx_destruct;
- (id)_animationForDisplayItem:(id)arg1 withUpdateAnimation:(id)arg2;
- (long long)_animationType;
- (void)_cancelObsoleteAnimations;
- (bool)_itemMayBeEnabled:(id)arg1;
- (id)_updateForItem:(id)arg1 data:(id)arg2 styleAttributes:(id)arg3;
- (id)_updateForUpdatedData:(id)arg1 updatedStyleAttributes:(id)arg2 updatedEnability:(id)arg3;
- (void)_updatePlacementWithRecursionBlock:(id /* block */)arg1;
- (void)_updateStatuses;
- (bool)_updateToEnabledPlacementState;
- (void)addPlacement:(id)arg1 inRegion:(id)arg2;
- (id)addingAnimation;
- (id)animations;
- (id)currentPlacementState;
- (long long)currentPlacementStateIndex;
- (bool)dataEnabled;
- (id)description;
- (long long)enabilityStatus;
- (bool)floating;
- (bool)hasRunningAnimations;
- (id)identifier;
- (bool)isCurrentPlacement:(id)arg1;
- (bool)isEnabled;
- (bool)isEnabledIgnoringAnimations;
- (id)placementStateForPlacement:(id)arg1;
- (id)placementStates;
- (id)potentialPlacementRegionIdentifiers;
- (bool)prepareAnimation:(id)arg1 withDisplayItem:(id)arg2;
- (void)prepareForUpdate;
- (long long)previousPlacementStateIndex;
- (long long)priority;
- (id)removingAnimation;
- (void)setAddingAnimation:(id)arg1;
- (void)setCurrentPlacementStateIndex:(long long)arg1;
- (void)setDataEnabled:(bool)arg1;
- (void)setEnabilityStatus:(long long)arg1;
- (void)setFloating:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPlacementStates:(id)arg1;
- (void)setPreviousPlacementStateIndex:(long long)arg1;
- (void)setRemovingAnimation:(id)arg1;
- (void)setStatusBar:(id)arg1;
- (void)setUpdated:(bool)arg1;
- (void)setVisibilityStatus:(long long)arg1;
- (void)setWasEnabled:(bool)arg1;
- (void)setWasVisible:(bool)arg1;
- (id)statusBar;
- (void)updatePlacement;
- (void)updateToNextEnabledPlacement;
- (id)updateWithData:(id)arg1 styleAttributes:(id)arg2;
- (bool)updated;
- (long long)visibilityStatus;
- (bool)wasEnabled;
- (bool)wasVisible;

@end
