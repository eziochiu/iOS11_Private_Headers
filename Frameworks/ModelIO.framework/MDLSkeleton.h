/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLSkeleton : MDLObject <NSCopying> {
    MDLMatrix4x4Array * _jointBindTransforms;
    NSArray * _jointPaths;
    NSString * _name;
}

@property (nonatomic, readonly) MDLMatrix4x4Array *jointBindTransforms;
@property (nonatomic, readonly) NSArray *jointPaths;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithName:(id)arg1 jointPaths:(id)arg2;
- (id)jointBindTransforms;
- (id)jointPaths;
- (id)name;
- (void)setName:(id)arg1;

@end