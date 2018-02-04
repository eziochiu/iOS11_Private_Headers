/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSoftwareUpdateLicenseViewController : UIViewController {
    id /* block */  _agreeHandler;
    id /* block */  _disagreeHandler;
    NSURL * _url;
    WKWebView * _webView;
}

@property (nonatomic, copy) id /* block */ agreeHandler;
@property (nonatomic, copy) id /* block */ disagreeHandler;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, retain) WKWebView *webView;

- (void).cxx_destruct;
- (void)_agreeToTerms:(id)arg1;
- (void)_disagreeToTerms:(id)arg1;
- (id /* block */)agreeHandler;
- (id /* block */)disagreeHandler;
- (id)initWithURL:(id)arg1;
- (void)loadView;
- (void)setAgreeHandler:(id /* block */)arg1;
- (void)setDisagreeHandler:(id /* block */)arg1;
- (void)setWebView:(id)arg1;
- (id)url;
- (void)viewDidLoad;
- (id)webView;

@end
