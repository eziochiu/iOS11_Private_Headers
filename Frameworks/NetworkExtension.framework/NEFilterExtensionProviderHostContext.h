/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterExtensionProviderHostContext : NEExtensionProviderHostContext <NEFilterExtensionProviderHostProtocol, NEFilterExtensionProviderProtocol> {
    <NEFilterExtensionProviderProtocol> * _vendorContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) <NEFilterExtensionProviderProtocol> *vendorContext;

- (void).cxx_destruct;
- (void)setExtensionIdentifier:(id)arg1 deviceIdentifier:(id)arg2;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateConfiguration:(id)arg1;
- (id)vendorContext;

@end
