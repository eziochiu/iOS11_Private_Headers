/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAJobWorkInfoReader : NSObject {
    unsigned long long  _fetchLimit;
    NSMutableArray * _workInfosQueue;
}

@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic, readonly) unsigned long long queueCount;

- (void).cxx_destruct;
- (unsigned long long)fetchLimit;
- (id)init;
- (unsigned long long)queueCount;
- (void)setFetchLimit:(unsigned long long)arg1;
- (id)workInfoWithCount:(unsigned long long)arg1 fetchBlock:(id /* block */)arg2;

@end
