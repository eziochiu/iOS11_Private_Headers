/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPErrorFeedback : PBCodable <NSSecureCoding, _CPErrorFeedback, _CPProcessableFeedback> {
    _CPError * _error;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
    _CPError * _underlyingError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) _CPError *error;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, readonly) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUnderlyingError;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) bool requiresQueryId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) _CPError *underlyingError;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (bool)hasTimestamp;
- (bool)hasUnderlyingError;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (void)setError:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUnderlyingError:(id)arg1;
- (unsigned long long)timestamp;
- (id)underlyingError;
- (void)writeTo:(id)arg1;

@end
