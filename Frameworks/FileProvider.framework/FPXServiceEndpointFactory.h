/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPXServiceEndpointFactory : NSObject <_NSFileProviderServiceEndpointCreating> {
    FPXDomainContext * _domainContext;
    NSDictionary * _serviceSources;
}

- (void).cxx_destruct;
- (void)getListenerEndpointForServiceName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithServiceSources:(id)arg1 domainContext:(id)arg2;

@end
