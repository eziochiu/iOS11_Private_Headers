/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKEvent : NSObject {
    NSDate * _endDate;
    NSString * _identifier;
    NSDictionary * _metadata;
    NSDate * _startDate;
}

@property (nonatomic, readonly, retain) NSDate *endDate;
@property (nonatomic, readonly, retain) NSString *identifier;
@property (nonatomic, readonly, retain) NSDictionary *metadata;
@property (nonatomic, readonly, retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)endDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithEntity:(id)arg1 error:(id*)arg2;
- (id)initWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)next;
- (id)previous;
- (id)startDate;

@end
