/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface AdSupportAboutController : UIViewController <UIWebViewDelegate> {
    UIWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWebView *webView;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)localizedStringFromDictionary:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)showErrorAlert;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;

@end
