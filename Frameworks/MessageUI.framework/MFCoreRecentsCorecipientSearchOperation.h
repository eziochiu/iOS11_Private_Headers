/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFCoreRecentsCorecipientSearchOperation : MFContactsSearchOperation {
    NSString * _bundleIdentifier;
    unsigned long long  _implicitGroupThreshold;
    NSSet * _otherRecipients;
}

+ (id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 otherRecipients:(id)arg3 taskID:(id)arg4 properties:(id)arg5 bundleIdentifier:(id)arg6 implicitGroupThreshold:(unsigned long long)arg7;

- (void)dealloc;
- (void)main;

@end
