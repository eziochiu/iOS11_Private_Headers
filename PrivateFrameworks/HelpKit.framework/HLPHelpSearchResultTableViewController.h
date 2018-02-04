/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpSearchResultTableViewController : UITableViewController {
    UILabel * _footerLabel;
    UIView * _footerView;
    NSArray * _searchResults;
}

@property (nonatomic, retain) UIView *footerView;
@property (nonatomic, retain) NSArray *searchResults;

- (void).cxx_destruct;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)footerView;
- (id)searchResults;
- (void)setFooterView:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateWithSearchText:(id)arg1 searchResults:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
