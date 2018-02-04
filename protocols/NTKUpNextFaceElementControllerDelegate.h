/* made by EzioChiu.
 */

@protocol NTKUpNextFaceElementControllerDelegate <NSObject>

@optional

- (void)faceElementController:(NTKUpNextFaceElementController *)arg1 didInsertElement:(NTKUpNextElement *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)faceElementController:(NTKUpNextFaceElementController *)arg1 didMoveElement:(NTKUpNextElement *)arg2 fromIndexPath:(NSIndexPath *)arg3 toIndexPath:(NSIndexPath *)arg4;
- (void)faceElementController:(NTKUpNextFaceElementController *)arg1 didReloadContent:(NTKUpNextElementContent *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)faceElementController:(NTKUpNextFaceElementController *)arg1 didRemoveElement:(NTKUpNextElement *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (bool)faceElementController:(NTKUpNextFaceElementController *)arg1 isElementAtIndexPathVisible:(NSIndexPath *)arg2;
- (void)faceElementController:(void *)arg1 performBatchUpdateBlock:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: NTKUpNextFaceElementController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*

@end