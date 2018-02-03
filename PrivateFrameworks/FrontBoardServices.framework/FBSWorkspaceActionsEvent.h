/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceActionsEvent : FBSWorkspaceEvent {
    NSSet * _actions;
}

@property (nonatomic, copy) NSSet *actions;

- (id)actions;
- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setActions:(id)arg1;

@end
