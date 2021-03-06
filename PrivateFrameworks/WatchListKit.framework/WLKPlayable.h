/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKPlayable : NSObject {
    NSArray * _SDHLocales;
    NSArray * _adLocales;
    bool  _appInstalled;
    NSArray * _audioTrackFormats;
    NSArray * _audioTrackLocales;
    NSString * _canonicalID;
    WLKChannelDetails * _channelDetails;
    NSString * _channelID;
    NSArray * _closedCaptionLocales;
    WLKBasicContentMetadata * _content;
    NSString * _contentID;
    long long  _contentSourceType;
    NSDictionary * _dictionary;
    NSNumber * _duration;
    NSDate * _endTime;
    bool  _entitled;
    NSString * _externalID;
    NSString * _externalServiceID;
    NSDictionary * _itsData;
    bool  _itunes;
    SSLookupItem * _lookupItem;
    NSArray * _movieClips;
    WLKPlayEvent * _playEvent;
    NSString * _playableID;
    WLKLocale * _primaryLocale;
    NSDictionary * _punchoutUrls;
    NSDate * _startTime;
    bool  _subtitled;
    NSArray * _subtitledLocales;
    NSString * _videoQuality;
}

@property (nonatomic, readonly, copy) NSArray *SDHLocales;
@property (nonatomic, readonly, copy) NSArray *adLocales;
@property (getter=isAppInstalled, nonatomic, readonly) bool appInstalled;
@property (nonatomic, readonly, copy) NSArray *audioTrackFormats;
@property (nonatomic, readonly, copy) NSArray *audioTrackLocales;
@property (nonatomic, readonly, copy) SSLookupItemOffer *bestBuyOffer;
@property (nonatomic, readonly, copy) SSLookupItemOffer *bestRentalOffer;
@property (nonatomic, readonly, copy) NSString *canonicalID;
@property (nonatomic, readonly, copy) WLKChannelDetails *channelDetails;
@property (nonatomic, readonly, copy) NSString *channelID;
@property (nonatomic, readonly, copy) NSArray *closedCaptionLocales;
@property (nonatomic, readonly) WLKBasicContentMetadata *content;
@property (nonatomic, readonly, copy) NSString *contentID;
@property (nonatomic, readonly) long long contentSourceType;
@property (nonatomic, readonly, copy) NSDictionary *dictionary;
@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly, copy) NSDate *endTime;
@property (getter=isEntitled, nonatomic, readonly) bool entitled;
@property (nonatomic, readonly, copy) NSString *externalID;
@property (nonatomic, readonly, copy) NSString *externalServiceID;
@property (nonatomic, readonly, copy) NSDictionary *itsData;
@property (getter=isiTunes, nonatomic, readonly) bool itunes;
@property (nonatomic, readonly, copy) SSLookupItem *lookupItem;
@property (nonatomic, readonly, copy) NSArray *movieClips;
@property (nonatomic, readonly, copy) NSArray *offers;
@property (nonatomic, readonly) WLKPlayEvent *playEvent;
@property (nonatomic, readonly, copy) NSString *playableID;
@property (nonatomic, readonly, copy) WLKLocale *primaryLocale;
@property (nonatomic, readonly, copy) NSDictionary *punchoutUrls;
@property (nonatomic, readonly, copy) NSDate *startTime;
@property (getter=isSubtitled, nonatomic, readonly) bool subtitled;
@property (nonatomic, readonly, copy) NSArray *subtitledLocales;
@property (nonatomic, readonly, copy) NSString *videoQuality;

+ (id)playablesWithDictionaries:(id)arg1 canonicalID:(id)arg2;

- (void).cxx_destruct;
- (id)SDHLocales;
- (id)_filteredContentSource:(id)arg1;
- (id)_localesArrayForDictionary:(id)arg1 andKey:(id)arg2;
- (bool)_supportsHD;
- (id)adLocales;
- (id)audioTrackFormats;
- (id)audioTrackLocales;
- (id)bestBuyOffer;
- (id)bestRentalOffer;
- (id)canonicalID;
- (id)channelDetails;
- (id)channelID;
- (id)closedCaptionLocales;
- (id)content;
- (id)contentID;
- (long long)contentSourceType;
- (id)description;
- (id)dictionary;
- (id)duration;
- (id)endTime;
- (id)externalID;
- (id)externalServiceID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 canonicalID:(id)arg2;
- (bool)isAppInstalled;
- (bool)isEntitled;
- (bool)isEqual:(id)arg1;
- (bool)isSubtitled;
- (bool)isiTunes;
- (id)itsData;
- (id)lookupItem;
- (id)movieClips;
- (id)offers;
- (id)playEvent;
- (id)playableID;
- (id)primaryLocale;
- (id)punchoutUrls;
- (id)startTime;
- (id)subtitledLocales;
- (id)videoQuality;

@end
