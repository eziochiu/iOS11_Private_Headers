/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPMetadataProviderSpecialization : NSObject {
    NSURL * _URL;
    <LPMetadataProviderSpecializationDelegate> * _delegate;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic) <LPMetadataProviderSpecializationDelegate> *delegate;

+ (id)specializedMetadataProviderForMetadata:(id)arg1 URL:(id)arg2;
+ (id)specializedMetadataProviderForResourceWithMIMEType:(id)arg1 URL:(id)arg2;
+ (id)specializedMetadataProviderForURL:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (void)cancel;
- (id)delegate;
- (id)initWithURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;

@end
