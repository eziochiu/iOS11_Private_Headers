/* made by EzioChiu.
 */

@protocol SXMediaSelectionControllerDelegate <NSObject>

@required

- (void)mediaSelectionController:(SXMediaSelectionController *)arg1 selectMediaSelectionOption:(AVMediaSelectionOption *)arg2 inMediaSelectionGroup:(AVMediaSelectionGroup *)arg3;

@end
