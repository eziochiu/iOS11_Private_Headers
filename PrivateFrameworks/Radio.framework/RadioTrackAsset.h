/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioTrackAsset : NSObject {
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly, retain) NSURL *URL;
@property (nonatomic, readonly, copy) NSString *downloadKey;
@property (nonatomic, readonly, copy) NSString *flavor;
@property (nonatomic, readonly, copy) NSDictionary *responseDictionary;
@property (nonatomic, readonly, copy) NSArray *sinfs;

- (void).cxx_destruct;
- (id)URL;
- (id)downloadKey;
- (id)flavor;
- (id)initWithResponseDictionary:(id)arg1;
- (id)responseDictionary;
- (id)sinfs;

@end
