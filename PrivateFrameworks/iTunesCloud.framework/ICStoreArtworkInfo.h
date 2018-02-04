/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStoreArtworkInfo : NSObject <NSCopying> {
    NSURL * _artworkURL;
    NSArray * _responseArray;
    NSDictionary * _responseDictionary;
    NSArray * _sortedResponseArray;
}

@property (nonatomic, readonly, copy) NSURL *artworkURL;
@property (nonatomic, readonly) bool hasOriginalSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } originalSize;
@property (nonatomic, readonly, copy) NSArray *responseArray;
@property (nonatomic, readonly, copy) NSDictionary *responseDictionary;

- (void).cxx_destruct;
- (id)_sortedResponseArray;
- (id)artworkURL;
- (id)artworkURLWithSize:(struct CGSize { double x1; double x2; })arg1 cropStyle:(id)arg2 format:(id)arg3;
- (id)artworkURLWithSize:(struct CGSize { double x1; double x2; })arg1 cropStyle:(id)arg2 format:(id)arg3 preferP3ColorSpace:(bool)arg4;
- (struct CGColor { }*)copyColorWithKind:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasOriginalSize;
- (id)initWithArtworkResponseArray:(id)arg1;
- (id)initWithArtworkResponseDictionary:(id)arg1;
- (id)initWithArtworkResponseValue:(id)arg1;
- (id)initWithArtworkURL:(id)arg1;
- (struct CGSize { double x1; double x2; })originalSize;
- (id)responseArray;
- (id)responseDictionary;

@end
