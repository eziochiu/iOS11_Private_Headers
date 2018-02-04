/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKProcessGroup : NSObject {
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<id<WKProcessGroupDelegate> >="m_weakReference"@}' */ struct WeakObjCPtr<id<WKProcessGroupDelegate> > { 
        id m_weakReference; 
    }  _delegate;
    struct RetainPtr<WKGeolocationProviderIOS> { 
        void *m_ptr; 
    }  _geolocationProvider;
    struct RefPtr<WebKit::WebProcessPool> { 
        struct WebProcessPool {} *m_ptr; 
    }  _processPool;
}

@property (readonly) struct OpaqueWKContext { }*_contextRef;
@property (readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property <WKProcessGroupDelegate> *delegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueWKContext { }*)_contextRef;
- (id)_geolocationProvider;
- (void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
- (id)delegate;
- (id)init;
- (id)initWithInjectedBundleURL:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
