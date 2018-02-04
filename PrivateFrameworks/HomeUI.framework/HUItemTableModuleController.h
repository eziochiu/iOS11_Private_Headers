/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUItemTableModuleController : NSObject {
    HFItemModule * _module;
}

@property (nonatomic, readonly) HFItemModule *module;

- (void).cxx_destruct;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (bool)canSelectDisabledItem:(id)arg1;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (id)module;
- (long long)rowAnimationForOperationType:(unsigned long long)arg1 item:(id)arg2 suggestedAnimation:(long long)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
