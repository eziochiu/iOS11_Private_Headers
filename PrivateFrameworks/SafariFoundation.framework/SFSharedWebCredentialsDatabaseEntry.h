/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

@interface SFSharedWebCredentialsDatabaseEntry : NSObject {
    bool  _approved;
    NSString * _domain;
    long long  _service;
}

@property (getter=isApproved, nonatomic, readonly) bool approved;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly) long long service;

- (void).cxx_destruct;
- (id)_initWithDomain:(id)arg1 service:(long long)arg2 isApproved:(bool)arg3;
- (id)description;
- (id)domain;
- (id)initWithDictionary:(id)arg1;
- (bool)isApproved;
- (long long)service;

@end
