/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerResponseItem : NSObject {
    NSString * _contentItemIdentifier;
    struct { 
        double snapshotTime; 
        double startTime; 
        double endTime; 
        double duration; 
        double elapsedDuration; 
        float rate; 
        float defaultRate; 
        bool isLiveContent; 
        bool isLoading; 
    }  _duration;
    NSIndexPath * _indexPath;
    MPModelGenericObject * _metadataObject;
    MPCPlayerResponse * _response;
    long long  _revision;
}

@property (nonatomic, readonly) NSString *contentItemIdentifier;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; } duration;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) MPModelGenericObject *metadataObject;
@property (nonatomic, readonly) MPCPlayerResponse *response;
@property (nonatomic, readonly) long long revision;

- (void).cxx_destruct;
- (id)_feedbackCommandWithMediaRemoteCommand:(unsigned int)arg1;
- (id)contentItemIdentifier;
- (id)dislikeCommand;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })duration;
- (id)indexPath;
- (id)initWithModelGenericObject:(id)arg1 indexPath:(id)arg2 response:(id)arg3;
- (id)likeCommand;
- (id)metadataObject;
- (id)playbackRateCommand;
- (id)rateCommand;
- (id)remove;
- (id)response;
- (long long)revision;
- (id)seekCommand;
- (id)startPictureInPicture;
- (id)wishlistCommand;

@end
