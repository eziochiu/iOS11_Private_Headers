/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

@interface ICQOfferUpdateRequestContext : NSObject {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    NSString * _buttonId;
    NSString * _offerId;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, copy) NSString *buttonId;
@property (nonatomic, retain) NSString *offerId;

- (void).cxx_destruct;
- (id)account;
- (id)accountStore;
- (id)buttonId;
- (id)offerId;
- (void)setAccount:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setButtonId:(id)arg1;
- (void)setOfferId:(id)arg1;

@end
