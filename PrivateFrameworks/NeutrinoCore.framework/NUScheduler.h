/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUScheduler : NSObject {
    NUJobQueue * _completeQueue;
    NUJobQueue * _prepareQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NUJobQueue * _renderQueue;
}

+ (id)sharedScheduler;

- (void).cxx_destruct;
- (void)_cancelPreviousJobs:(id)arg1;
- (void)_enqueueDependentJobsForRenderJob:(id)arg1;
- (void)_enqueueJobsForRequests:(id)arg1 withGroup:(id)arg2;
- (void)_enqueueRenderJob:(id)arg1 toStage:(long long)arg2;
- (void)_observeRenderJob:(id)arg1 withGroup:(id)arg2;
- (id)_queueForStage:(long long)arg1;
- (void)_resumeRenderJob:(id)arg1;
- (void)cancelJobsForRenderContext:(id)arg1;
- (id)debugDescription;
- (id)init;
- (void)submitRequests:(id)arg1 withGroup:(id)arg2;

@end