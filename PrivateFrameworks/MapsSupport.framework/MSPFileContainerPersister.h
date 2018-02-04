/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPFileContainerPersister : MSPContainerPersister {
    NSURL * _persistenceFileURL;
}

@property (nonatomic, readonly) NSURL *persistenceFileURL;

+ (void)initialize;

- (void).cxx_destruct;
- (id)commitByCreatingStateSnapshotAndDataWithCreationHandler:(id /* block */)arg1 error:(out id*)arg2;
- (void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(id /* block */)arg4;
- (void)eraseWithCompletion:(id /* block */)arg1;
- (void)fetchStateSnapshotWithCompletion:(id /* block */)arg1;
- (bool)getSnapshot:(out id*)arg1 data:(out id*)arg2 forNewContents:(id)arg3 edits:(id)arg4 appliedToOldContents:(id)arg5 error:(out id*)arg6;
- (bool)getSnapshot:(out id*)arg1 data:(out id*)arg2 mergingCurrentState:(id)arg3 withState:(id)arg4 mergeOptions:(id)arg5 error:(out id*)arg6;
- (id)init;
- (id)initWithPersistenceFileAtURL:(id)arg1;
- (id)newStateSnapshot;
- (id)persistenceFileURL;
- (id)stateSnapshotFromData:(id)arg1;

@end