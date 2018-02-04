/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFClientLite : NSObject <AFClientLiteClientCommandHandling> {
    id /* block */  _commandHandler;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_handleCommand:(id)arg1 isOneWay:(bool)arg2 commandHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)handleCommand:(id)arg1 commandHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (oneway void)handleCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)handleOneWayCommand:(id)arg1 commandHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)init;

@end
