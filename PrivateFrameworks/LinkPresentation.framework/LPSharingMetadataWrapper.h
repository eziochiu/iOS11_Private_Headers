/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPSharingMetadataWrapper : NSObject <NSSecureCoding> {
    bool  _hasFetchedSubresources;
    LPLinkMetadata * _metadata;
}

@property (nonatomic) bool hasFetchedSubresources;
@property (nonatomic, retain) LPLinkMetadata *metadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasFetchedSubresources;
- (id)initWithCoder:(id)arg1;
- (id)metadata;
- (void)setHasFetchedSubresources:(bool)arg1;
- (void)setMetadata:(id)arg1;

@end
