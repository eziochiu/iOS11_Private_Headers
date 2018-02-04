/* made by EzioChiu.
 */

@protocol CPLNetworkWatcherDelegate <NSObject>

@required

- (void)networkStateDidChangeForNetworkWatched:(CPLNetworkWatcher *)arg1;

@end
