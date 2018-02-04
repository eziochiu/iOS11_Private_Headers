/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface UWLMessageWireEnvelope : PBCodable <NSCopying> {
    UWLMessageHeaders * _headers;
    NSMutableArray * _optInEvents;
    NSMutableArray * _optOutEvents;
    NSMutableArray * _playEvents;
    int  _version;
}

@property (nonatomic, retain) UWLMessageHeaders *headers;
@property (nonatomic, retain) NSMutableArray *optInEvents;
@property (nonatomic, retain) NSMutableArray *optOutEvents;
@property (nonatomic, retain) NSMutableArray *playEvents;
@property (nonatomic) int version;

+ (Class)optInEventsType;
+ (Class)optOutEventsType;
+ (Class)playEventsType;

- (void).cxx_destruct;
- (void)addOptInEvents:(id)arg1;
- (void)addOptOutEvents:(id)arg1;
- (void)addPlayEvents:(id)arg1;
- (void)clearOptInEvents;
- (void)clearOptOutEvents;
- (void)clearPlayEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)headers;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)optInEvents;
- (id)optInEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)optInEventsCount;
- (id)optOutEvents;
- (id)optOutEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)optOutEventsCount;
- (id)playEvents;
- (id)playEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)playEventsCount;
- (bool)readFrom:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setOptInEvents:(id)arg1;
- (void)setOptOutEvents:(id)arg1;
- (void)setPlayEvents:(id)arg1;
- (void)setVersion:(int)arg1;
- (int)version;
- (void)writeTo:(id)arg1;

@end
