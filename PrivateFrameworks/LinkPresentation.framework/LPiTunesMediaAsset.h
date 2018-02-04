/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaAsset : NSObject {
    NSURL * _URL;
    NSDictionary * _colors;
    Class  _customResolverClass;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly, copy) NSDictionary *colors;
@property (nonatomic, readonly, retain) Class customResolverClass;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)URL;
- (id)colors;
- (Class)customResolverClass;
- (id)initWithName:(id)arg1 customResolverClass:(Class)arg2;
- (id)initWithURL:(id)arg1 colors:(id)arg2 name:(id)arg3;
- (id)metadata;
- (id)name;

@end
