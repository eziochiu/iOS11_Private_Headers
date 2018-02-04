/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFIndication : NSObject {
    NSString * _client;
    NSDate * _date;
    double  _score;
}

@property (nonatomic, readonly) NSString *client;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) double score;

+ (id)indicationWithScore:(double)arg1 date:(id)arg2;
+ (id)indicationWithScore:(double)arg1 date:(id)arg2 client:(id)arg3;

- (void).cxx_destruct;
- (id)client;
- (id)date;
- (double)score;

@end
