/* made by EzioChiu.
 */

@protocol FCFeedViewportRemoveGroupOperationType <NSObject>

@required

- (FCFeedDescriptor *)feedDescriptor;
- (NSString *)groupID;
- (id /* block */)removeGroupCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, FCFeedViewport *, FCFeedViewportDiff *, NSError *, void*, id, SEL
- (void)setFeedDescriptor:(FCFeedDescriptor *)arg1;
- (void)setGroupID:(NSString *)arg1;
- (void)setRemoveGroupCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FCFeedViewport *, FCFeedViewportDiff *, NSError *, void*
- (void)setViewport:(FCFeedViewport *)arg1;
- (void)start;
- (FCFeedViewport *)viewport;

@end