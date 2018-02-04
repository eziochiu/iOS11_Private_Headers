/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlPrimaryStateController : HUQuickControlController

@property (nonatomic, readonly) HFControlItem<HFPrimaryStateWriter> *controlItem;

+ (Class)controlItemClass;
+ (bool)matchesControlItem:(id)arg1;

- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)viewProfile;

@end
