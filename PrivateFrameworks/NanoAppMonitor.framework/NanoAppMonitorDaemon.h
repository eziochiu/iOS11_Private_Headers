/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAppMonitor.framework/NanoAppMonitor
 */

@interface NanoAppMonitorDaemon : NSObject {
    NanoAppDataProvider * _appDataProvider;
    NanoAppUsageMonitor * _appUsageMonitor;
    NanoAppUsageSync * _appUsageSync;
}

@property (retain) NanoAppDataProvider *appDataProvider;
@property (retain) NanoAppUsageMonitor *appUsageMonitor;
@property (retain) NanoAppUsageSync *appUsageSync;

+ (id)sharedDaemon;

- (void).cxx_destruct;
- (id)appDataProvider;
- (id)appUsageMonitor;
- (id)appUsageSync;
- (id)init;
- (void)setAppDataProvider:(id)arg1;
- (void)setAppUsageMonitor:(id)arg1;
- (void)setAppUsageSync:(id)arg1;
- (void)start;

@end
