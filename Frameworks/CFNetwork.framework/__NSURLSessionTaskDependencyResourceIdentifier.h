/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSURLSessionTaskDependencyResourceIdentifier : NSObject <NSCopying> {
    NSString * _URLPath;
    NSString * _mimeType;
}

@property (nonatomic, retain) NSString *URLPath;
@property (nonatomic, retain) NSString *mimeType;

- (id)URLPath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWitURLPath:(id)arg1 mimeType:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mimeType;
- (void)setMimeType:(id)arg1;
- (void)setURLPath:(id)arg1;

@end
