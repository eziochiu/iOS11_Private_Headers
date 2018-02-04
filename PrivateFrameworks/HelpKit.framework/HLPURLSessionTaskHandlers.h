/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPURLSessionTaskHandlers : NSObject {
    NSMutableArray * _completionHandlers;
    NSURLSession * _session;
    NSURLSessionTask * _sessionTask;
}

@property (nonatomic, retain) NSMutableArray *completionHandlers;
@property (nonatomic, retain) NSURLSession *session;
@property (nonatomic, retain) NSURLSessionTask *sessionTask;

+ (id)URLSessionTaskHandlersWithSession:(id)arg1 sessionTask:(id)arg2 completionHandler:(id)arg3;

- (void).cxx_destruct;
- (id)completionHandlers;
- (void)dealloc;
- (id)initWithSession:(id)arg1 sessionTask:(id)arg2 completionHandler:(id)arg3;
- (id)session;
- (id)sessionTask;
- (void)setCompletionHandlers:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionTask:(id)arg1;

@end
