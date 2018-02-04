/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryAdaptiveViewController : UIViewController <MusicClientContextConsuming, MusicIndexBarDataSource, MusicIndexBarScrollDelegate, MusicLibraryViewConfigurationConsuming> {
    UIViewController<MusicLibraryViewConfigurationConsuming> * _activeViewController;
    MusicClientContext * _clientContext;
    long long  _horizontalSizeClassForActiveView;
    bool  _isActiveViewControllerIndexBarDataSource;
    bool  _isActiveViewControllerIndexBarScrollDelegate;
    MusicLibraryAdaptiveViewConfiguration * _libraryViewConfiguration;
}

@property (nonatomic, readonly) UIViewController<MusicLibraryViewConfigurationConsuming> *activeViewController;
@property (nonatomic, retain) MusicClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MusicLibraryAdaptiveViewConfiguration *libraryViewConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activeViewControllerIndexBarDataSourceDidInvalidateNotification:(id)arg1;
- (void)_applyClientContextToChildViewControllers;
- (void)_applyClientContextToViewController:(id)arg1;
- (void)_reloadActiveViewIfNeeded;
- (void)_tearDownActiveView;
- (id)activeViewController;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)clientContext;
- (void)dealloc;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (bool)getContentOffset:(struct CGPoint { double x1; double x2; }*)arg1 forIndexBarEntryAtIndex:(unsigned long long)arg2;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibraryViewConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)libraryViewConfiguration;
- (bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (unsigned long long)numberOfIndexBarEntries;
- (void)setClientContext:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end