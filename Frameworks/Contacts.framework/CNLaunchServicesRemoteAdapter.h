/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNLaunchServicesRemoteAdapter : NSObject <CNLaunchServicesAdapter>

+ (id)createConnectionWithInterface:(id)arg1;
+ (id)launchServicesAdapterInterface;

- (void)applicationForBundleIdentifier:(id)arg1 withReply:(id /* block */)arg2;
- (void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(id /* block */)arg2;
- (void)applicationsForUserActivityType:(id)arg1 withReply:(id /* block */)arg2;
- (void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(id /* block */)arg3;

@end