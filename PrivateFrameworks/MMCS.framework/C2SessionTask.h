/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface C2SessionTask : NSObject <C2SessionTaskDelegate> {
    struct os_activity_s { } * _activity;
    <C2RequestDelegate> * _delegate;
    unsigned char  _isComplete;
    C2RequestOptions * _options;
    <C2SessionTaskDelegate> * _sessionTaskDelegate;
    NSURLSessionDataTask * _task;
}

@property (nonatomic, readonly) struct os_activity_s { }*activity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <C2RequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned char isComplete;
@property (nonatomic, readonly, copy) C2RequestOptions *options;
@property (nonatomic, retain) <C2SessionTaskDelegate> *sessionTaskDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURLSessionDataTask *task;

+ (double)captureMetricDurationBetweenStart:(double)arg1 andEnd:(double)arg2;
+ (double)captureMetricsForTimingData:(id)arg1 withKey:(id)arg2;

- (void).cxx_destruct;
- (void)C2Session:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (struct os_activity_s { }*)activity;
- (void)captureMetricsWithError:(id)arg1 errorContextTitle:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)handleCallbackForTask:(id)arg1 callback:(id /* block */)arg2;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2 sessionTaskDelegate:(id)arg3;
- (void)invalidate;
- (unsigned char)isComplete;
- (id)options;
- (id)sessionTaskDelegate;
- (void)setIsComplete:(unsigned char)arg1;
- (void)setSessionTaskDelegate:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;
- (id)taskDescription;

@end
