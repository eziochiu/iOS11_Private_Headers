/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _CFXNotificationDarwinTokenRegistration : _CFXNotificationTokenRegistration {
    int  _notifyToken;
}

@property (readonly) int notifyToken;

- (id)initWithToken:(unsigned long long)arg1 notifyToken:(int)arg2 options:(unsigned long long)arg3 queue:(id)arg4 handler:(id /* block */)arg5;
- (void)invalidate;
- (int)notifyToken;

@end
