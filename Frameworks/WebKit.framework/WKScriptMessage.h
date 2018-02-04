/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKScriptMessage : NSObject {
    struct RetainPtr<id> { 
        void *m_ptr; 
    }  _body;
    struct RetainPtr<WKFrameInfo> { 
        void *m_ptr; 
    }  _frameInfo;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _name;
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<WKWebView>="m_weakReference"@}' */ struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    }  _webView;
}

@property (nonatomic, readonly, copy) id body;
@property (nonatomic, readonly, copy) WKFrameInfo *frameInfo;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) WKWebView *webView;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithBody:(id)arg1 webView:(id)arg2 frameInfo:(id)arg3 name:(id)arg4;
- (id)body;
- (id)frameInfo;
- (id)name;
- (id)webView;

@end
