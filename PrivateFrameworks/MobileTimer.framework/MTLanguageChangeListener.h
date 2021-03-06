/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTLanguageChangeListener : NSObject <MTAgentNotificationListener>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_languageChangeNotification;

- (void)_handleLanguageChanged;
- (void)handleNotification:(id)arg1;
- (id)handledLiveDarwinNotifications;
- (bool)handlesNotification:(id)arg1;

@end
