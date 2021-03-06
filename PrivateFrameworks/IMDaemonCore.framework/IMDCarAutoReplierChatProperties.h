/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCarAutoReplierChatProperties : NSObject {
    bool  _autoReplySent;
    NSMutableArray * _suppressedMessageIDs;
    bool  _urgent;
}

@property (nonatomic) bool autoReplySent;
@property (getter=isUrgent, nonatomic) bool urgent;

- (void)addSuppressedMessage:(id)arg1;
- (bool)autoReplySent;
- (void)dealloc;
- (id)init;
- (bool)isUrgent;
- (id)popSuppressedMessages;
- (void)setAutoReplySent:(bool)arg1;
- (void)setUrgent:(bool)arg1;

@end
