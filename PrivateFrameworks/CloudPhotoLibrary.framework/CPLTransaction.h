/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLTransaction : NSObject

+ (void)beginTransactionWithReason:(id)arg1 keepPower:(bool)arg2;
+ (void)endTransactionWithReason:(id)arg1;
+ (unsigned long long)transactionCount;
+ (id)transactions;

@end
