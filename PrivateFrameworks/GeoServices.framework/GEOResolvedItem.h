/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResolvedItem : NSObject {
    GEOPDResolvedItem * _resolvedItem;
}

@property (nonatomic, readonly) NSString *extractedTerm;
@property (nonatomic, readonly) int itemType;
@property (nonatomic, readonly) unsigned long long resultIndex;

- (void).cxx_destruct;
- (id)extractedTerm;
- (id)initWithResolvedItem:(id)arg1;
- (int)itemType;
- (unsigned long long)resultIndex;

@end
