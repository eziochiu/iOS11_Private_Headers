/* made by EzioChiu.
 */

@protocol FCCKTestQueryEndpoint <NSObject>

@required

- (void)handleQueryOperation:(CKQueryOperation *)arg1 withRecords:(NSArray *)arg2;

@end
