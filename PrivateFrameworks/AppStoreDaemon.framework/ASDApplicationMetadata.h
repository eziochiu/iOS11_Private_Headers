/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDApplicationMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _accountID;
    NSString * _accountName;
    NSString * _altDSID;
    NSString * _artworkPath;
    NSString * _bundleID;
    NSNumber * _externalVersionIdentifier;
    NSNumber * _installOrder;
    NSNumber * _itemID;
    NSString * _itemName;
    NSNumber * _purchaserDSID;
    NSNumber * _storeFront;
    NSString * _vendorName;
}

@property (nonatomic, copy) NSNumber *accountID;
@property (nonatomic, copy) NSString *accountName;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *artworkPath;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, copy) NSNumber *externalVersionIdentifier;
@property (nonatomic, copy) NSNumber *installOrder;
@property (nonatomic, copy) NSNumber *itemID;
@property (nonatomic, copy) NSString *itemName;
@property (nonatomic, copy) NSNumber *purchaserDSID;
@property (nonatomic, copy) NSNumber *storeFront;
@property (nonatomic, copy) NSString *vendorName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)accountName;
- (id)altDSID;
- (id)artworkPath;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalVersionIdentifier;
- (id)initWithBundleID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)installOrder;
- (id)itemID;
- (id)itemName;
- (id)purchaserDSID;
- (void)setAccountID:(id)arg1;
- (void)setAccountName:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setArtworkPath:(id)arg1;
- (void)setExternalVersionIdentifier:(id)arg1;
- (void)setInstallOrder:(id)arg1;
- (void)setItemID:(id)arg1;
- (void)setItemName:(id)arg1;
- (void)setPurchaserDSID:(id)arg1;
- (void)setStoreFront:(id)arg1;
- (void)setVendorName:(id)arg1;
- (id)storeFront;
- (id)vendorName;

@end
