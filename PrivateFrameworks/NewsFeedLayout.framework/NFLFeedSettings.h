/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLFeedSettings : NSObject <NSCopying> {
    double  _adjustedFeedWidth;
    bool  _allowsExcerptsInAllCells;
    double  _articleContentInset;
    double  _articleSelectionCornerRadius;
    double  _articleSelectionInset;
    bool  _authenticationSetup;
    NFLCellGeneratorManager * _cellGeneratorManager;
    long long  _columnCount;
    double  _columnWidth;
    NSObject<NFLFeedLayoutSearchConfiguration> * _defaultFeedLayoutSearchConfiguration;
    FCHeadlineTemplate * _defaultHeadlineTemplate;
    double  _feedGutter;
    <FCFeedTheming> * _feedTheme;
    double  _feedWidth;
    NFLFontCache * _fontCache;
    double  _horizontalMarginWidth;
    unsigned long long  _layoutOptions;
    NSString * _preferredContentSizeCategory;
    double  _rowHeight;
    double  _scaleValue;
    bool  _showingPrefetchedPurchase;
    double  _verticalMarginInRows;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSize;
}

@property (nonatomic, readonly) double adjustedFeedWidth;
@property (nonatomic) bool allowsExcerptsInAllCells;
@property (nonatomic, readonly) double articleContentInset;
@property (nonatomic, readonly) double articleSelectionCornerRadius;
@property (nonatomic, readonly) double articleSelectionInset;
@property (nonatomic, readonly) bool authenticationSetup;
@property (nonatomic, readonly) NFLCellGeneratorManager *cellGeneratorManager;
@property (nonatomic, readonly) long long columnCount;
@property (nonatomic, readonly) double columnWidth;
@property (nonatomic, copy) NSObject<NFLFeedLayoutSearchConfiguration> *defaultFeedLayoutSearchConfiguration;
@property (nonatomic, retain) FCHeadlineTemplate *defaultHeadlineTemplate;
@property (nonatomic, readonly, copy) UIColor *feedBackgroundColor;
@property (nonatomic, readonly) double feedGutter;
@property (nonatomic, retain) <FCFeedTheming> *feedTheme;
@property (nonatomic, readonly) double feedWidth;
@property (nonatomic, readonly) NFLFontCache *fontCache;
@property (nonatomic, readonly) double horizontalMarginWidth;
@property (nonatomic, readonly) unsigned long long layoutOptions;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly) double rowHeight;
@property (nonatomic, readonly) double scaleValue;
@property (nonatomic, readonly) bool showingPrefetchedPurchase;
@property (nonatomic, readonly) double verticalMarginInRows;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewportSize;

- (void).cxx_destruct;
- (double)adjustedFeedWidth;
- (bool)allowsExcerptsInAllCells;
- (double)articleContentInset;
- (double)articleSelectionCornerRadius;
- (double)articleSelectionInset;
- (bool)authenticationSetup;
- (id)cellGeneratorManager;
- (double)cellHeightForRowSpan:(long long)arg1;
- (double)cellWidthForColumnSpan:(long long)arg1;
- (long long)columnCount;
- (double)columnWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultFeedLayoutSearchConfiguration;
- (id)defaultHeadlineTemplate;
- (id)feedBackgroundColor;
- (double)feedGutter;
- (id)feedTheme;
- (double)feedWidth;
- (id)fontCache;
- (double)horizontalMarginWidth;
- (id)init;
- (id)initWithViewportSize:(struct CGSize { double x1; double x2; })arg1 defaultFeedLayoutSearchConfiguration:(id)arg2 columnCount:(long long)arg3 feedGutter:(double)arg4 verticalMarginInRows:(double)arg5 preferredContentSizeCategory:(id)arg6 maximumContentInset:(double)arg7 selectionCornerRadius:(double)arg8 selectionInset:(double)arg9 showAccessoryText:(bool)arg10 layoutOptions:(unsigned long long)arg11;
- (id)initWithViewportSize:(struct CGSize { double x1; double x2; })arg1 viewportInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 preferredContentSizeCategory:(id)arg3 showAccessoryText:(bool)arg4;
- (id)initWithViewportSize:(struct CGSize { double x1; double x2; })arg1 viewportInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 preferredContentSizeCategory:(id)arg3 showAccessoryText:(bool)arg4 layoutType:(long long)arg5 layoutOptions:(unsigned long long)arg6;
- (unsigned long long)layoutOptions;
- (id)preferredContentSizeCategory;
- (bool)preservesLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (double)rowHeight;
- (double)scaleValue;
- (void)setAllowsExcerptsInAllCells:(bool)arg1;
- (void)setDefaultFeedLayoutSearchConfiguration:(id)arg1;
- (void)setDefaultHeadlineTemplate:(id)arg1;
- (void)setFeedTheme:(id)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (bool)showingPrefetchedPurchase;
- (double)verticalMarginInRows;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
