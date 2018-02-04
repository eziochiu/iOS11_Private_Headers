/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVArtworkServiceResizeRequestDestination : NSObject <NSSecureCoding> {
    double  _compressionQuality;
    NSURL * _destinationURL;
    long long  _format;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) double compressionQuality;
@property (nonatomic, readonly) NSURL *destinationURL;
@property (nonatomic, readonly) long long format;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)destinationWithFormat:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 url:(id)arg3;
+ (id)jpegDestinationWithSize:(struct CGSize { double x1; double x2; })arg1 compressionQuality:(double)arg2 url:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)compressionQuality;
- (id)description;
- (id)destinationURL;
- (void)encodeWithCoder:(id)arg1;
- (long long)format;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 compressionQuality:(double)arg3 destinationURL:(id)arg4;
- (struct CGSize { double x1; double x2; })size;

@end