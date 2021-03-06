/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPEndNetworkSearchFeedback : PBCodable <NSSecureCoding, _CPEndNetworkSearchFeedback, _CPFeedbackUUID, _CPProcessableFeedback> {
    double  _duration;
    NSString * _fbq;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int responseSize : 1; 
        unsigned int statusCode : 1; 
        unsigned int duration : 1; 
    }  _has;
    _CPStruct * _networkTimingData;
    NSString * _parsecStatus;
    NSString * _partialClientIp;
    long long  _responseSize;
    int  _statusCode;
    unsigned long long  _timestamp;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *fbq;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic, readonly) bool hasDuration;
@property (nonatomic, readonly) bool hasFbq;
@property (nonatomic, readonly) bool hasNetworkTimingData;
@property (nonatomic, readonly) bool hasParsecStatus;
@property (nonatomic, readonly) bool hasPartialClientIp;
@property (nonatomic, readonly) bool hasResponseSize;
@property (nonatomic, readonly) bool hasStatusCode;
@property (nonatomic, readonly) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUuid;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _CPStruct *networkTimingData;
@property (nonatomic, copy) NSString *parsecStatus;
@property (nonatomic, copy) NSString *partialClientIp;
@property (nonatomic, readonly) bool requiresQueryId;
@property (nonatomic) long long responseSize;
@property (nonatomic) int statusCode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly, copy) NSString *uuid;
@property (nonatomic, copy) NSString *uuid;

- (void).cxx_destruct;
- (id)_formatNetworkTimingData;
- (id)dictionaryRepresentation;
- (double)duration;
- (id)fbq;
- (id)feedbackJSON;
- (bool)hasDuration;
- (bool)hasFbq;
- (bool)hasNetworkTimingData;
- (bool)hasParsecStatus;
- (bool)hasPartialClientIp;
- (bool)hasResponseSize;
- (bool)hasStatusCode;
- (bool)hasTimestamp;
- (bool)hasUuid;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithStartSearch:(id)arg1 responseSize:(long long)arg2 statusCode:(long long)arg3 parsecStatus:(id)arg4 parsecDuration:(double)arg5 fbq:(id)arg6 partialClientIp:(id)arg7 networkTimingData:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)networkTimingData;
- (id)parsecStatus;
- (id)partialClientIp;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (long long)responseSize;
- (void)setDuration:(double)arg1;
- (void)setFbq:(id)arg1;
- (void)setNetworkTimingData:(id)arg1;
- (void)setParsecStatus:(id)arg1;
- (void)setPartialClientIp:(id)arg1;
- (void)setResponseSize:(long long)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuid:(id)arg1;
- (int)statusCode;
- (unsigned long long)timestamp;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
