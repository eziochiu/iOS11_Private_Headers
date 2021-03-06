/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXActionManager : NSObject {
    <PXActionPerformerDelegate> * _performerDelegate;
}

@property (nonatomic) <PXActionPerformerDelegate> *performerDelegate;

+ (id /* block */)_unlockDeviceHandler;
+ (void)setEnsureUnlockedDeviceHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (bool)canPerformActionType:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)performerDelegate;
- (id)previewActionForActionType:(id)arg1;
- (id)previewActionGroupForActionType:(id)arg1;
- (void)setPerformerDelegate:(id)arg1;

@end
