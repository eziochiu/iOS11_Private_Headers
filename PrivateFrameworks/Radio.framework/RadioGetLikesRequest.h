/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetLikesRequest : RadioRequest {
    unsigned long long  _numberOfBannedTracks;
    unsigned long long  _numberOfLikedTracks;
    SSURLConnectionRequest * _request;
    bool  _shouldProcessItems;
    RadioStation * _station;
}

@property (nonatomic) unsigned long long numberOfBannedTracks;
@property (nonatomic) unsigned long long numberOfLikedTracks;
@property (nonatomic) bool shouldProcessItems;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (id)initWithStation:(id)arg1;
- (unsigned long long)numberOfBannedTracks;
- (unsigned long long)numberOfLikedTracks;
- (void)setNumberOfBannedTracks:(unsigned long long)arg1;
- (void)setNumberOfLikedTracks:(unsigned long long)arg1;
- (void)setShouldProcessItems:(bool)arg1;
- (bool)shouldProcessItems;
- (void)startWithLikeBanCompletionHandler:(id /* block */)arg1;

@end
