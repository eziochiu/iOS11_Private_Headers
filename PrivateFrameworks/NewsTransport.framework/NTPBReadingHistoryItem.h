/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBReadingHistoryItem : PBCodable <FCKeyValueStoreCoding, FCMutableReadingHistoryItem, NSCopying> {
    NSString * _articleID;
    NTPBDate * _firstSeenDate;
    NTPBDate * _firstSeenDateOfMaxVersionSeen;
    unsigned int  _flags;
    struct { 
        unsigned int maxVersionRead : 1; 
        unsigned int maxVersionSeen : 1; 
        unsigned int flags : 1; 
    }  _has;
    NTPBDate * _lastVisitedDate;
    long long  _maxVersionRead;
    long long  _maxVersionSeen;
}

@property (nonatomic, readonly, copy) NSString *articleID;
@property (nonatomic, retain) NSString *articleID;
@property (nonatomic, readonly) unsigned long long articleLikingStatus;
@property (nonatomic, readonly) CKRecord *asCKRecord;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *firstSeenAt;
@property (nonatomic, readonly, copy) NSDate *firstSeenAtOfMaxVersionSeen;
@property (nonatomic, retain) NTPBDate *firstSeenDate;
@property (nonatomic, retain) NTPBDate *firstSeenDateOfMaxVersionSeen;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly) bool hasArticleBeenConsumed;
@property (nonatomic, readonly) bool hasArticleBeenMarkedOffensive;
@property (nonatomic, readonly) bool hasArticleBeenRead;
@property (nonatomic, readonly) bool hasArticleBeenSeen;
@property (nonatomic, readonly) bool hasArticleID;
@property (nonatomic, readonly) bool hasFirstSeenDate;
@property (nonatomic, readonly) bool hasFirstSeenDateOfMaxVersionSeen;
@property (nonatomic) bool hasFlags;
@property (nonatomic, readonly) bool hasLastVisitedDate;
@property (nonatomic) bool hasMaxVersionRead;
@property (nonatomic) bool hasMaxVersionSeen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDate *lastVisitedAt;
@property (nonatomic, retain) NTPBDate *lastVisitedDate;
@property (nonatomic, readonly) long long maxVersionRead;
@property (nonatomic) long long maxVersionRead;
@property (nonatomic, readonly) long long maxVersionSeen;
@property (nonatomic) long long maxVersionSeen;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (id)articleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)firstSeenDate;
- (id)firstSeenDateOfMaxVersionSeen;
- (unsigned int)flags;
- (bool)hasArticleID;
- (bool)hasFirstSeenDate;
- (bool)hasFirstSeenDateOfMaxVersionSeen;
- (bool)hasFlags;
- (bool)hasLastVisitedDate;
- (bool)hasMaxVersionRead;
- (bool)hasMaxVersionSeen;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastVisitedDate;
- (long long)maxVersionRead;
- (long long)maxVersionSeen;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setFirstSeenDate:(id)arg1;
- (void)setFirstSeenDateOfMaxVersionSeen:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHasFlags:(bool)arg1;
- (void)setHasMaxVersionRead:(bool)arg1;
- (void)setHasMaxVersionSeen:(bool)arg1;
- (void)setLastVisitedDate:(id)arg1;
- (void)setMaxVersionRead:(long long)arg1;
- (void)setMaxVersionSeen:(long long)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (id)readingHistoryItemWithCKRecord:(id)arg1;

- (unsigned long long)articleLikingStatus;
- (id)asCKRecord;
- (id)firstSeenAt;
- (id)firstSeenAtOfMaxVersionSeen;
- (bool)hasArticleBeenConsumed;
- (bool)hasArticleBeenMarkedOffensive;
- (bool)hasArticleBeenRead;
- (bool)hasArticleBeenSeen;
- (id)identifier;
- (id)lastVisitedAt;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setArticleLikingStatus:(unsigned long long)arg1;
- (void)setFirstSeenAt:(id)arg1;
- (void)setFirstSeenAtOfMaxVersionSeen:(id)arg1;
- (void)setHasArticleBeenConsumed:(bool)arg1;
- (void)setHasArticleBeenMarkedOffensive:(bool)arg1;
- (void)setHasArticleBeenRead:(bool)arg1;
- (void)setHasArticleBeenSeen:(bool)arg1;
- (void)setLastVisitedAt:(id)arg1;
- (void)writeToKeyValuePair:(id)arg1;

@end
