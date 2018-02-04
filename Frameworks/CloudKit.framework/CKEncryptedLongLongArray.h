/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKEncryptedLongLongArray : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *longLongArray;
@property (readonly) Class superclass;

- (id)initWithLongLongArray:(id)arg1;
- (id)longLongArray;
- (id)value;

@end