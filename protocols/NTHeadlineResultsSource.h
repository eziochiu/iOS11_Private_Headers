/* made by EzioChiu.
 */

@protocol NTHeadlineResultsSource <NSObject>

@required

- (void)fetchLatestHeadlinesWithOperationInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: NTPBHeadlineResultOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NTHeadlineResults *, NSDictionary *, NSObject<NTHeadlineResultOperationFetchInfoProviding> *, NSError *, void*

@end
