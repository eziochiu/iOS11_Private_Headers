/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFAccessPolicy_Ivars : NSObject {
    NSArray * accessControlList;
    NSString * accessGroup;
    struct { 
        long long mode; 
        struct { 
            unsigned long long authenticationRequirements; 
            long long subsetCount; 
        } authenticationPolicy; 
    }  accessibility;
    long long  sharingPolicy;
}

- (void).cxx_destruct;

@end
