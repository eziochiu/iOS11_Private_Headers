/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactMatchSummarizer : NSObject {
    void * _tokenList;
    struct __CFStringTokenizer { } * _tokenizer;
}

+ (id)keyDescriptorForContactIdentifiers:(id)arg1 matchInfos:(id)arg2;
+ (id)summaryProperties;
+ (id)summaryPropertyForMatchInfo:(id)arg1;

- (id)attributedStringForPropertyValueString:(id)arg1 queryTerms:(id)arg2 outMatchCount:(unsigned long long*)arg3;
- (void)dealloc;
- (id)init;
- (id)summaryForContact:(id)arg1 matchInfo:(id)arg2;

@end
