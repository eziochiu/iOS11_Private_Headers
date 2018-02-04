/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

@interface CRKCardSectionViewController : UIViewController <INUIRemoteViewControllerDelegate, SFFeedbackListener, SearchUIFeedbackDelegate> {
    bool  _active;
    <CRCardSection> * _cardSection;
    bool  _compressed;
    <CRKCardSectionViewControllerDataSource> * _dataSource;
    <CRKCardSectionViewControllerDelegate> * _delegate;
    NSArray * _extraCommands;
    bool  _loading;
    CRKOverlayButton * _overlayButton;
    INUIRemoteViewController * _remoteViewController;
}

@property (nonatomic, readonly) INUIRemoteViewController *_remoteViewController;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) <CRCardSection> *cardSection;
@property (getter=isCompressed, nonatomic) bool compressed;
@property (nonatomic) <CRKCardSectionViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKCardSectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_extraCommands, setter=_setExtraCommands:, nonatomic, retain) NSArray *extraCommands;
@property (readonly) unsigned long long hash;
@property (getter=isLoading, nonatomic) bool loading;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView<CRKCardSectionView> *view;

+ (id)cardSectionClasses;
+ (id)cardSectionViewControllerForCardSection:(id)arg1 dataSource:(id)arg2;
+ (void)registerCardSectionViewController;

- (void).cxx_destruct;
- (void)_attemptToConnectToRemoteViewControllerWithInteraction:(id)arg1 forParameters:(id)arg2;
- (id)_backingCardSection;
- (void)_buttonOverlayTouchWasCanceled:(id)arg1;
- (void)_buttonOverlayWasTouchedDown:(id)arg1;
- (void)_buttonOverlayWasTouchedUpInside:(id)arg1;
- (void)_buttonOverlayWasTouchedUpOutside:(id)arg1;
- (void)_cancelTouchesIfNecessary;
- (bool)_checkIfCardSectionIsNull:(id)arg1;
- (id)_commands;
- (void)_createAndSetSearchUIView;
- (id)_destinationPunchout;
- (bool)_expectsSearchUIView;
- (id)_extraCommands;
- (void)_finishLoadingViewIfNecessary;
- (id)_generateCardSectionViewAppearanceFeedback;
- (bool)_hasCorrespondingSearchUIView;
- (id)_initWithCardSection:(id)arg1 dataSource:(id)arg2;
- (id)_interaction;
- (bool)_isIndicatingActivity;
- (bool)_isLoadedWithIntentsUIView;
- (void)_loadCardSectionView;
- (id)_parameters;
- (void)_performCommand:(id)arg1;
- (id)_preferredPunchoutCommand;
- (id)_remoteViewController;
- (void)_resumeTouchesIfNecessary;
- (void)_setExtraCommands:(id)arg1;
- (void)_setViewExternally:(id)arg1;
- (void)_setupCardSectionButtons;
- (bool)_setupWithDataSource:(id)arg1;
- (bool)_shouldAttemptToConnectToRemoteViewController;
- (bool)_shouldHideButtonOverlay;
- (bool)_shouldRenderButtonOverlay;
- (id)_unhandledParameters;
- (id)cardSection;
- (void)cardSectionViewDidInvalidateSize:(id)arg1;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (unsigned long long)crk_intrinsicInteractiveBehavior;
- (id)dataSource;
- (id)delegate;
- (void)didEngageCardSection:(id)arg1;
- (void)eventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (id)interfaceSectionsForRemoteViewController:(id)arg1;
- (bool)isActive;
- (bool)isCompressed;
- (bool)isLoading;
- (void)loadView;
- (id)maximumSizesBySystemVersionForRemoteViewController:(id)arg1;
- (id)minimumSizesBySystemVersionForRemoteViewController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)remoteViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
- (void)remoteViewControllerServiceDidTerminate:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setCardSection:(id)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
