/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLModelErrorUtils : NSObject

+ (id)IOErrorWithString:(id)arg1;
+ (id)errorWithCode:(long long)arg1 format:(id)arg2 args:(char *)arg3;
+ (id)errorWithCode:(long long)arg1 string:(id)arg2;
+ (id)featureTypeErrorWithString:(id)arg1;
+ (id)genericErrorWithString:(id)arg1;

@end
