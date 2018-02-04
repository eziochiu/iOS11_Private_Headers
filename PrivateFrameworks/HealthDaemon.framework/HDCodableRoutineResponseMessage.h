/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableRoutineResponseMessage : PBCodable <NSCopying> {
    NSString * _errorDescription;
    HDCodableRoutineLocationResponse * _fetchLocationResponse;
    HDCodableRoutinePredictedLocationsResponse * _fetchNextLocationResponse;
    struct { 
        unsigned int requestType : 1; 
    }  _has;
    NSString * _requestIdentifier;
    int  _requestType;
}

@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic, retain) HDCodableRoutineLocationResponse *fetchLocationResponse;
@property (nonatomic, retain) HDCodableRoutinePredictedLocationsResponse *fetchNextLocationResponse;
@property (nonatomic, readonly) bool hasErrorDescription;
@property (nonatomic, readonly) bool hasFetchLocationResponse;
@property (nonatomic, readonly) bool hasFetchNextLocationResponse;
@property (nonatomic, readonly) bool hasRequestIdentifier;
@property (nonatomic) bool hasRequestType;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic) int requestType;

- (void).cxx_destruct;
- (int)StringAsRequestType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorDescription;
- (id)fetchLocationResponse;
- (id)fetchNextLocationResponse;
- (bool)hasErrorDescription;
- (bool)hasFetchLocationResponse;
- (bool)hasFetchNextLocationResponse;
- (bool)hasRequestIdentifier;
- (bool)hasRequestType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setFetchLocationResponse:(id)arg1;
- (void)setFetchNextLocationResponse:(id)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)writeTo:(id)arg1;

@end