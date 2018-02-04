/* made by EzioChiu.
 */

@protocol PHALibraryChangeResponder <NSObject>

@required

- (void)libraryChangeListener:(PHALibraryChangeListener *)arg1 gotRawChange:(PHChange *)arg2;

@end
