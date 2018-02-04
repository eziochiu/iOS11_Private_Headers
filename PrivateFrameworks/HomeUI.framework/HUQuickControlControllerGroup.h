/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlControllerGroup : NSObject {
    HUQuickControlController * _alternateQuickControlController;
    HUQuickControlController * _primaryQuickControlController;
}

@property (nonatomic, readonly) HUQuickControlController *alternateQuickControlController;
@property (nonatomic, readonly) HUQuickControlController *primaryQuickControlController;

- (void).cxx_destruct;
- (id)alternateQuickControlController;
- (id)initWithPrimaryQuickControlController:(id)arg1 alternateQuickControlController:(id)arg2;
- (id)primaryQuickControlController;

@end
