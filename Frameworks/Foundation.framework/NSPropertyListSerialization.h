/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPropertyListSerialization : NSObject {
    void * reserved;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dataFromPropertyList:(id)arg1 format:(unsigned long long)arg2 errorDescription:(out id*)arg3;
+ (id)dataWithPropertyList:(id)arg1 format:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(out id*)arg4;
+ (bool)propertyList:(id)arg1 isValidForFormat:(unsigned long long)arg2;
+ (id)propertyListFromData:(id)arg1 mutabilityOption:(unsigned long long)arg2 format:(unsigned long long*)arg3 errorDescription:(out id*)arg4;
+ (id)propertyListWithData:(id)arg1 options:(unsigned long long)arg2 format:(unsigned long long*)arg3 error:(out id*)arg4;
+ (id)propertyListWithStream:(id)arg1 options:(unsigned long long)arg2 format:(unsigned long long*)arg3 error:(out id*)arg4;
+ (long long)writePropertyList:(id)arg1 toStream:(id)arg2 format:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(out id*)arg5;

- (id)init;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCSafePropertyListWithData:(id)arg1 options:(unsigned long long)arg2 format:(unsigned long long*)arg3 error:(out id*)arg4;

@end
