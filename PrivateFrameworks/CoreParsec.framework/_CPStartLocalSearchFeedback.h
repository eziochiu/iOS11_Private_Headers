/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPStartLocalSearchFeedback : PBCodable <NSSecureCoding, _CPFeedbackUUID, _CPProcessableFeedback, _CPStartLocalSearchFeedback> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int triggerEvent : 1; 
        unsigned int queryId : 1; 
        unsigned int indexType : 1; 
    }  _has;
    int  _indexType;
    NSString * _input;
    unsigned long long  _queryId;
    unsigned long long  _timestamp;
    int  _triggerEvent;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic, readonly) bool hasIndexType;
@property (nonatomic, readonly) bool hasInput;
@property (nonatomic, readonly) bool hasQueryId;
@property (nonatomic, readonly) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTriggerEvent;
@property (nonatomic, readonly) bool hasUuid;
@property (readonly) unsigned long long hash;
@property (nonatomic) int indexType;
@property (nonatomic, copy) NSString *input;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic, readonly) bool requiresQueryId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;
@property (nonatomic, readonly, copy) NSString *uuid;
@property (nonatomic, copy) NSString *uuid;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasIndexType;
- (bool)hasInput;
- (bool)hasQueryId;
- (bool)hasTimestamp;
- (bool)hasTriggerEvent;
- (bool)hasUuid;
- (unsigned long long)hash;
- (int)indexType;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)input;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)queryId;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (void)setIndexType:(int)arg1;
- (void)setInput:(id)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (void)setUuid:(id)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
