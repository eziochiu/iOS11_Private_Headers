/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMModelDetectorNode : AXMEvaluationNode {
    NSURL * _modelURL;
}

@property (nonatomic, retain) NSURL *modelURL;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)modelURL;
- (void)nodeInitialize;
- (bool)preloadModelIfNeeded:(id*)arg1;
- (bool)requiresVisionFramework;
- (void)setModelURL:(id)arg1;

@end
