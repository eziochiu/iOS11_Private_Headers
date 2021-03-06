/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFileCoordinatedDictionary : NSObject <NSFilePresenter> {
    NSOperationQueue * _accessQueue;
    NSURL * _fileURL;
    NSOperationQueue * _presentedItemOperationQueue;
    NSURL * _presentedItemURL;
}

@property (nonatomic, retain) NSOperationQueue *accessQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property long long maxConcurrentOperationCount;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_readFromFileURL:(id)arg1;
- (bool)_writeDictionary:(id)arg1 toFileURL:(id)arg2;
- (id)accessQueue;
- (id)fileURL;
- (id)init;
- (id)initWithFileURL:(id)arg1;
- (long long)maxConcurrentOperationCount;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)readWithAccessor:(id /* block */)arg1;
- (void)replaceWithEntriesFromDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)setAccessQueue:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setMaxConcurrentOperationCount:(long long)arg1;
- (void)writeWithAccessor:(id /* block */)arg1 completion:(id /* block */)arg2;

@end
