/* made by EzioChiu.
 */

@protocol PUSearchResultsValueDelegate <NSObject>

@required

- (PLSearchIndexDateFormatter *)dateFormatter;
- (bool)searchIsFinished:(PUSearchResultsValue *)arg1;

@end
