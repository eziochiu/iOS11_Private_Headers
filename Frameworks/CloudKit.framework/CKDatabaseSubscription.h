/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDatabaseSubscription : CKSubscription <NSCopying, NSSecureCoding>

@property (nonatomic, copy) NSString *recordType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithSubscriptionID:(id)arg1;

@end
