/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceConnectEvent : FBSWorkspaceEvent {
    FBSProcessHandle * _processHandle;
}

@property (nonatomic, readonly, retain) FBSProcessHandle *processHandle;

- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (id)processHandle;

@end
