/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCyclerBookmarkRepresentation : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _extraAttributes;
    NSString * _title;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, copy) NSDictionary *extraAttributes;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extraAttributes;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2;
- (bool)isEquivalent:(id)arg1;
- (id)pairsOfBookmarksWithDifferingExtraAttributesComparedTo:(id)arg1;
- (void)setExtraAttributes:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)title;
- (id)uniqueIdentifier;

@end