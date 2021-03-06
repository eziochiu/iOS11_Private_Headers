/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface UWLPlayEvent : PBCodable <NSCopying> {
    NSString * _brandId;
    NSString * _bundleId;
    NSString * _canonicalId;
    NSString * _canonicalShowId;
    NSString * _externalPlayableId;
    NSString * _externalShowId;
    struct { 
        unsigned int mediaLengthInMilliseconds : 1; 
        unsigned int mediaType : 1; 
        unsigned int isCurrent : 1; 
        unsigned int isDone : 1; 
        unsigned int isShowOpen : 1; 
    }  _has;
    NSString * _internalLegId;
    bool  _isCurrent;
    bool  _isDone;
    bool  _isShowOpen;
    long long  _mediaLengthInMilliseconds;
    int  _mediaType;
    long long  _millisecondsSinceEvent;
    long long  _playHeadInMilliseconds;
    NSString * _profileId;
}

@property (nonatomic, retain) NSString *brandId;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSString *canonicalId;
@property (nonatomic, retain) NSString *canonicalShowId;
@property (nonatomic, retain) NSString *externalPlayableId;
@property (nonatomic, retain) NSString *externalShowId;
@property (nonatomic, readonly) bool hasBrandId;
@property (nonatomic, readonly) bool hasCanonicalId;
@property (nonatomic, readonly) bool hasCanonicalShowId;
@property (nonatomic, readonly) bool hasExternalShowId;
@property (nonatomic, readonly) bool hasInternalLegId;
@property (nonatomic) bool hasIsCurrent;
@property (nonatomic) bool hasIsDone;
@property (nonatomic) bool hasIsShowOpen;
@property (nonatomic) bool hasMediaLengthInMilliseconds;
@property (nonatomic) bool hasMediaType;
@property (nonatomic, readonly) bool hasProfileId;
@property (nonatomic, retain) NSString *internalLegId;
@property (nonatomic) bool isCurrent;
@property (nonatomic) bool isDone;
@property (nonatomic) bool isShowOpen;
@property (nonatomic) long long mediaLengthInMilliseconds;
@property (nonatomic) int mediaType;
@property (nonatomic) long long millisecondsSinceEvent;
@property (nonatomic) long long playHeadInMilliseconds;
@property (nonatomic, retain) NSString *profileId;

- (void).cxx_destruct;
- (int)StringAsMediaType:(id)arg1;
- (id)brandId;
- (id)bundleId;
- (id)canonicalId;
- (id)canonicalShowId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalPlayableId;
- (id)externalShowId;
- (bool)hasBrandId;
- (bool)hasCanonicalId;
- (bool)hasCanonicalShowId;
- (bool)hasExternalShowId;
- (bool)hasInternalLegId;
- (bool)hasIsCurrent;
- (bool)hasIsDone;
- (bool)hasIsShowOpen;
- (bool)hasMediaLengthInMilliseconds;
- (bool)hasMediaType;
- (bool)hasProfileId;
- (unsigned long long)hash;
- (id)internalLegId;
- (bool)isCurrent;
- (bool)isDone;
- (bool)isEqual:(id)arg1;
- (bool)isShowOpen;
- (long long)mediaLengthInMilliseconds;
- (int)mediaType;
- (id)mediaTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)millisecondsSinceEvent;
- (long long)playHeadInMilliseconds;
- (id)profileId;
- (bool)readFrom:(id)arg1;
- (void)setBrandId:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setCanonicalId:(id)arg1;
- (void)setCanonicalShowId:(id)arg1;
- (void)setExternalPlayableId:(id)arg1;
- (void)setExternalShowId:(id)arg1;
- (void)setHasIsCurrent:(bool)arg1;
- (void)setHasIsDone:(bool)arg1;
- (void)setHasIsShowOpen:(bool)arg1;
- (void)setHasMediaLengthInMilliseconds:(bool)arg1;
- (void)setHasMediaType:(bool)arg1;
- (void)setInternalLegId:(id)arg1;
- (void)setIsCurrent:(bool)arg1;
- (void)setIsDone:(bool)arg1;
- (void)setIsShowOpen:(bool)arg1;
- (void)setMediaLengthInMilliseconds:(long long)arg1;
- (void)setMediaType:(int)arg1;
- (void)setMillisecondsSinceEvent:(long long)arg1;
- (void)setPlayHeadInMilliseconds:(long long)arg1;
- (void)setProfileId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
