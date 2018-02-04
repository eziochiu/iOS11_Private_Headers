/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentViewFactory : NSObject <SXComponentViewFactory> {
    <SXAnalyticsReporting> * _analyticsReporting;
    <SXAppStateMonitor> * _appStateMonitor;
    SXConfiguration * _configuration;
    SXContext * _context;
}

@property (nonatomic, readonly) <SXAnalyticsReporting> *analyticsReporting;
@property (nonatomic, readonly) <SXAppStateMonitor> *appStateMonitor;
@property (nonatomic, readonly) SXConfiguration *configuration;
@property (nonatomic, readonly) SXContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyticsReporting;
- (id)appStateMonitor;
- (id)componentViewForComponent:(id)arg1;
- (id)configuration;
- (id)context;
- (id)initWithContext:(id)arg1 configuration:(id)arg2 analyticsReporting:(id)arg3 appStateMonitor:(id)arg4;

@end
