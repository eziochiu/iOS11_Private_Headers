/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedResponse : NSObject {
    NSError * _error;
    NSString * _feedID;
    NSArray * _feedItems;
    FCFeedRange * _feedRange;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSString *feedID;
@property (nonatomic, copy) NSArray *feedItems;
@property (nonatomic, copy) FCFeedRange *feedRange;

- (void).cxx_destruct;
- (id)error;
- (id)feedID;
- (id)feedItems;
- (id)feedRange;
- (id)feedResponseByMergingWithResponse:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFeedID:(id)arg1;
- (void)setFeedItems:(id)arg1;
- (void)setFeedRange:(id)arg1;

@end
