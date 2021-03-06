/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPLookupHintRelevancyFeedback : PBCodable <NSSecureCoding, _CPLookupHintRelevancyFeedback, _CPProcessableFeedback> {
    NSString * _context;
    bool  _discarded;
    NSString * _domain;
    int  _grade;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int discarded : 1; 
        unsigned int grade : 1; 
    }  _has;
    _CPRange * _hintRange;
    unsigned long long  _timestamp;
}

@property (nonatomic, copy) NSString *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool discarded;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic) int grade;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic, readonly) bool hasDiscarded;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic, readonly) bool hasGrade;
@property (nonatomic, readonly) bool hasHintRange;
@property (nonatomic, readonly) bool hasTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _CPRange *hintRange;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) bool requiresQueryId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)context;
- (id)dictionaryRepresentation;
- (bool)discarded;
- (id)domain;
- (id)feedbackJSON;
- (int)grade;
- (bool)hasContext;
- (bool)hasDiscarded;
- (bool)hasDomain;
- (bool)hasGrade;
- (bool)hasHintRange;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)hintRange;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (void)setContext:(id)arg1;
- (void)setDiscarded:(bool)arg1;
- (void)setDomain:(id)arg1;
- (void)setGrade:(int)arg1;
- (void)setHintRange:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
