/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSimpleItemManager : HFItemManager {
    id /* block */  _itemComparator;
    id /* block */  _itemProvidersCreator;
}

@property (nonatomic, copy) id /* block */ itemComparator;
@property (nonatomic, readonly, copy) id /* block */ itemProvidersCreator;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 itemProvidersCreator:(id /* block */)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 itemProvidersCreator:(id /* block */)arg3;
- (id /* block */)itemComparator;
- (id /* block */)itemProvidersCreator;
- (void)setItemComparator:(id /* block */)arg1;

@end
