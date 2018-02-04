/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKObservablePageState : NSObject <_WKObservablePageState> {
    struct unique_ptr<WebKit::PageLoadStateObserver, std::__1::default_delete<WebKit::PageLoadStateObserver> > { 
        struct __compressed_pair<WebKit::PageLoadStateObserver *, std::__1::default_delete<WebKit::PageLoadStateObserver> > { 
            struct PageLoadStateObserver {} *__first_; 
        } __ptr_; 
    }  _observer;
    struct RefPtr<WebKit::WebPageProxy> { 
        struct WebPageProxy {} *m_ptr; 
    }  _page;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) bool _webProcessIsResponsive;
@property (nonatomic, readonly) double estimatedProgress;
@property (nonatomic, readonly) bool hasOnlySecureContent;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic, readonly) struct __SecTrust { }*serverTrust;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSURL *unreachableURL;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)URL;
- (bool)_webProcessIsResponsive;
- (void)dealloc;
- (double)estimatedProgress;
- (bool)hasOnlySecureContent;
- (id)initWithPage:(struct RefPtr<WebKit::WebPageProxy> { struct WebPageProxy {} *x1; }*)arg1;
- (bool)isLoading;
- (struct __SecTrust { }*)serverTrust;
- (id)title;
- (id)unreachableURL;

@end