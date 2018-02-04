/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEventQuery : _DKQuery <_DKExecutableQuery> {
    bool  _deduplicateValues;
    NSObject<OS_dispatch_queue> * _defaultQueue;
    NSArray * _eventStreams;
    unsigned long long  _limit;
    unsigned long long  _offset;
    NSPredicate * _predicate;
    bool  _readMetadata;
    long long  _resultType;
    id /* block */  _resultsHandler;
    NSArray * _sortDescriptors;
}

@property bool deduplicateValues;
@property (retain) NSArray *eventStreams;
@property unsigned long long limit;
@property unsigned long long offset;
@property (retain) NSPredicate *predicate;
@property bool readMetadata;
@property long long resultType;
@property (copy) id /* block */ resultsHandler;
@property (retain) NSArray *sortDescriptors;

+ (id)eventQueryWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5;
+ (id)eventQueryWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5 resultHandler:(id /* block */)arg6;
+ (id)expressionForEventDuration;
+ (id)predicateForEventsOfMaximumDuration:(double)arg1;
+ (id)predicateForEventsOfMinimumDuration:(double)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)constructFetchRequestPredicate;
- (bool)deduplicateValues;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventStreams;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescriptors:(id)arg5 resultHandler:(id /* block */)arg6;
- (unsigned long long)limit;
- (unsigned long long)offset;
- (id)predicate;
- (bool)readMetadata;
- (long long)resultType;
- (id /* block */)resultsHandler;
- (void)setDeduplicateValues:(bool)arg1;
- (void)setEventStreams:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setPredicate:(id)arg1;
- (void)setReadMetadata:(bool)arg1;
- (void)setResultType:(long long)arg1;
- (void)setResultsHandler:(id /* block */)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end