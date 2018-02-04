/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCDelegateState : NSObject {
    <DCDocumentManagerDelegate> * _delegate;
    DCCachedItem * _item;
    NSObject<OS_dispatch_queue> * _queue;
    NSData * _watchedVersionIdentifier;
}

@property (readonly) <DCDocumentManagerDelegate> *delegate;
@property (readonly) DCCachedItem *item;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSData *watchedVersionIdentifier;

+ (id)delegateStateWithDelegate:(id)arg1 queue:(id)arg2 item:(id)arg3;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 item:(id)arg3;
- (id)item;
- (id)queue;
- (void)setWatchedVersionIdentifier:(id)arg1;
- (id)watchedVersionIdentifier;

@end
