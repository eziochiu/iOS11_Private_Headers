/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFaceData : NSObject <NSSecureCoding> {
    NSArray * _detectedFaces;
    NSDictionary * _faceMeshPayload;
}

@property (nonatomic, retain) NSArray *detectedFaces;
@property (nonatomic, retain) NSDictionary *faceMeshPayload;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)detectedFaces;
- (void)encodeWithCoder:(id)arg1;
- (id)faceMeshPayload;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDetectedFaces:(id)arg1;
- (void)setFaceMeshPayload:(id)arg1;

@end