/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAutoEditor : NSObject {
    id /* block */  _downloadCompleted;
    float  _downloadProgress;
    MiroMemory * _memory;
    MovieController * _movieController;
    id  _observer;
    NSOperationQueue * _operationQueue;
    float  _progress;
    Project * _project;
    long long  _remainingAssetsToDownload;
    bool  _shouldBuildMovieController;
    bool  _shouldSave;
    bool  _topLevelCancel;
}

@property (nonatomic, copy) id /* block */ downloadCompleted;
@property float downloadProgress;
@property (nonatomic, retain) MiroMemory *memory;
@property (retain) MovieController *movieController;
@property (nonatomic, retain) id observer;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic) float progress;
@property (retain) Project *project;
@property long long remainingAssetsToDownload;
@property (retain) <MiroSequence> *sequence;
@property bool shouldBuildMovieController;
@property bool shouldSave;
@property bool topLevelCancel;

+ (id)sharedInstanceForPregenerate;

- (void).cxx_destruct;
- (void)_autoEditMemory:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_cancel;
- (void)_logMemoryStuff:(id)arg1;
- (id)_printDataForAssetAsString:(id)arg1 andPickInfo:(id)arg2;
- (id)_returnTextDebugAsString;
- (id)assetMediaType:(id)arg1 itemStart:(double)arg2 itemDuration:(double)arg3;
- (void)cancelAutoEdit;
- (void)dealloc;
- (id /* block */)downloadCompleted;
- (float)downloadProgress;
- (id)durationsForAsset:(id)arg1 itemDuration:(double)arg2;
- (void)fetchAndPrintAssets:(id)arg1 andMemory:(id)arg2;
- (id)initForPregenerate;
- (id)initWithMemory:(id)arg1 shouldBuildMovieController:(bool)arg2;
- (bool)isAutoEditing;
- (bool)isBusy;
- (void)logFreeze:(id)arg1 message:(id)arg2;
- (id)memory;
- (id)movieController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observer;
- (id)operationQueue;
- (void)performAutoEdit;
- (void)performPersist;
- (void)pregenerateMemory:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (float)progress;
- (id)project;
- (long long)remainingAssetsToDownload;
- (id)sequence;
- (void)setDownloadCompleted:(id /* block */)arg1;
- (void)setDownloadProgress:(float)arg1;
- (void)setMemory:(id)arg1;
- (void)setMovieController:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProject:(id)arg1;
- (void)setRemainingAssetsToDownload:(long long)arg1;
- (void)setSequence:(id)arg1;
- (void)setShouldBuildMovieController:(bool)arg1;
- (void)setShouldSave:(bool)arg1;
- (void)setTopLevelCancel:(bool)arg1;
- (bool)shouldBuildMovieController;
- (bool)shouldNotifyProgress;
- (bool)shouldSave;
- (bool)topLevelCancel;
- (void)updateDownloadProgress:(float)arg1;
- (void)updateMovieController:(id)arg1;
- (void)updateProgress:(float)arg1;
- (void)updateProject:(id)arg1;
- (void)updateRemainingAssetsToDownload:(long long)arg1;

@end
