/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlIncrementalStateController : HUQuickControlController

@property (nonatomic, readonly) HFIncrementalStateControlItem *controlItem;

+ (Class)controlItemClass;

- (id)_createControlView;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)viewProfile;

@end
