/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFeedSource : NSObject {
    NSURL * _feedURL;
    NSArray * _siteIconURLs;
    NSURL * _sourceURL;
    long long  _state;
    bool  _subscribedWhenSyncWasOff;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSURL *feedURL;
@property (nonatomic, readonly) NSArray *siteIconURLs;
@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic, readonly) long long state;
@property (nonatomic) bool subscribedWhenSyncWasOff;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationForSyncing;
- (id)displayName;
- (id)feedURL;
- (unsigned long long)hash;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (id)initWithFeedURL:(id)arg1 sourceURL:(id)arg2 siteIconURLs:(id)arg3 title:(id)arg4 state:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringTitle:(id)arg1;
- (void)setSubscribedWhenSyncWasOff:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)siteIconURLs;
- (id)sourceURL;
- (long long)state;
- (bool)subscribedWhenSyncWasOff;
- (id)title;

@end
