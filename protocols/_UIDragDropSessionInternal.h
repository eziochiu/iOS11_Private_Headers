/* made by EzioChiu.
 */

@protocol _UIDragDropSessionInternal

@required

- (bool)_allowsItemsToUpdate;
- (long long)_dataOwner;
- (_UIDraggingSession *)_draggingSession;

@end
