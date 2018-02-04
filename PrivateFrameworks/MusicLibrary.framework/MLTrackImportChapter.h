/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLTrackImportChapter : NSObject <NSCopying> {
    NSString * _imageCacheKey;
    NSData * _imageData;
    unsigned long long  _startTimeInMilliseconds;
    NSString * _title;
    NSURL * _url;
    NSString * _urlTitle;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSString *URLTitle;
@property (nonatomic, copy) NSString *imageCacheKey;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic) unsigned long long startTimeInMilliseconds;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)URL;
- (id)URLTitle;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)imageCacheKey;
- (id)imageData;
- (bool)isEqualIgnoringTimesAndTitle:(id)arg1;
- (void)normalizeProperties;
- (void)setImageCacheKey:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setStartTimeInMilliseconds:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setURLTitle:(id)arg1;
- (unsigned long long)startTimeInMilliseconds;
- (id)title;

@end