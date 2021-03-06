/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGSelfIdModelContext : NSObject {
    NSArray * features;
    long long  nameConfidence;
    unsigned long long  namePosition;
    NSString * nameSourceContent;
    NSString * nameSourceLanguage;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  nameSourceRange;
    PMLSpotlightReference * spotlightReference;
    bool  supervised;
}

- (void).cxx_destruct;
- (bool)hasValidRange;
- (id)modelFeatures;
- (id)name;

@end
