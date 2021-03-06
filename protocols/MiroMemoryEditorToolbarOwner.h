/* made by EzioChiu.
 */

@protocol MiroMemoryEditorToolbarOwner <NSObject>

@required

- (void)hideToolbarIfNeeded;
- (void)pausePlayer;
- (void)showToolbar;
- (double)toolbarHeight;

@end
