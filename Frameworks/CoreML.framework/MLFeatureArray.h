/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLFeatureArray : NSObject <MLFeatureArray>

@property (readonly) unsigned long long count;

+ (id)featureArrayWithArray:(id)arg1 description:(id)arg2 error:(id*)arg3;
+ (id)featureArrayWithArray:(id)arg1 error:(id*)arg2;

- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;

@end
