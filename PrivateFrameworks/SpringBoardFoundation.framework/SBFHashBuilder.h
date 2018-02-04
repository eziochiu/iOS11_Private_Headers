/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFHashBuilder : NSObject

+ (unsigned long long)arrayHash:(id)arg1;
+ (unsigned long long)boolHash:(bool)arg1;
+ (unsigned long long)doubleHash:(double)arg1;
+ (unsigned long long)hashWithBlocks:(id /* block */)arg1;
+ (unsigned long long)integerHash:(long long)arg1;
+ (unsigned long long)objectHash:(id)arg1;
+ (unsigned long long)pointerHash:(void*)arg1;
+ (unsigned long long)unsignedIntegerHash:(unsigned long long)arg1;

@end