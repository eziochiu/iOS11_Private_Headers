/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXProductAction : SXAction {
    NSString * affiliateIdentifier;
    NSString * campaignIdentifier;
    NSNumber * productIdentifier;
}

@property (nonatomic, retain) NSString *affiliateIdentifier;
@property (nonatomic, retain) NSString *campaignIdentifier;
@property (nonatomic, readonly) NSNumber *productIdentifier;

- (void).cxx_destruct;
- (id)affiliateIdentifier;
- (id)campaignIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)handlerClass;
- (id)initWithAddition:(id)arg1;
- (id)initWithProductIdentifier:(id)arg1 addition:(id)arg2;
- (id)productIdentifier;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setCampaignIdentifier:(id)arg1;

@end
