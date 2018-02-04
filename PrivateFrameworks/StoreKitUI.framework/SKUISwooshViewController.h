/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISwooshViewController : UIViewController {
    SKUIClientContext * _clientContext;
    SKUIColorScheme * _colorScheme;
    <SKUISwooshViewControllerDelegate> * _delegate;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, copy) SKUIColorScheme *colorScheme;
@property (nonatomic) <SKUISwooshViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)clientContext;
- (id)colorScheme;
- (id)delegate;
- (void)deselectAllItems;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndex:(long long)arg1;
- (id)indexPathsForVisibleItems;
- (id)popImageViewForItemAtIndex:(long long)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)unhideImages;

@end