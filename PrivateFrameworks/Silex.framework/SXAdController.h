/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAdController : NSObject <ADBannerViewInternalDelegate> {
    NSMutableDictionary * _bannerViews;
    NSObject<OS_dispatch_semaphore> * _bannerViewsSemaphore;
    NSMutableArray * _componentViewsDisplayingAds;
    SXContext * _context;
    <SXAdControllerDataSource> * _dataSource;
    <SXAdControllerDelegate> * _delegate;
    bool  _didLoadFirstBannerView;
    SXDocument * _document;
}

@property (nonatomic, retain) NSMutableDictionary *bannerViews;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *bannerViewsSemaphore;
@property (nonatomic, readonly) NSMutableArray *componentViewsDisplayingAds;
@property (nonatomic, readonly) SXContext *context;
@property (nonatomic) <SXAdControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXAdControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didLoadFirstBannerView;
@property (nonatomic, readonly) SXDocument *document;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)debugAdvertismentSettings;
+ (bool)interactivityDebuggingEnabled;
+ (bool)isDebugModeEnabled;
+ (void)setDebugAdvertisingSettings:(id)arg1;
+ (void)setDebugModeEnabled:(bool)arg1;
+ (void)setInteractivityDebuggingEnabled:(bool)arg1;

- (void).cxx_destruct;
- (bool)allowComponentViewInFirstViewport:(id)arg1;
- (id /* block */)bannerViewForComponentView:(id)arg1 metadataProvider:(id)arg2 adType:(unsigned long long)arg3 completionBlock:(id /* block */)arg4;
- (id)bannerViews;
- (id)bannerViewsSemaphore;
- (bool)component:(id)arg1 isLastComponentInComponents:(id)arg2;
- (void)componentView:(id)arg1 didLoadBannerView:(id)arg2;
- (void)componentView:(id)arg1 didUnloadBannerView:(id)arg2 withError:(id)arg3;
- (void)componentView:(id)arg1 failedToLoadBannerView:(id)arg2 error:(id)arg3;
- (bool)componentViewWithinScreenHeightOfViewport:(id)arg1;
- (id)componentViewsDisplayingAds;
- (id)context;
- (id)dataSource;
- (id)delegate;
- (bool)didLoadFirstBannerView;
- (void)disableAdInteraction;
- (id)document;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForBannerViewForComponentIdentifier:(id)arg1;
- (id)initWithContext:(id)arg1;
- (bool)isComponentViewWithinFirstViewport:(id)arg1;
- (bool)isDisplayingAdsWithinScreenfullOfComponentView:(id)arg1;
- (bool)isRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withinScreenFullOfRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 viewport:(struct CGSize { double x1; double x2; })arg3;
- (id /* block */)prerollForComponent:(id)arg1 metadataProvider:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)reset;
- (void)resumeAdInteraction;
- (void)setBannerViews:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidLoadFirstBannerView:(bool)arg1;
- (bool)shouldRequestBannerViewForComponentView:(id)arg1;
- (void)transitionToSizeWithVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;

@end
