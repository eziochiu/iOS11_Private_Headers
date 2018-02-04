/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentBubbleView : UIView <CKTranscriptPluginView> {
    unsigned long long  _action;
    PKContinuousButton * _actionButton;
    id /* block */  _actionHandler;
    UIActivityIndicatorView * _actionSpinner;
    NSDecimalNumber * _amount;
    UIImageView * _applePayLogoImageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    NSString * _currency;
    bool  _displaysApplePayLogo;
    bool  _hasRoundedCorners;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastBoundsForRoundedCornerLayout;
    bool  _liveRenderingEnabled;
    CAShapeLayer * _maskLayer;
    UILabel * _messageLabel;
    PKPeerPayment3DTextView * _renderView;
    bool  _renderViewRemovedByLossOfWindow;
    bool  _showsActionSpinner;
    bool  _snapshotInProgress;
    unsigned long long  _state;
    UILabel * _statusLabel;
    NSTimer * _testTimer;
    bool  _testTransition;
}

@property (nonatomic) unsigned long long action;
@property (nonatomic, readonly) PKContinuousButton *actionButton;
@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic, copy) NSString *currency;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displaysApplePayLogo;
@property (nonatomic) bool hasRoundedCorners;
@property (readonly) unsigned long long hash;
@property (getter=isLiveRenderingEnabled, nonatomic) bool liveRenderingEnabled;
@property (nonatomic) <CKTranscriptPluginViewDelegate> *pluginViewDelegate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceBounds;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } referenceSize;
@property (nonatomic) bool showsActionSpinner;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic) bool testTransition;
@property (nonatomic, readonly) bool wantsOutline;

+ (id)generatedSnapshotForDataURL:(id)arg1 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 isFromMe:(bool)arg3;
+ (id)referenceBackgroundColor;
+ (id)referenceBackgroundColorForState:(unsigned long long)arg1;
+ (struct CGSize { double x1; double x2; })referenceSize;
+ (struct CGSize { double x1; double x2; })referenceSizeForPeerPaymentStatusResponse:(id)arg1;
+ (struct CGSize { double x1; double x2; })referenceSizeForState:(unsigned long long)arg1;
+ (struct CGSize { double x1; double x2; })referenceSizeForState:(unsigned long long)arg1 andAction:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_actionButtonTapped:(id)arg1;
- (id)_actionTitle;
- (id)_backgroundColor;
- (void)_commonInit;
- (double)_messageAlpha;
- (id)_messageText;
- (id)_messageTextAttributes;
- (id)_statusText;
- (void)_updateContent;
- (unsigned long long)action;
- (id)actionButton;
- (id /* block */)actionHandler;
- (id)amount;
- (void)awakeFromNib;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)currency;
- (void)didMoveToWindow;
- (bool)displaysApplePayLogo;
- (id)generatedSnapshot;
- (bool)hasRoundedCorners;
- (id)init;
- (id)initWithAmount:(id)arg1 currency:(id)arg2 state:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)interactiveViews;
- (bool)isLiveRenderingEnabled;
- (void)layoutSubviews;
- (void)performPostRender:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceBounds;
- (struct CGSize { double x1; double x2; })referenceSize;
- (void)setAction:(unsigned long long)arg1;
- (void)setAction:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setAmount:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCurrency:(id)arg1;
- (void)setDisplaysApplePayLogo:(bool)arg1;
- (void)setHasRoundedCorners:(bool)arg1;
- (void)setLiveRenderingEnabled:(bool)arg1;
- (void)setShowsActionSpinner:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setTestTransition:(bool)arg1;
- (bool)showsActionSpinner;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)state;
- (bool)testTransition;
- (void)updateWithPaymentTransaction:(id)arg1 animated:(bool)arg2;
- (void)updateWithPeerPaymentMessage:(id)arg1 animated:(bool)arg2;
- (void)updateWithPeerPaymentStatus:(long long)arg1 animated:(bool)arg2;
- (void)updateWithPeerPaymentStatusResponse:(id)arg1 animated:(bool)arg2;

@end