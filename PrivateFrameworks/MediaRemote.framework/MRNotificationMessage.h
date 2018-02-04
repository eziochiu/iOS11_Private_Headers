/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNotificationMessage : MRProtocolMessage

@property (nonatomic, readonly) NSString *notification;
@property (nonatomic, readonly) void*playerPath;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (id)initWithNotification:(id)arg1;
- (id)notification;
- (void*)playerPath;
- (unsigned long long)type;
- (id)userInfo;

@end