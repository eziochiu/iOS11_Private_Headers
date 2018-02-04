/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFVideoMetadata : NSObject

+ (id)arrayByRemovingMetadataItemOfType:(unsigned char)arg1 fromArray:(id)arg2 error:(id*)arg3;
+ (bool)hasValidMetadataForLoopingVideoAsset:(id)arg1;
+ (id)metadataItemValueFromAsset:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3;
+ (id)metadataItemsWithMetadataType:(unsigned char)arg1 value:(id)arg2 error:(id*)arg3;
+ (id)quickTimeMetadataItemValueFromAsset:(id)arg1 withKey:(id)arg2;
+ (id)quickTimeMetadataItemsWithKey:(id)arg1 value:(id)arg2;
+ (bool)readMetadataType:(unsigned char)arg1 fromAVAsset:(id)arg2 value:(id*)arg3 error:(id*)arg4;
+ (bool)readMetadataType:(unsigned char)arg1 fromFileURL:(id)arg2 value:(id*)arg3 error:(id*)arg4;

@end