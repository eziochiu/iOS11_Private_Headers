/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSMTPResponse : NSObject <NSCopying> {
    NSArray * _continuationResponses;
    id  _lastResponseLine;
    int  _status;
    unsigned int  _statusClass;
    unsigned int  _statusDetail;
    NSString * _statusString;
    unsigned int  _statusSubject;
}

@property (nonatomic, retain) NSArray *continuationResponses;
@property (nonatomic, readonly) int status;
@property (nonatomic, readonly) unsigned int statusClass;
@property (nonatomic, readonly) unsigned int statusDetail;
@property (nonatomic, readonly) NSString *statusString;
@property (nonatomic, readonly) unsigned int statusSubject;

- (void)_updateEnhancedStatusCodesFromLastResponse;
- (id)continuationResponses;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)errorMessageWithAddress:(id)arg1 defaultMessage:(id)arg2;
- (int)failureReason;
- (id)initWithStatus:(int)arg1;
- (id)lastResponseLine;
- (void)setContinuationResponses:(id)arg1;
- (void)setLastResponseLine:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (unsigned int)statusClass;
- (unsigned int)statusDetail;
- (id)statusString;
- (unsigned int)statusSubject;

@end