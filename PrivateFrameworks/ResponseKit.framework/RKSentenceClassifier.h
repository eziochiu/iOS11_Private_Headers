/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKSentenceClassifier : NSObject {
    NSString * _RKLinguisticTagDataDetected;
    NSArray * _alternatives;
    NSArray * _appreciations;
    NSArray * _choiceDelimiters;
    NSArray * _dataDetected;
    NSArray * _interrogatives;
    NSArray * _inversions;
    NSString * _languageIdentifier;
    NSMutableDictionary * _lemmaAvailabilityByLanguage;
    NSArray * _matchedRanges;
    NSMutableDictionary * _partofSpeechAvailabilityByLanguage;
    NSArray * _sentenceEntities;
    bool  _sentenceHasAlternativeConjunction;
    bool  _sentenceHasQuestionTerminator;
    bool  _sentenceIsAllSymbols;
    bool  _sentenceIsTerminated;
    NSString * _sentenceString;
    NSString * _sentenceStringOriginal;
    NSValue * _sentenceTag;
}

@property (retain) NSString *RKLinguisticTagDataDetected;
@property (readonly) NSArray *alternativeConjunctions;
@property (retain) NSArray *alternatives;
@property (retain) NSArray *appreciations;
@property (retain) NSArray *choiceDelimiters;
@property (retain) NSArray *dataDetected;
@property (retain) NSArray *interrogatives;
@property (retain) NSArray *inversions;
@property (readonly) NSString *languageIdentifier;
@property (retain) NSMutableDictionary *lemmaAvailabilityByLanguage;
@property (retain) NSArray *matchedRanges;
@property (retain) NSMutableDictionary *partofSpeechAvailabilityByLanguage;
@property (retain) NSArray *sentenceEntities;
@property bool sentenceHasAlternativeConjunction;
@property bool sentenceHasQuestionTerminator;
@property bool sentenceIsAllSymbols;
@property bool sentenceIsTerminated;
@property (retain) NSString *sentenceString;
@property (retain) NSString *sentenceStringOriginal;
@property (retain) NSValue *sentenceTag;

+ (id)alternativeInversionsForLanguage:(id)arg1;
+ (id)appreciationKeywordsForLanguage:(id)arg1;
+ (bool)canClassifyLanguageIdentifier:(id)arg1;
+ (id)categoryKeywordMapForLanguage:(id)arg1;
+ (id)languageIdentifierFromClassName;
+ (id)polarTagRegularExpressionForLanguage:(id)arg1;
+ (id)preProcessTextMessageForLinguisticTagger:(id)arg1 withLocale:(id)arg2;
+ (id)sensitiveSubjectRegularExpressionForLanguage:(id)arg1;
+ (id)sentenceClassification:(id)arg1 withLanguageIdentifier:(id)arg2 options:(unsigned long long)arg3;
+ (id)stringFromLexicalEntities:(id)arg1;
+ (Class)subclassForLanguageIdentifier:(id)arg1;
+ (Class)subclassForLocale:(id)arg1;

- (void).cxx_destruct;
- (id)RKLinguisticTagDataDetected;
- (id)addSentenceTerminatorQuestion:(id)arg1;
- (id)alternativeConjunctions;
- (id)alternatives;
- (void)analyzeSentence;
- (id)appreciations;
- (id)choiceDelimiters;
- (id)classifySentence;
- (id)dataDetected;
- (id)init;
- (id)interrogatives;
- (id)inversions;
- (id)languageIdentifier;
- (id)lemmaAvailabilityByLanguage;
- (id)lexicalEntitiesFromString:(id)arg1;
- (id)matchedRanges;
- (id)partofSpeechAvailabilityByLanguage;
- (id)sentenceClassification:(id)arg1 options:(unsigned long long)arg2;
- (id)sentenceEntities;
- (bool)sentenceHasAlternativeConjunction;
- (bool)sentenceHasQuestionTerminator;
- (bool)sentenceIsAllSymbols;
- (bool)sentenceIsTerminated;
- (id)sentenceString;
- (id)sentenceStringOriginal;
- (id)sentenceTag;
- (void)setAlternatives:(id)arg1;
- (void)setAppreciations:(id)arg1;
- (void)setChoiceDelimiters:(id)arg1;
- (void)setDataDetected:(id)arg1;
- (void)setInterrogatives:(id)arg1;
- (void)setInversions:(id)arg1;
- (void)setLemmaAvailabilityByLanguage:(id)arg1;
- (void)setMatchedRanges:(id)arg1;
- (void)setPartofSpeechAvailabilityByLanguage:(id)arg1;
- (void)setRKLinguisticTagDataDetected:(id)arg1;
- (void)setSentenceEntities:(id)arg1;
- (void)setSentenceHasAlternativeConjunction:(bool)arg1;
- (void)setSentenceHasQuestionTerminator:(bool)arg1;
- (void)setSentenceIsAllSymbols:(bool)arg1;
- (void)setSentenceIsTerminated:(bool)arg1;
- (void)setSentenceString:(id)arg1;
- (void)setSentenceStringOriginal:(id)arg1;
- (void)setSentenceTag:(id)arg1;

@end