/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSBagURLParser : NSObject

+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfBookmarks:(id)arg1 inString:(id)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfPlaceholderInURLString:(id)arg1;
+ (id)_substituationVariableInPlaceholder:(id)arg1 includeTags:(bool)arg2;
+ (id)substitueVariablesInURLString:(id)arg1 withBlock:(id /* block */)arg2;

@end
