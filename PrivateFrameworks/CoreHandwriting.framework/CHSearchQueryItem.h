/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHSearchQueryItem : NSObject {
    NSSet * _strokeIdentifiers;
}

@property (nonatomic, readonly, copy) NSSet *strokeIdentifiers;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStrokeIdentifiers:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSearchQueryItem:(id)arg1;
- (id)strokeIdentifiers;

@end
