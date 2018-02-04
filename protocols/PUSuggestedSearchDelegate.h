/* made by EzioChiu.
 */

@protocol PUSuggestedSearchDelegate <NSObject>

@required

- (void)suggestedSearchHasPendingChanges:(PUSuggestedSearch *)arg1;
- (PSIDatabase *)suggestedSearchIndex:(PUSuggestedSearch *)arg1;
- (PLPhotoLibrary *)suggestedSearchPhotoLibrary:(PUSuggestedSearch *)arg1;

@end
