/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSPersistentHistoryToken : NSPersistentHistoryToken {
    NSDictionary * _storeTokens;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTransactionNumber:(id)arg1 andStoreID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)storeTokens;

@end
