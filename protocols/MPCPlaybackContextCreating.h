/* made by EzioChiu.
 */

@protocol MPCPlaybackContextCreating <NSObject>

@optional

- (void)createPlaybackContextWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPPlaybackContext *, NSError *, void*
- (void)getPlaybackContextWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPPlaybackContext *, NSError *, void*

@end