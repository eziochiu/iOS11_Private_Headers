/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlRangeController : HUQuickControlController

@property (nonatomic, readonly) HFRangeControlItem *controlItem;

+ (Class)controlItemClass;
+ (bool)matchesControlItem:(id)arg1;

- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)viewProfile;

@end
