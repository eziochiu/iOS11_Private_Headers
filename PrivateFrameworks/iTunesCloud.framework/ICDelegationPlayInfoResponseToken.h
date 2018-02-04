/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegationPlayInfoResponseToken : NSObject {
    NSDate * _expirationDate;
    NSData * _tokenData;
}

@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSData *tokenData;

- (void).cxx_destruct;
- (id)expirationDate;
- (void)setExpirationDate:(id)arg1;
- (void)setTokenData:(id)arg1;
- (id)tokenData;

@end
