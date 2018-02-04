/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
 */

@interface FBUISceneActionsEvent : FBUISceneEvent {
    NSSet * _actions;
}

@property (nonatomic, copy) NSSet *actions;

- (id)actions;
- (void)dealloc;
- (void)setActions:(id)arg1;

@end
