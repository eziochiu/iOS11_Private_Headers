/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView {
    id /* block */  _finishSplitTransitionBlock;
    NSArray * _items;
    struct CGSize { 
        double width; 
        double height; 
    }  m_preferredSize;
}

@property (nonatomic, copy) id /* block */ finishSplitTransitionBlock;

+ (id)activeInstance;
+ (id)sharedInstance;

- (void)actionForItem:(id)arg1;
- (void)dealloc;
- (unsigned long long)defaultSelectedIndex;
- (void)didFinishSplitTransition;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (id /* block */)finishSplitTransitionBlock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)numberOfItems;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)setFinishSplitTransitionBlock:(id /* block */)arg1;
- (void)setSplitAndUndocked:(bool)arg1;
- (id)titleForItemAtIndex:(unsigned long long)arg1;
- (int)visibleItemForIndex:(unsigned long long)arg1;

@end