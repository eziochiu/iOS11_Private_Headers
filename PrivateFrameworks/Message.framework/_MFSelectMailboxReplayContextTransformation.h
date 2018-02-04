/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFSelectMailboxReplayContextTransformation : NSObject <MFOfflineCacheReplayContextTransformation> {
    NSString * _mailboxID;
}

- (void)applyToReplayContext:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailboxID:(id)arg1;

@end
