/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoadingRequestInternal : NSObject {
    NSMutableURLRequest * URLRequest;
    NSDictionary * cachedContentInformation;
    NSMutableData * cachedData;
    int  cancelled;
    AVAssetResourceLoadingContentInformationRequest * contentInformationRequest;
    struct OpaqueFigCustomURLHandler { } * contentKeySessionCustomURLHandler;
    struct OpaqueFigCustomURLHandler { } * customURLHandler;
    struct OpaqueFigCustomURLLoader { } * customURLLoader;
    NSObject<OS_dispatch_queue> * dataCachingQueue;
    AVAssetResourceLoadingDataRequest * dataRequest;
    struct OpaqueFigAsset { } * figAsset;
    struct OpaqueFigCPECryptor { } * figCryptor;
    struct OpaqueFigAssetImageGenerator { } * figImageGenerator;
    struct OpaqueFigPlaybackItem { } * figPlaybackItem;
    int  finished;
    NSURLRequest * redirect;
    NSDictionary * requestDictionary;
    unsigned long long  requestID;
    struct __CFDictionary { } * requestInfo;
    NSURLResponse * response;
    long long  responseInfoSentOnceToken;
    int  sentContentInfo;
    id /* block */  streamingKeyRequestCompletionHandler;
    AVWeakReference * weakReference;
    AVWeakReference * weakReferenceToResourceLoader;
}

@end
