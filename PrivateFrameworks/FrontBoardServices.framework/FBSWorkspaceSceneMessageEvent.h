/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceSceneMessageEvent : FBSWorkspaceSceneEvent {
    FBSSceneMessage * _message;
}

@property (nonatomic, retain) FBSSceneMessage *message;

- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;

@end
