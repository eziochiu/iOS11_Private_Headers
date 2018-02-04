/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface _ICQUpgradeOfferPageSpecification : _ICQPageSpecification {
    NSString * _altMessage;
    ICQLink * _bottomLink;
    NSString * _bottomLinkVisibleKey;
    NSString * _finePrintFormat;
    NSArray * _finePrintLinks;
    NSString * _iconBundleIdentifier;
    NSString * _message;
    ICQLink * _purchaseLink;
    NSDictionary * _serverDict;
    NSArray * _services;
    NSString * _title;
}

@property (nonatomic, retain) NSString *altMessage;
@property (nonatomic, retain) ICQLink *bottomLink;
@property (nonatomic, retain) NSString *bottomLinkVisibleKey;
@property (nonatomic, retain) NSString *finePrintFormat;
@property (nonatomic, retain) NSArray *finePrintLinks;
@property (nonatomic, retain) NSString *iconBundleIdentifier;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) ICQLink *purchaseLink;
@property (nonatomic, readonly) NSDictionary *serverDict;
@property (nonatomic, retain) NSArray *services;
@property (nonatomic, retain) NSString *title;

+ (id)upgradeOfferPageSpecificationSampleForLevel:(long long)arg1;

- (void).cxx_destruct;
- (id)altMessage;
- (id)bottomLink;
- (id)bottomLinkVisibleKey;
- (id)copy;
- (id)copyWithBindings:(id)arg1;
- (id)debugDescription;
- (id)finePrintFormat;
- (id)finePrintLinks;
- (id)iconBundleIdentifier;
- (id)initWithServerDictionary:(id)arg1;
- (id)initWithServerDictionary:(id)arg1 pageIdentifier:(id)arg2;
- (id)message;
- (id)purchaseLink;
- (id)serverDict;
- (id)services;
- (void)setAltMessage:(id)arg1;
- (void)setBottomLink:(id)arg1;
- (void)setBottomLinkVisibleKey:(id)arg1;
- (void)setFinePrintFormat:(id)arg1;
- (void)setFinePrintLinks:(id)arg1;
- (void)setIconBundleIdentifier:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPurchaseLink:(id)arg1;
- (void)setServices:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
