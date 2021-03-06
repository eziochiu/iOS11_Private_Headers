/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelSocialPerson : MPModelPerson {
    id /* block */  _artworkCatalogBlock;
    NSString * _biography;
    NSString * _handle;
    long long  _pendingRequestsCount;
    bool  _privatePerson;
    NSString * _uncensoredName;
    bool  _verified;
}

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSString *biography;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic) long long pendingRequestsCount;
@property (getter=isPrivate, nonatomic) bool privatePerson;
@property (nonatomic, copy) NSString *uncensoredName;
@property (getter=isVerified, nonatomic) bool verified;

+ (id)__MPModelPropertySocialPersonArtwork__PROPERTY;
+ (id)__MPModelPropertySocialPersonBiography__PROPERTY;
+ (id)__MPModelPropertySocialPersonHandle__PROPERTY;
+ (id)__MPModelPropertySocialPersonIsPrivate__PROPERTY;
+ (id)__MPModelPropertySocialPersonIsVerified__PROPERTY;
+ (id)__MPModelPropertySocialPersonPendingRequestsCount__PROPERTY;
+ (id)__MPModelPropertySocialPersonUncensoredName__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__biography__KEY;
+ (id)__handle__KEY;
+ (id)__pendingRequestsCount__KEY;
+ (id)__privatePerson__KEY;
+ (id)__uncensoredName__KEY;
+ (id)__verified__KEY;
+ (id)kind;
+ (id)storeItemMetadataRequestItemIdentifierForIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id /* block */)artworkCatalogBlock;
- (id)biography;
- (id)handle;
- (bool)isPrivate;
- (bool)isVerified;
- (long long)pendingRequestsCount;
- (void)setArtworkCatalogBlock:(id /* block */)arg1;
- (void)setBiography:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setPendingRequestsCount:(long long)arg1;
- (void)setPrivatePerson:(bool)arg1;
- (void)setUncensoredName:(id)arg1;
- (void)setVerified:(bool)arg1;
- (id)uncensoredName;

@end
