/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKActivityIndicatorView : TLKView {
    UIActivityIndicatorView * _activityIndicator;
    TLKMultilineText * _subtitle;
    TLKVibrantLabel * _subtitleLabel;
}

@property (retain) UIActivityIndicatorView *activityIndicator;
@property (retain) TLKMultilineText *subtitle;
@property (retain) TLKVibrantLabel *subtitleLabel;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)init;
- (id)observableProperties;
- (void)observedPropertiesChanged;
- (void)setActivityIndicator:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)subtitle;
- (id)subtitleLabel;
- (id)subtitleLabelText;

@end
