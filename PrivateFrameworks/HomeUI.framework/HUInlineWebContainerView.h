/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUInlineWebContainerView : UIView <UIWebViewDelegate> {
    NSData * _content;
    <HUInlineWebContainerViewDelegate> * _delegate;
    UIWebView * _webView;
}

@property (nonatomic, retain) NSData *content;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUInlineWebContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIWebView *webView;

- (void).cxx_destruct;
- (id)_defaultFont;
- (id)content;
- (id)delegate;
- (double)heightForWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setContent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUserStyleSheet:(id)arg1;
- (bool)uiWebView:(id)arg1 previewIsAllowedForPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)webView;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

@end
