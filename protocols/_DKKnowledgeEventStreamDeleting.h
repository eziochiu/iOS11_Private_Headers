/* made by EzioChiu.
 */

@protocol _DKKnowledgeEventStreamDeleting

@required

- (unsigned long long)deleteAllEventsInEventStream:(_DKEventStream *)arg1 error:(id*)arg2;
- (unsigned long long)deleteAllEventsMatchingPredicate:(NSPredicate *)arg1 error:(id*)arg2;

@end
