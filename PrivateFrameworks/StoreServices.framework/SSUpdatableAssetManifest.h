/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSUpdatableAssetManifest : NSObject <SKUIExternalResourceManager> {
    NSArray * _assets;
    NSDictionary * _assetsByName;
    SSUpdatableAsset * _bootstrapAsset;
    NSURL * _cacheURL;
    NSDictionary * _extraInfo;
    NSCache * _imageCache;
    double  _lastModifiedTimestamp;
    NSString * _name;
    double  _pollInterval;
    long long  _reloadUrgencyType;
    NSURL * _serverURL;
    NSString * _version;
}

@property (setter=_setAssets:, nonatomic, copy) NSArray *assets;
@property (setter=_setBootstrapAsset:, nonatomic, retain) SSUpdatableAsset *bootstrapAsset;
@property (setter=_setCacheURL:, nonatomic, retain) NSURL *cacheURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setExtraInfo:, nonatomic, copy) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (setter=_setLastModifiedTimestamp:, nonatomic) double lastModifiedTimestamp;
@property (setter=_setName:, nonatomic, copy) NSString *name;
@property (setter=_setPollInterval:, nonatomic) double pollInterval;
@property (setter=_setReloadUrgencyType:, nonatomic) long long reloadUrgencyType;
@property (setter=_setServerURL:, nonatomic, retain) NSURL *serverURL;
@property (readonly) Class superclass;
@property (setter=_setVersion:, nonatomic, copy) NSString *version;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

+ (id)_osVersionString;

- (void).cxx_destruct;
- (void)_setAssets:(id)arg1;
- (void)_setBootstrapAsset:(id)arg1;
- (void)_setCacheURL:(id)arg1;
- (void)_setExtraInfo:(id)arg1;
- (void)_setLastModifiedTimestamp:(double)arg1;
- (void)_setName:(id)arg1;
- (void)_setPollInterval:(double)arg1;
- (void)_setReloadUrgencyType:(long long)arg1;
- (void)_setServerURL:(id)arg1;
- (void)_setVersion:(id)arg1;
- (id)assetWithName:(id)arg1;
- (id)assets;
- (id)bootstrapAsset;
- (id)cacheURL;
- (id)extraInfo;
- (double)lastModifiedTimestamp;
- (id)name;
- (double)pollInterval;
- (long long)reloadUrgencyType;
- (id)serverURL;
- (id)version;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

+ (unsigned long long)_scaleDefinedByPath:(id)arg1;

- (id)imageForResourceName:(id)arg1;

@end