/* made by EzioChiu.
 */

@protocol MPTracklistEnumerationResult <NSObject>

@required

- (long long)branchDepth;
- (long long)entryType;
- (<MPTracklistEnumerationItem> *)itemResult;
- (<MPTracklistEnumerationTrackingEntry> *)trackingEntryResult;

@end
