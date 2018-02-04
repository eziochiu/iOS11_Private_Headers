/* made by EzioChiu.
 */

@protocol DirectoryWatcherDelegate <NSObject>

@required

- (void)directoryDidChange:(DirectoryWatcher *)arg1;

@end
