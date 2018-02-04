/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADSubscriptionEvent : NSObject <NSCopying> {
    double  _eventTime;
    NSDictionary * _info;
    NSString * _qToken;
    NSString * _sourceID;
    long long  _type;
}

@property (nonatomic) double eventTime;
@property (nonatomic, retain) NSDictionary *info;
@property (nonatomic, retain) NSString *qToken;
@property (nonatomic, retain) NSString *sourceID;
@property (nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)eventTime;
- (id)info;
- (id)initWithType:(long long)arg1 withQToken:(id)arg2 withSourceID:(id)arg3 withEventTime:(double)arg4 withInfo:(id)arg5;
- (id)qToken;
- (void)setEventTime:(double)arg1;
- (void)setInfo:(id)arg1;
- (void)setQToken:(id)arg1;
- (void)setSourceID:(id)arg1;
- (void)setType:(long long)arg1;
- (id)sourceID;
- (long long)type;

@end