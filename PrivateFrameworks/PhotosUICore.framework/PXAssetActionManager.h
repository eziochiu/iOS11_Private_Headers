/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetActionManager : PXActionManager {
    PXSelectionSnapshot * _selectionSnapshot;
}

@property (nonatomic, readonly) PXSelectionSnapshot *selectionSnapshot;

- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)arg1;
- (bool)canPerformAssetVariationActions;
- (id)init;
- (id)initWithSelectionSnapshot:(id)arg1;
- (void)px_registerAdditionalPerformerClasses;
- (id)selectionSnapshot;

@end
