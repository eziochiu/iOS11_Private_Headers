/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADNSURLSessionTaskInfo : NSObject {
    <NSURLSessionDataDelegate> * _delegate;
    NSArray * _modes;
    NSURLSessionDataTask * _task;
    NSThread * _thread;
}

@property <NSURLSessionDataDelegate> *delegate;
@property (copy) NSArray *modes;
@property (readonly, retain) NSURLSessionDataTask *task;
@property (retain) NSThread *thread;

- (void)dealloc;
- (id)delegate;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 modes:(id)arg3;
- (void)invalidate;
- (id)modes;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockOnClientThread:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setModes:(id)arg1;
- (void)setThread:(id)arg1;
- (id)task;
- (id)thread;

@end
