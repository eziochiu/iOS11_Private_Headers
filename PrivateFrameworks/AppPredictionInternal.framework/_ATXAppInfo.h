/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppInfo : NSObject <NSCopying> {
    NSString * _bundleId;
    NSString * _genre;
    NSDate * _installDate;
    bool  _isExtension;
    NSDate * _lastLaunch;
    NSDate * _lastSpotlightLaunch;
    NSArray * _subGenres;
}

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic, copy) NSDate *installDate;
@property (nonatomic) bool isExtension;
@property (nonatomic, copy) NSDate *lastLaunch;
@property (nonatomic, copy) NSDate *lastSpotlightLaunch;
@property (nonatomic, copy) NSArray *subGenres;

- (void).cxx_destruct;
- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)genre;
- (id)init;
- (id)initWithBundleId:(id)arg1;
- (id)initWithBundleId:(id)arg1 isExtension:(bool)arg2;
- (id)initWithBundleId:(id)arg1 isExtension:(bool)arg2 installDate:(id)arg3 genre:(id)arg4 subGenres:(id)arg5;
- (id)initWithBundleId:(id)arg1 isExtension:(bool)arg2 installDate:(id)arg3 lastLaunch:(id)arg4 lastSpotlightLaunch:(id)arg5 genre:(id)arg6 subGenres:(id)arg7;
- (id)installDate;
- (bool)isExtension;
- (id)lastLaunch;
- (id)lastSpotlightLaunch;
- (void)setBundleId:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setInstallDate:(id)arg1;
- (void)setIsExtension:(bool)arg1;
- (void)setLastLaunch:(id)arg1;
- (void)setLastSpotlightLaunch:(id)arg1;
- (void)setSubGenres:(id)arg1;
- (id)subGenres;

@end
