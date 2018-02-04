/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIActivityIndicatorCardSectionView : SearchUICardSectionView

@property (retain) TLKActivityIndicatorView *contentView;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (id)setupContentView;
- (void)updateWithCardSection:(id)arg1;

@end
