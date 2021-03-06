/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPPageLayout : TSDLayout {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _headerFooterBorderRects;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _headerFooterClipRects;
    TSWPLayout * _headerFooterLayouts;
}

@property (nonatomic, readonly) bool allowsHeaderFooter;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bodyRect;
@property (nonatomic, readonly) double footerHeight;
@property (nonatomic, readonly) bool hasFooters;
@property (nonatomic, readonly) bool hasHeaders;
@property (nonatomic, readonly) <TSWPHeaderFooterProvider> *headerFooterProvider;
@property (nonatomic, readonly) bool headerFooterProviderValid;
@property (nonatomic, readonly) double headerHeight;

- (void).cxx_destruct;
- (bool)allowsHeaderFooter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bodyRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })borderRectForHeaderFooter:(int)arg1 atIndex:(int)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRectForHeaderFooter:(int)arg1 atIndex:(int)arg2;
- (double)footerHeight;
- (bool)hasFooters;
- (bool)hasHeaders;
- (id)headerFooterLayout:(int)arg1 atIndex:(int)arg2;
- (id)headerFooterProvider;
- (bool)headerFooterProviderValid;
- (double)headerHeight;
- (void)i_clearHeaderFooterLayouts;
- (void)i_insertValidatedHeaderFooterLayouts;
- (bool)i_updateHeaderFooterLayouts;
- (bool)isHeaderFooterLayout:(id)arg1;
- (bool)p_isHeaderFooter:(int)arg1 editingAtFragmentIndex:(int)arg2;
- (void)p_updateHeaderFooterClipAndBorderRect;
- (void)p_updateHeaderFooterClipAndBorderRects:(int)arg1;
- (void)parentWillChangeTo:(id)arg1;
- (bool)shouldHeaderFooterBeVisible:(int)arg1;

@end
