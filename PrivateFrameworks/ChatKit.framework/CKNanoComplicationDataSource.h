/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNanoComplicationDataSource : NSObject {
    long long  _family;
    IMChat * _lastReceivedChat;
    bool  _messageRecdNotification;
    long long  _unreadMessageCount;
}

@property (nonatomic) long long family;
@property (nonatomic, retain) IMChat *lastReceivedChat;
@property (nonatomic) bool messageRecdNotification;
@property (nonatomic) long long unreadMessageCount;

+ (id)_imageProviderWithForegroundName:(id)arg1 compact:(bool)arg2 unreadCount:(long long)arg3 family:(long long)arg4 locked:(bool)arg5;
+ (id)_templateForFamily:(long long)arg1 unreadMessageCount:(long long)arg2 compact:(bool)arg3 locked:(bool)arg4;
+ (id)staticTemplateForFamily:(long long)arg1 compact:(bool)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)family;
- (id)initWithComplication:(id)arg1 family:(long long)arg2;
- (id)lastReceivedChat;
- (bool)messageRecdNotification;
- (void)setFamily:(long long)arg1;
- (void)setLastReceivedChat:(id)arg1;
- (void)setMessageRecdNotification:(bool)arg1;
- (void)setUnreadMessageCount:(long long)arg1;
- (long long)unreadMessageCount;

@end
