/* made by EzioChiu.
 */

@protocol PGGraphDateNode <NSObject>

@required

- (void)dateEnumerateHolidayNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphEdge *, PGGraphHolidayNode *, bool*, void*
- (void)dateEnumerateMomentNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphEdge *, PGGraphMomentNode *, bool*, void*

@end
