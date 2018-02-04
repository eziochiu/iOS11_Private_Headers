/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface PCCProxiedDevice : NSObject {
    unsigned int  _consecutive_error_count;
    PCCEndpoint * _endpoint;
    unsigned int  _error_count;
    NSString * _jobId;
    NSString * _jobTarget;
    NSMutableArray * _log_sets;
    NSMutableDictionary * _pending_list;
    bool  _preserveFiles;
    unsigned int  _rejected_count;
    NSObject<OS_dispatch_queue> * _serial_list_queue;
    unsigned int  _success_count;
    unsigned int  _total_count;
}

@property bool preserveFiles;

- (void).cxx_destruct;
- (void)acceptTaskingPayload:(id)arg1 forRouting:(id)arg2 withId:(id)arg3 digest:(id)arg4;
- (void)ack:(id)arg1 result:(bool)arg2 error:(id)arg3;
- (void)finishJob:(id)arg1 error:(id)arg2;
- (void)handleConnection:(bool)arg1;
- (void)handleMessage:(id)arg1 from:(id)arg2;
- (id)initWithEndpoint:(id)arg1;
- (void)initiate:(id)arg1 transferGroupWithOptions:(id)arg2 job:(id)arg3;
- (void)initiate:(id)arg1 transferLog:(id)arg2 job:(id)arg3;
- (bool)preserveFiles;
- (void)runCrashMoverService:(id)arg1;
- (void)sendDeviceMetadata:(id)arg1;
- (void)sendNextLog;
- (void)setPreserveFiles:(bool)arg1;

@end