/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSSearchBarDelegate : NSObject <UISearchBarDelegate> {
    UISearchBar * _searchBar;
    NSString * _text;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UISearchBar *searchBar;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)init;
- (id)searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)setSearchBar:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end