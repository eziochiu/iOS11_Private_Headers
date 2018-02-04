/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSectionedDataSourceManager : PXObservable {
    PXSectionedChangeDetailsRepository * _changeHistory;
    PXSectionedDataSource * _dataSource;
}

@property (nonatomic, readonly) PXSectionedChangeDetailsRepository *changeHistory;
@property (nonatomic, readonly) PXSectionedDataSource *dataSource;

- (void).cxx_destruct;
- (void)_setDataSource:(id)arg1;
- (id)changeHistory;
- (id)createInitialDataSource;
- (id)dataSource;
- (id)init;
- (id)mutableChangeObject;
- (id)queryObserversInterestingObjectReferences;
- (void)registerChangeObserver:(id)arg1 context:(void*)arg2;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)unregisterChangeObserver:(id)arg1 context:(void*)arg2;

@end
