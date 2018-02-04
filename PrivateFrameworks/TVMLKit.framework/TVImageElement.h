/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVImageElement : TVViewElement

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) long long imageType;
@property (nonatomic, readonly) NSDictionary *srcset;

- (id)URL;
- (long long)imageType;
- (id)srcset;

@end
