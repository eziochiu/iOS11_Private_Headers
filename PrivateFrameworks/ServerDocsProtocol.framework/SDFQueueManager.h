/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface SDFQueueManager : NSObject {
    NSMutableDictionary * _serviceQueues;
}

+ (id)sharedQueueManager;

- (void).cxx_destruct;
- (id)init;
- (id)queueForServiceWithUniqueIdentifier:(id)arg1;

@end
