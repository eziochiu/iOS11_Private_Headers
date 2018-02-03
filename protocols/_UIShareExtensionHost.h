/* made by EzioChiu.
 */

@protocol _UIShareExtensionHost <NSObject>

@required

- (void)shareExtensionServiceAirDropActivityDidSuccessfullyCompleteTransfer;
- (void)shareExtensionServiceAirDropActivityDidSuccessfullyStartTransfer;
- (void)shareExtensionServiceChangeSheetDismissButtonHidden:(bool)arg1;
- (void)shareExtensionServiceChangeSheetDismissButtonTitle:(NSString *)arg1;
- (void)shareExtensionServiceDidFinishPerformingInServiceActivityWithUUID:(NSUUID *)arg1 responseData:(UISUIActivityExtensionItemData *)arg2;
- (void)shareExtensionServiceDisableSheetAvoidsKeyboardUntilContentSizeUpdate;
- (void)shareExtensionServicePreferredContentSizeUpdated:(struct CGSize { double x1; double x2; })arg1;
- (void)shareExtensionServiceRequestPerformActivityInHostForActivityUUID:(NSUUID *)arg1;
- (void)shareExtensionServiceRequestPerformActivityInHostForExtensionActivityWithBundleIdentifier:(NSString *)arg1;
- (void)shareExtensionServiceWillPerformInServiceActivityWithDataRequest:(void *)arg1 dismissPresentation:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: UISUIActivityExtensionItemDataRequest *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UISUIActivityExtensionItemData *, void*

@end