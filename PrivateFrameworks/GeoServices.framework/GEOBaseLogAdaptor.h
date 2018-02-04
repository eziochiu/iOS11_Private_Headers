/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOBaseLogAdaptor : NSObject <GEOLogAdaptor> {
    NSObject<OS_dispatch_queue> * _adaptorQueue;
    NSMutableArray * _supportedLogMessageTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)acceptsLogMessageOfType:(int)arg1;
- (id)adaptorQueue;
- (void)addSupportForLogMessageType:(int)arg1;
- (void)flushLogs;
- (id)init;
- (bool)isLogFrameworkAdaptor;
- (void)queueLogMessage:(id)arg1;
- (void)removeSupportForLogMessageType:(int)arg1;

@end