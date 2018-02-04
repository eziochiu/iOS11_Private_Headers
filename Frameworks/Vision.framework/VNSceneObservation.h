/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSceneObservation : VNObservation {
    NSString * _sceneprintVersion;
    NSArray * _sceneprints;
}

@property (nonatomic, readonly, copy) NSString *sceneprintVersion;
@property (nonatomic, copy) NSArray *sceneprints;

+ (id)observationWithSceneprints:(id)arg1;
+ (bool)p_isMajorVersion:(id)arg1 equalToMajorVersion:(id)arg2;
+ (bool)p_isMinorVersion:(id)arg1 equalToMinorVersion:(id)arg2;
+ (bool)p_isSeparatedString:(id)arg1 equalToString:(id)arg2 atIndex:(unsigned long long)arg3 usingSeparator:(id)arg4;
+ (id)sceneprintCurrentVersion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSceneprints:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sceneprintVersion;
- (id)sceneprints;
- (void)setSceneprints:(id)arg1;

@end
