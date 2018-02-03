/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFilteredDataSource : NSObject <UITableViewDataSource> {
    long long  _filterType;
    bool  _limitingWithSections;
    long long  _maxVisibleSection;
    long long  _numberOfVisibleItemsInLastSection;
    <UITableViewDataSource> * _tableDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long filterType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <UITableViewDataSource> *tableDataSource;

- (long long)_filteredNumberOfItemsGivenSection:(long long)arg1 numberOfItems:(long long)arg2;
- (long long)filterType;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setFilterType:(long long)arg1;
- (void)setTableDataSource:(id)arg1;
- (id)tableDataSource;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end