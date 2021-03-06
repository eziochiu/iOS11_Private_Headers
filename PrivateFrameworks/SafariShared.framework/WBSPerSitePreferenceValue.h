/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSPerSitePreferenceValue : NSObject {
    NSString * _localizedString;
    <NSObject> * _tag;
}

@property (nonatomic, readonly) NSString *localizedString;
@property (nonatomic, readonly) <NSObject> *tag;

+ (id)binaryOffValue;
+ (id)binaryOnValue;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithTag:(id)arg1 localizedString:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedString;
- (id)tag;

@end
