/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDAppActionRecorder : NSObject <_CDActivityEventRecording, _CDAppActionRecording> {
    NSXPCConnection * _connection;
    NSString * _previousActivityType;
    NSString * _previousTitle;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *previousActivityType;
@property (nonatomic, retain) NSString *previousTitle;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)appActionRecorder;

- (void).cxx_destruct;
- (void)_recordUserActivityEvent:(id)arg1;
- (id)connection;
- (void)createConnection;
- (void)dealloc;
- (id)init;
- (id)previousActivityType;
- (id)previousTitle;
- (id)queue;
- (void)recordAppAction:(id)arg1;
- (void)recordUserActivityEvent:(id)arg1;
- (void)recordUserActivityEventForCollection:(id)arg1;
- (void)recordUserActivityEvents:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setPreviousActivityType:(id)arg1;
- (void)setPreviousTitle:(id)arg1;
- (void)setQueue:(id)arg1;

@end