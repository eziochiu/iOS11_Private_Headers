/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNModelFileImpl : NSObject <VNModelFile> {
    const struct mapped_model_file { int x1; void *x2; unsigned long long x3; } * m_impl;
}

@property (nonatomic, readonly) const void*baseAddress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, retain) NSString *resourcePath;
@property (readonly) Class superclass;

- (void)advise:(long long)arg1;
- (const void*)baseAddress;
- (id)initWithMappedModel:(const struct mapped_model_file { int x1; void *x2; unsigned long long x3; }*)arg1;
- (unsigned long long)length;

@end
