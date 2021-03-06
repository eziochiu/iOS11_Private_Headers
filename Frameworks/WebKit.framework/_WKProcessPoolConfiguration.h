/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKProcessPoolConfiguration : NSObject <NSCopying, WKObject> {
    struct ObjectStorage<API::ProcessPoolConfiguration> { 
        struct type { 
            unsigned char __lx[232]; 
        } data; 
    }  _processPoolConfiguration;
}

@property (nonatomic, copy) NSString *CTDataConnectionServiceType;
@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (nonatomic, copy) NSArray *additionalReadAccessAllowedURLs;
@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic, copy) NSArray *alwaysRevalidatedURLSchemes;
@property (nonatomic) bool alwaysRunsAtBackgroundPriority;
@property (nonatomic, copy) NSArray *cachePartitionedURLSchemes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long diskCacheSizeOverride;
@property (nonatomic) bool diskCacheSpeculativeValidationEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreSynchronousMessagingTimeoutsForTesting;
@property (nonatomic, copy) NSURL *injectedBundleURL;
@property (nonatomic) unsigned long long maximumProcessCount;
@property (nonatomic) int presentingApplicationPID;
@property (nonatomic) bool shouldCaptureAudioInUIProcess;
@property (nonatomic) bool shouldTakeUIBackgroundAssertion;
@property (nonatomic, copy) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, copy) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly) Class superclass;

- (id)CTDataConnectionServiceType;
- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id)additionalReadAccessAllowedURLs;
- (bool)allowsCellularAccess;
- (id)alwaysRevalidatedURLSchemes;
- (bool)alwaysRunsAtBackgroundPriority;
- (id)cachePartitionedURLSchemes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (long long)diskCacheSizeOverride;
- (bool)diskCacheSpeculativeValidationEnabled;
- (bool)ignoreSynchronousMessagingTimeoutsForTesting;
- (id)init;
- (id)injectedBundleURL;
- (unsigned long long)maximumProcessCount;
- (int)presentingApplicationPID;
- (void)setAdditionalReadAccessAllowedURLs:(id)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setAlwaysRevalidatedURLSchemes:(id)arg1;
- (void)setAlwaysRunsAtBackgroundPriority:(bool)arg1;
- (void)setCTDataConnectionServiceType:(id)arg1;
- (void)setCachePartitionedURLSchemes:(id)arg1;
- (void)setDiskCacheSizeOverride:(long long)arg1;
- (void)setDiskCacheSpeculativeValidationEnabled:(bool)arg1;
- (void)setIgnoreSynchronousMessagingTimeoutsForTesting:(bool)arg1;
- (void)setInjectedBundleURL:(id)arg1;
- (void)setMaximumProcessCount:(unsigned long long)arg1;
- (void)setPresentingApplicationPID:(int)arg1;
- (void)setShouldCaptureAudioInUIProcess:(bool)arg1;
- (void)setShouldTakeUIBackgroundAssertion:(bool)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (bool)shouldCaptureAudioInUIProcess;
- (bool)shouldTakeUIBackgroundAssertion;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;

@end
