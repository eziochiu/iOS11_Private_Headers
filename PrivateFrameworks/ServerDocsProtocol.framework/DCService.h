/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCService : NSObject {
    NSString * _keychainItemIdentifier;
    NSString * _uniqueIdentifier;
    NSURL * _url;
}

@property (readonly, retain) NSString *keychainItemIdentifier;
@property (readonly, retain) NSString *uniqueIdentifier;
@property (readonly, retain) NSURL *url;

+ (id)serverIdentifierForURL:(id)arg1;
+ (id)serviceWithAccount:(id)arg1;
+ (id)serviceWithHostName:(id)arg1 uniqueIdentifier:(id)arg2;
+ (id)serviceWithURL:(id)arg1 keychainItemIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithAccount:(id)arg1;
- (id)_initWithHostName:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)_initWithURL:(id)arg1 keychainItemIdentifier:(id)arg2;
- (id)description;
- (id)keychainItemIdentifier;
- (void)portNumberDidChange:(id)arg1;
- (id)uniqueIdentifier;
- (id)url;

@end
