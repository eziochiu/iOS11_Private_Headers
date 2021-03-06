/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
 */

@interface NSSExternalAnalyticsRequestMetadata : NSObject <NSSecureCoding> {
    NSNumber * _appConfigTreatmentIdentifier;
    NSString * _articleIdentifier;
    NSString * _clientIdentifier;
    int  _eventType;
    NSString * _publisherIdentifier;
    NSString * _requestIdentifier;
    NTPBSession * _session;
    NSString * _userIdentifier;
}

@property (nonatomic, readonly, copy) NSNumber *appConfigTreatmentIdentifier;
@property (nonatomic, readonly, copy) NSString *articleIdentifier;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly) int eventType;
@property (nonatomic, readonly, copy) NSString *publisherIdentifier;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly, copy) NTPBSession *session;
@property (nonatomic, readonly, copy) NSString *userIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appConfigTreatmentIdentifier;
- (id)articleIdentifier;
- (id)clientIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (int)eventType;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1 requestIdentifier:(id)arg2 clientIdentifier:(id)arg3 appConfigTreatmentIdentifier:(id)arg4 userIdentifier:(id)arg5 articleIdentifier:(id)arg6 publisherIdentifier:(id)arg7 eventType:(int)arg8;
- (id)publisherIdentifier;
- (id)requestIdentifier;
- (id)session;
- (id)userIdentifier;

@end
