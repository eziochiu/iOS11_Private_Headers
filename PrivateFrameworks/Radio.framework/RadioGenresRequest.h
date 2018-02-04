/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGenresRequest : RadioGetGenreTreeNodesRequest

+ (id)cacheKeyForGenreWithNodeID:(unsigned long long)arg1;
+ (id)fallbackRequestPath;
+ (id)requestBagKey;
+ (id)responseContentKey;

@end
