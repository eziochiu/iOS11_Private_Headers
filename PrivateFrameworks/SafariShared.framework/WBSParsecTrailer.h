/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecTrailer : WBSParsecModel {
    NSString * _caption;
    WBSParsecImageRepresentation * _image;
    WBSParsecImageRepresentation * _overlayImage;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSString *caption;
@property (nonatomic, readonly) WBSParsecImageRepresentation *image;
@property (nonatomic, readonly) WBSParsecImageRepresentation *overlayImage;
@property (nonatomic, readonly) NSURL *url;

+ (id)schema;

- (void).cxx_destruct;
- (id)caption;
- (id)image;
- (id)initWithDictionary:(id)arg1;
- (id)overlayImage;
- (id)url;

@end
