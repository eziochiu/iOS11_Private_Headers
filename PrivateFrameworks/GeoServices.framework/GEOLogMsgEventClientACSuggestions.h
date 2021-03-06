/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventClientACSuggestions : PBCodable <NSCopying> {
    NSMutableArray * _entries;
    struct { 
        unsigned int selectedIndex : 1; 
    }  _has;
    NSString * _query;
    NSMutableArray * _queryTokens;
    int  _selectedIndex;
}

@property (nonatomic, retain) NSMutableArray *entries;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic) bool hasSelectedIndex;
@property (nonatomic, retain) NSString *query;
@property (nonatomic, retain) NSMutableArray *queryTokens;
@property (nonatomic) int selectedIndex;

+ (Class)entriesType;
+ (Class)queryTokensType;

- (void).cxx_destruct;
- (void)addEntries:(id)arg1;
- (void)addQueryTokens:(id)arg1;
- (void)clearEntries;
- (void)clearQueryTokens;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entries;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (bool)hasQuery;
- (bool)hasSelectedIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (id)queryTokens;
- (id)queryTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)queryTokensCount;
- (bool)readFrom:(id)arg1;
- (int)selectedIndex;
- (void)setEntries:(id)arg1;
- (void)setHasSelectedIndex:(bool)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryTokens:(id)arg1;
- (void)setSelectedIndex:(int)arg1;
- (void)writeTo:(id)arg1;

@end
