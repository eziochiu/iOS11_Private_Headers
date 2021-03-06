/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMediaAssetDownloadRequest : ICRequestOperation {
    bool  _allowsCellularData;
    bool  _allowsCellularFallback;
    NSURL * _assetURL;
    NSURL * _destinationURL;
    bool  _discretionary;
    ICMediaAVAssetDownloadOptions * _downloadOptions;
    ICURLSession * _downloadSession;
    ICURLRequest * _request;
    ICStoreRequestContext * _requestContext;
    bool  _requiresPower;
    ICURLResponse * _response;
}

@property (nonatomic) bool allowsCellularData;
@property (nonatomic) bool allowsCellularFallback;
@property (nonatomic, copy) NSURL *destinationURL;
@property (getter=isDiscretionary, nonatomic) bool discretionary;
@property (nonatomic) bool requiresPower;

- (void).cxx_destruct;
- (id)_sessionIdentifier;
- (bool)allowsCellularData;
- (bool)allowsCellularFallback;
- (void)cancel;
- (id)destinationURL;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (id)initWithRequestContext:(id)arg1 assetURL:(id)arg2 avAssetDownloadOptions:(id)arg3;
- (bool)isDiscretionary;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;
- (bool)requiresPower;
- (void)setAllowsCellularData:(bool)arg1;
- (void)setAllowsCellularFallback:(bool)arg1;
- (void)setDestinationURL:(id)arg1;
- (void)setDiscretionary:(bool)arg1;
- (void)setRequiresPower:(bool)arg1;

@end
