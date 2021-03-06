/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextElementOpenAction : NTKUpNextElementAction {
    NSString * _applicationID;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *applicationID;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (void)_performWithContext:(id)arg1;
- (id)applicationID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithURL:(id)arg1 applicationID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)url;

@end
