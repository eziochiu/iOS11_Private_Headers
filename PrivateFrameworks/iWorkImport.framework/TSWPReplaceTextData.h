/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPReplaceTextData : NSObject {
    NSString * _dictationAndAutocorrection;
    NSString * _language;
}

@property (nonatomic, readonly, copy) NSString *dictationAndAutocorrection;
@property (nonatomic, readonly, copy) NSString *language;

+ (id)replaceTextData;
+ (id)replaceTextDataWithDictationAndAutocorrection:(id)arg1;
+ (id)replaceTextDataWithLanguage:(id)arg1;
+ (id)replaceTextDataWithLanguage:(id)arg1 dictationAndAutocorrection:(id)arg2;

- (void)dealloc;
- (id)dictationAndAutocorrection;
- (id)init;
- (id)initWithDictationAndAutocorrection:(id)arg1;
- (id)initWithLanguage:(id)arg1;
- (id)initWithLanguage:(id)arg1 dictationAndAutocorrection:(id)arg2;
- (id)language;
- (id)replaceTextDataByChangingDictationAndAutocorrection:(id)arg1;
- (id)replaceTextDataByChangingLanguage:(id)arg1;

@end
