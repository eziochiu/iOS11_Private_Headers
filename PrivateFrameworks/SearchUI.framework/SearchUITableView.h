/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITableView : UITableView {
    unsigned long long  _searchUIStyle;
}

@property (nonatomic) unsigned long long searchUIStyle;

- (bool)allowsHeaderViewsToFloat;
- (id)init;
- (unsigned long long)searchUIStyle;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSearchUIStyle:(unsigned long long)arg1;
- (void)updateSeparatorsForStyle;

@end
